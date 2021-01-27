// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/handler.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "handler.hpp"
#include "../MetaModelRepository.hpp"
#include "../util/debug.hpp"
#include "../util/escape_html.hpp"
#include "../mapping.hpp"
#include <iostream>
#include <vector>
#include <map> // for pair
#include <ecore.hpp>

using namespace ::ecorecpp;
using namespace ::ecorecpp::parser;
using namespace ::ecore;

handler::handler() :
    m_level(0), m_expected_literal(false)
{
}

handler::~handler()
{
}


void handler::characters(xml_parser::match_pair const& chars)
{
    if (m_expected_literal)
    {
        try
        {
            assert( m_level);

            ::ecorecpp::mapping::type_definitions::string_t _literal(chars.first, chars.second);

			util::unescape_html(_literal);

            // DEBUG_MSG(cout, "expected!! " << length << " " << _literal);

            EObject_ptr const& peobj = m_objects.back();
            EClass_ptr const peclass = peobj->eClass();
            ::ecorecpp::mapping::type_definitions::string_t const& _name =
                  m_expected_literal_name;

            DEBUG_MSG(cout, _name);

            EStructuralFeature_ptr const esf = peclass->getEStructuralFeature(
                    _name);

            EDataType_ptr const edt = as< EDataType >(esf->getEType());

            EFactory_ptr const efac = edt->getEPackage()->getEFactoryInstance();
            assert(efac);

            any _any = efac->createFromString(edt, _literal);
            peobj->eSet(esf, _any);
        } catch (const char * e)
        {
            ERROR_MSG("ERROR: " << e);
        }
    }
}

void handler::processing_tag (xml_parser::match_pair const& tag,
                              xml_parser::attr_list_t const& attr_list)
{
}


