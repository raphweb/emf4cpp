// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/ColumnSetImpl.cpp
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

#include "ColumnSet.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/DataContainer.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/data/DataResource.hpp>
#include <kdm/code/ItemUnit.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ColumnSetImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::data;

void ColumnSet::_initialize()
{
    // Supertypes
    ::kdm::data::DataContainer::_initialize();

    // References
    for (size_t i = 0; i < m_itemUnit->size(); i++)
    {
        (*m_itemUnit)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ColumnSetImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ColumnSet::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        _any = m_annotation->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        _any = m_stereotype->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        _any = m_taggedValue->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__SOURCE:
    {
        _any = m_source->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__DATARELATION:
    {
        _any = m_dataRelation->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__ABSTRACTION:
    {
        _any = m_abstraction->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::DATACONTAINER__DATAELEMENT:
    {
        _any = m_dataElement->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::data::DataPackage::COLUMNSET__ITEMUNIT:
    {
        _any = m_itemUnit->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void ColumnSet::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::core::Element::getAttribute().clear();
        ::kdm::core::Element::getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::core::Element::getAnnotation().clear();
        ::kdm::core::Element::getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::core::ModelElement::getStereotype().clear();
        ::kdm::core::ModelElement::getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::core::ModelElement::getTaggedValue().clear();
        ::kdm::core::ModelElement::getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        ::kdm::core::KDMEntity::setName(_t0);
    }
        return;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__SOURCE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::data::AbstractDataElement::getSource().clear();
        ::kdm::data::AbstractDataElement::getSource().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__DATARELATION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::data::AbstractDataElement::getDataRelation().clear();
        ::kdm::data::AbstractDataElement::getDataRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__ABSTRACTION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::data::AbstractDataElement::getAbstraction().clear();
        ::kdm::data::AbstractDataElement::getAbstraction().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::DATACONTAINER__DATAELEMENT:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::data::DataContainer::getDataElement().clear();
        ::kdm::data::DataContainer::getDataElement().insert_all(*_t0);
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ITEMUNIT:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::kdm::data::ColumnSet::getItemUnit().clear();
        ::kdm::data::ColumnSet::getItemUnit().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ColumnSet::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
        return m_annotation && m_annotation->size();
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
        return m_stereotype && m_stereotype->size();
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
        return m_taggedValue && m_taggedValue->size();
    case ::kdm::core::CorePackage::KDMENTITY__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(m_name);
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__SOURCE:
        return m_source && m_source->size();
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__DATARELATION:
        return m_dataRelation && m_dataRelation->size();
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__ABSTRACTION:
        return m_abstraction && m_abstraction->size();
    case ::kdm::data::DataPackage::DATACONTAINER__DATAELEMENT:
        return m_dataElement && m_dataElement->size();
    case ::kdm::data::DataPackage::COLUMNSET__ITEMUNIT:
        return m_itemUnit && m_itemUnit->size();

    }
    throw "Error";
}

void ColumnSet::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ColumnSet::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::kdm::data::DataPackage* >(::kdm::data::DataPackage::_instance().get())->getColumnSet();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ColumnSet::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__SOURCE:
    {
    }
        return;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__DATARELATION:
    {
    }
        return;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__ABSTRACTION:
    {
    }
        return;
    case ::kdm::data::DataPackage::DATACONTAINER__DATAELEMENT:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ITEMUNIT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ColumnSet::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::kdm::core::CorePackage::ELEMENT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::core::CorePackage::ELEMENT__ANNOTATION:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::core::CorePackage::MODELELEMENT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__SOURCE:
    {
    }
        return;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__DATARELATION:
    {
    }
        return;
    case ::kdm::data::DataPackage::ABSTRACTDATAELEMENT__ABSTRACTION:
    {
    }
        return;
    case ::kdm::data::DataPackage::DATACONTAINER__DATAELEMENT:
    {
    }
        return;
    case ::kdm::data::DataPackage::COLUMNSET__ITEMUNIT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

