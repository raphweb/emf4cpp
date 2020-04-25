// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EAttributeImpl.cpp
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

#include "EAttribute.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EAttributeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EAttribute::_initialize()
{
    // Supertypes
    ::ecore::EStructuralFeature::_initialize();

    // References

    /*PROTECTED REGION ID(EAttributeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EAttribute::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
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
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
        return ecore::ETypedElement::eGet(_featureID, _resolve);
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__CHANGEABLE:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS:
    {
        return ecore::EStructuralFeature::eGet(_featureID, _resolve);
    }
    case ::ecore::EcorePackage::EATTRIBUTE__ID:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_iD);
        return _any;
    }
    }
    throw std::runtime_error("EAttribute::eGet Error. FeatureID:" + _featureID);
}

void EAttribute::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
        ecore::ETypedElement::eSet(_featureID, _newValue);
        return;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__CHANGEABLE:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS:
    {
        ecore::EStructuralFeature::eSet(_featureID, _newValue);
        return;
    }
    case ::ecore::EcorePackage::EATTRIBUTE__ID:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::EAttribute::setID(_t0);
        return;
    }
    }
    throw std::runtime_error("EAttribute::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EAttribute::eIsSet(::ecore::EInt _featureID)
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
    case ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE:
    case ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND:
    case ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND:
    case ::ecore::EcorePackage::ETYPEDELEMENT__MANY:
    case ::ecore::EcorePackage::ETYPEDELEMENT__REQUIRED:
    case ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE:
    case ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE:
    {
        return ecore::ETypedElement::eIsSet(_featureID);
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__CHANGEABLE:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUE:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED:
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS:
    {
        return ecore::EStructuralFeature::eIsSet(_featureID);
    }
    case ::ecore::EcorePackage::EATTRIBUTE__ID:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_iD);
    }
    case ::ecore::EcorePackage::EATTRIBUTE__EATTRIBUTETYPE:
    {
        return (bool) m_eAttributeType;
    }
    }
    throw std::runtime_error(
            "EAttribute::eIsSet Error. FeatureID:" + _featureID);
}

void EAttribute::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EAttribute::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EAttribute::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEAttribute();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EAttribute::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
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
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClass_ptr _t1 = dynamic_cast< ::ecore::EClass* >(_t0.get());

        // set reference
        basicsetEContainingClass(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EAttribute::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
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
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EClass_ptr _t1 = dynamic_cast< ::ecore::EClass* >(_t0.get());

        // set reference
        if (basicgetEContainingClass() == _t1)
            basicsetEContainingClass(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