void handler::start_tag(xml_parser::match_pair const& name,
                        xml_parser::attr_list_t const& attributes)
{
    ::ecorecpp::mapping::type_definitions::string_t * _type = 0;
    ::ecorecpp::mapping::type_definitions::string_t _name(name.first, name.second);
    static MetaModelRepository_ptr _mmr = MetaModelRepository::_instance();

    // Data
    EPackage_ptr epkg = 0;
    EFactory_ptr efac;
    EClassifier_ptr eclassifier = 0;
    EClass_ptr eclass = 0;
    EObject_ptr eobj = 0;
		std::string xmi_id = "";
    const size_t length = attributes.size();
    std::vector< std::pair< ::ecorecpp::mapping::type_definitions::string_t, ::ecorecpp::mapping::type_definitions::string_t > > attr_list(length);

    if (!m_level)
        _type = &_name;

    if (length)
        for (size_t i = 0; i < length; i++)
        {
            // xsi:type may not be the first attribute using our serializer
            attr_list[i] = std::make_pair(
                ::ecorecpp::mapping::type_definitions::string_t (attributes[i].first.first,
                              attributes[i].first.second),
                ::ecorecpp::mapping::type_definitions::string_t (attributes[i].second.first,
                              attributes[i].second.second));

			util::unescape_html(attr_list[i].second);

            if (!_type && (attr_list[i].first == "xsi:type"))
                _type = &attr_list[i].second;
						if (attr_list[i].first.rfind("xmlns:", 0) == 0) {
								::ecorecpp::mapping::type_definitions::string_t _new_ns_prefix = attr_list[i].first.substr(6);
								_mmr->addNSPrefix(_new_ns_prefix, attr_list[i].second);
						} else if (attr_list[i].first == "xmi:id") {
								xmi_id = attr_list[i].second;
						}
        }

    if (_type)
    {
        size_t const double_dot = _type->find(L':', 0);
        ::ecorecpp::mapping::type_definitions::string_t _type_ns = _type->substr(0, double_dot);
        ::ecorecpp::mapping::type_definitions::string_t _type_name = _type->substr(double_dot + 1);

        epkg = _mmr->getByNSPrefix(_type_ns);
        eclassifier = epkg->getEClassifier(_type_name);
    }
    else
    {
        assert( m_level);
        eclassifier
                = m_objects.back()->eClass()->getEStructuralFeature(_name)->getEType();
        epkg = eclassifier->getEPackage();
    }

    assert(eclassifier);
    assert(epkg);
    eclass = as< EClass > (eclassifier);

    if (eclass)
    {
        efac = epkg->getEFactoryInstance();
        assert(efac);
        eobj = efac->create(eclass);
        assert(eobj);
				if (!xmi_id.empty())
						recordID(eobj, xmi_id);

        DEBUG_MSG(cout, "--- START: " << (m_level + 1));

        // Attributes
        for (size_t i = 0; i < length; i++)
        {
            try
            {
                ::ecorecpp::mapping::type_definitions::string_t const& _aname = attr_list[i].first;

                if (!isAtCurrentNamespace(_aname))
                    continue;

                ::ecorecpp::mapping::type_definitions::string_t const& _avalue = attr_list[i].second;

                DEBUG_MSG(cout, "    --- Attributes: (" << (i + 1) << "/"
                        << length << ") " << _aname << " " << _avalue);

                EStructuralFeature_ptr const esf =
                        eclass->getEStructuralFeature(_aname);
                assert(esf);

                EClassifier_ptr const aeclassifier = esf->getEType();
                assert(aeclassifier);

                EDataType_ptr const aedt = as< EDataType > (
                        aeclassifier);

                if (!aedt)
                {
                    unresolved_reference_t
                            _urref(_avalue, _aname, eobj, eclass);
                    m_unresolved_references.push_back(_urref);

                    DEBUG_MSG(cout, "    --- Unresolved reference: "
                            << _avalue);
                }
                else
                {
                    // Convert from string
                    EPackage_ptr const pkg_ = aedt->getEPackage();
                    EFactory_ptr const fac_ = pkg_->getEFactoryInstance();

                    any _any = fac_->createFromString(aedt, _avalue);
                    eobj->eSet(esf, _any);
                }
            } catch (const char* e)
            {
                ERROR_MSG("ERROR: " << e);
            } catch (const any::bad_any_cast& e)
            {
                ERROR_MSG("ERROR: " << e.what());
            }
        }

        if (m_level)
        {
            EObject_ptr const& peobj = m_objects.back();
            EClass_ptr const peclass = peobj->eClass();
            EStructuralFeature_ptr const esf = peclass->getEStructuralFeature(
                    _name);

            any _any;

            EReference_ptr const eref = as< EReference > (esf);

            if (eref && eref->getUpperBound() != 1)
            {
                // Gets the collection and adds the new element
                _any = peobj->eGet(esf);
                mapping::EList<::ecore::EObject_ptr>::ptr_type list = ecorecpp::mapping::any::any_cast<
                        mapping::EList<::ecore::EObject_ptr>::ptr_type >(_any);

                list->push_back(eobj);
            }
            else
            {
                _any = eobj;
                peobj->eSet(esf, _any);
            }

            // Is a reference and has opposite
            // TODO: remove when Notification implemented
            EReference_ptr eopref;
            if (eref && (eopref = eref->getEOpposite()))
            {
                if (eopref->getUpperBound() != 1)
                {
                    // Gets the collection and adds the new element
                    _any = eobj->eGet(eopref);
                    mapping::EList<::ecore::EObject_ptr>::ptr_type list = ecorecpp::mapping::any::any_cast<
                            mapping::EList<::ecore::EObject_ptr>::ptr_type >(_any);

                    list->push_back(peobj);
                }
                else
                {
                    _any = peobj;
                    eobj->eSet(eopref, _any);
                }
            }
        }

        m_objects.push_back(eobj);
    }
    else
    {
        m_expected_literal = true;
        m_expected_literal_name = _name;
    }

    ++m_level;
}

void handler::end_tag(xml_parser::match_pair const& name)
{
    DEBUG_MSG(cout, "--- END: " << m_level);

    if (--m_level && !m_expected_literal)
        m_objects.pop_back();

    m_expected_literal = false;
}

EObject_ptr handler::getRootElement()
{
    if (!m_objects.empty())
        return m_objects.front();
    return EObject_ptr(); // TODO: throw exception?
}

#include "reference_parser.hpp"

