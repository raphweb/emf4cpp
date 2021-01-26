// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/ETypedElementImpl.cpp
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

#include "ETypedElement.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ETypedElementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void ETypedElement::_initialize()
{
    // Supertypes
    ::ecore::ENamedElement::_initialize();

    // References
    if (m_eGenericType)
    {
        m_eGenericType->_initialize();
    }

    /*PROTECTED REGION ID(ETypedElementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ETypedElement::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        return ecore::EModelElement::eGet(_featureID, _resolve);
    }
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
    {
        return ecore::ENamedElement::eGet(_featureID, _resolve);
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__ORDERED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_ordered);
        return _any;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_unique);
        return _any;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_lowerBound);
        return _any;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_upperBound);
        return _any;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    {
        if (m_eType)
            _any = ::ecore::as < ::ecore::EObject > (m_eType);
        return _any;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
        if (m_eGenericType)
            _any = ::ecore::as < ::ecore::EObject > (m_eGenericType);
        return _any;
    }
    }
    throw std::runtime_error(
            "ETypedElement::eGet Error. FeatureID:" + _featureID);
}

void ETypedElement::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ecore::EModelElement::eSet(_featureID, _newValue);
        return;
    }
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
    {
        ecore::ENamedElement::eSet(_featureID, _newValue);
        return;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__ORDERED:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::ETypedElement::setOrdered(_t0);
        return;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::ETypedElement::setUnique(_t0);
        return;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::ecore::ETypedElement::setLowerBound(_t0);
        return;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::ecore::ETypedElement::setUpperBound(_t0);
        return;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClassifier_ptr _t1 =
                dynamic_cast< ::ecore::EClassifier* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EClassifier >(_t0);*/
        ::ecore::ETypedElement::setEType(_t1);
        return;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EGenericType_ptr _t1 =
                dynamic_cast< ::ecore::EGenericType* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EGenericType >(_t0);*/
        ::ecore::ETypedElement::setEGenericType(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "ETypedElement::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean ETypedElement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        return ecore::EModelElement::eIsSet(_featureID);
    }
    case ::ecore::EcorePackage::ENAMEDELEMENT__NAME:
    {
        return ecore::ENamedElement::eIsSet(_featureID);
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__ORDERED:
    {
        return m_ordered != true;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
    {
        return m_unique != true;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_lowerBound);
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
    {
        return m_upperBound != 1;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__MANY:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_many);
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__REQUIRED:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_required);
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    {
        return (bool) m_eType;
    }
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
        return (bool) m_eGenericType;
    }
    }
    throw std::runtime_error(
            "ETypedElement::eIsSet Error. FeatureID:" + _featureID);
}

void ETypedElement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "ETypedElement::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr ETypedElement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getETypedElement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ETypedElement::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EAnnotation_ptr _t1 =
                dynamic_cast< ::ecore::EAnnotation* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EAnnotation_ptr, -1, true, true >&) ::ecore::EModelElement::getEAnnotations();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ETypedElement::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EAnnotation_ptr _t1 =
                dynamic_cast< ::ecore::EAnnotation* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EAnnotation_ptr, -1, true, true >&) ::ecore::EModelElement::getEAnnotations();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    {
    }
        return;
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

