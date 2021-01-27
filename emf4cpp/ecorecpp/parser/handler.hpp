// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parser/handler.hpp
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

#ifndef _ECORECPPPARSERHANDLER_HPP
#define    _ECORECPPPARSERHANDLER_HPP

#include "unresolved_reference.hpp"
#include "simple_xml_parser.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <list>
#include <string>
#include <unordered_map>

#include "../dllEcorecpp.hpp"

namespace ecorecpp
{
namespace parser
{

class EXPORT_ECORECPP_DLL handler
{
public:

    handler();

    ~handler();

    void processing_tag (xml_parser::match_pair const& tag,
                         xml_parser::attr_list_t const& attr_list);

    void start_tag (xml_parser::match_pair const& tag,
                    xml_parser::attr_list_t const& attr_list);

    void end_tag (xml_parser::match_pair const& tag);

    void characters (xml_parser::match_pair const& chars);

    ::ecore::EObject_ptr getRootElement();

    void resolveReferences();

    void recordID(::ecore::EObject_ptr, const std::string&);
    std::string getIDForEObject(::ecore::EObject_ptr);
    ::ecore::EObject_ptr getEObjectForID(const std::string&);

protected:

    std::list< ::ecore::EObject_ptr > m_objects;
    std::list< ::ecorecpp::mapping::type_definitions::string_t > m_stack;

    std::list< unresolved_reference_t > m_unresolved_references;

    int m_level;

    bool m_expected_literal;
    ::ecorecpp::mapping::type_definitions::string_t m_expected_literal_name;

private:

    inline bool isAtCurrentNamespace(const ::ecorecpp::mapping::type_definitions::string_t& _name) const
    {
        return _name.find(':') == ::ecorecpp::mapping::type_definitions::string_t::npos;
    }

    std::unordered_map<::ecore::EObject*, std::string> _eObjectToIDMap;
    std::unordered_map<std::string, ::ecore::EObject*> _idToEObjectMap;
};

} // parser
} // ecorecpp

#endif    /* _ECORECPPPARSERHANDLER_HPP */