void handler::resolveReferences()
{
    DEBUG_MSG(cout, "--- Resolving references ");
    static MetaModelRepository_ptr _mmr = MetaModelRepository::_instance();

    while (!m_unresolved_references.empty())
    {
        unresolved_reference_t const& ref = m_unresolved_references.back();

        ::ecorecpp::mapping::type_definitions::string_t const& xpath = ref.xpath;
        ::ecorecpp::mapping::type_definitions::string_t const& name = ref.ref_name;
        EObject_ptr const& eobj = ref.eobject;
        EClass_ptr const& eclass = ref.eclass;

        try
        {
            DEBUG_MSG(cout, "--- Resolving reference " << xpath << " from "
                    << eclass->getName() << ":" << name);

            EStructuralFeature_ptr const esf = eclass->getEStructuralFeature(
                    name);

            DEBUG_MSG(cout, esf->getName() << " " << eclass->getName());

						std::string refTargetStr;
						std::stringstream ss(xpath);
						while (ss >> refTargetStr) {
								EObject_ptr refTarget = getEObjectForID(refTargetStr);
								if (refTarget) {
										EJavaObject targetObject = eobj->eGet(esf);
										if ( any::is_a<mapping::EList<::ecore::EObject_ptr>::ptr_type>(targetObject) ) {
												ecorecpp::mapping::any::any_cast<mapping::EList<::ecore::EObject_ptr>::ptr_type >(targetObject)->push_back(refTarget);
										} else {
												eobj->eSet(esf, refTarget);
										}
								} else {
										// Parse reference
										size_t size = refTargetStr.size();
										const ::ecorecpp::mapping::type_definitions::char_t * s = refTargetStr.c_str();

										ref_parser::SemanticState ss;
										State< ref_parser::SemanticState > st(ss, s, size);
										assert(ref_parser::grammar::references::match(st));

										ref_parser::references_t& _references = ss.get_references();

										for (size_t i = 0; i < _references.size(); i++)
										{
												any _any;
												EObject_ptr _current = m_objects.front();
												ref_parser::processed_reference_t & _ref = _references[i];

												EPackage_ptr pkg = as< EPackage > (_current);
												if (!_ref.get_uri().empty() && (!pkg || (pkg && _ref.get_uri()
																!= pkg->getNsURI())))
												{
														DEBUG_MSG(cout, _ref.get_uri());
														_current = _mmr->getByNSURI(_ref.get_uri());
												}

												ref_parser::path_t& _path = _ref.get_path();
												for (size_t j = 0; j < _path.size(); j++)
												{
														EClass_ptr cl = as< EClass > (_current);
														EPackage_ptr pkg = as< EPackage > (_current);

														::ecorecpp::mapping::type_definitions::string_t const& _current_id = _path[j].get_id();

														if (pkg) // package
														{
																// Is it a subpackage?
																bool is_subpackage = false;
																::ecorecpp::mapping::EList< EPackage_ptr > const& subpkgs =
																				pkg->getESubpackages();

																for (size_t k = 0; k < subpkgs.size() && !is_subpackage; ++k)
																		if (subpkgs[k]->getName() == _current_id)
																		{
																				_current = subpkgs[k];
																				is_subpackage = true;
																		}

																if (!is_subpackage)
																		_current = pkg->getEClassifier(_current_id);
														}
														else if (cl) // class
														{
																_current = cl->getEStructuralFeature(_current_id);
														}
														else
														{
																cl = _current->eClass();
																EStructuralFeature_ptr sesf =
																		cl->getEStructuralFeature(_current_id);

																_any = _current->eGet(sesf);

				#if 0
																DEBUG_MSG(cout, _current_id << " " << cl->getName()
																				<< " " << _path[j].get_index());
																DEBUG_MSG(cout, _any.type().name());
				#endif
																if (_path[j].is_collection())
																{
																		size_t _index = _path[j].get_index();

																		mapping::EList<::ecore::EObject_ptr>::ptr_type _collection = ecorecpp::mapping::any::any_cast<
																						mapping::EList<::ecore::EObject_ptr>::ptr_type >(_any);

																		assert(_collection->size() > _index);
																		DEBUG_MSG(cout, _collection->size());

																		_current = (*_collection)[_index];
																}
																else
																		_current = any::any_cast< EObject_ptr >(_any);
														}
												}

												// finally:
												_any = _current;

												EJavaObject targetObject = eobj->eGet(esf);
												if ( any::is_a<mapping::EList<::ecore::EObject_ptr>::ptr_type>(targetObject) ) {
														ecorecpp::mapping::any::any_cast<mapping::EList<::ecore::EObject_ptr>::ptr_type >(targetObject)->push_back(_current);
												} else {
														eobj->eSet(esf, _any);
												}
										}
								}
						}
        } catch (const char* e)
        {
            ERROR_MSG("ERROR: " << e);
        } catch (const any::bad_any_cast& e)
        {
            ERROR_MSG("ERROR: " << e.what());
        }

        m_unresolved_references.pop_back();
    }

}

void handler::recordID(::ecore::EObject_ptr eobj, const std::string& id) {
		_eObjectToIDMap[eobj.get()] = id;
		_idToEObjectMap[id] = eobj.get();
}

std::string handler::getIDForEObject(::ecore::EObject_ptr eobj) {
		auto it = _eObjectToIDMap.find(eobj.get());
		if (it != _eObjectToIDMap.end())
				return it->second;
		return "";
}

::ecore::EObject_ptr handler::getEObjectForID(const std::string& id) {
		auto it = _idToEObjectMap.find(id);
		if (it != _idToEObjectMap.end())
				return it->second;
		return 0;
}
