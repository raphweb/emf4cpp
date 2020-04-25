// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EStructuralFeatureImpl.cpp
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

#include "EStructuralFeature.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ETypedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EStructuralFeatureImpl.cpp) ENABLED START*/

using namespace ::ecore;

void EStructuralFeature::setFeatureID(::ecore::EInt _id)
{
    m_id = _id;
}
/*PROTECTED REGION END*/

using namespace ::ecore;

void EStructuralFeature::_initialize()
{
    // Supertypes
    ::ecore::ETypedElement::_initialize();

    // References

    /*PROTECTED REGION ID(EStructuralFeatureImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EInt EStructuralFeature::getFeatureID()
{
    /*PROTECTED REGION ID(EStructuralFeatureImpl_getFeatureID) ENABLED START*/
    return m_id;
    /*PROTECTED REGION END*/
}

int EStructuralFeature::getContainerClass()
{
    /*PROTECTED REGION ID(EStructuralFeatureImpl_getContainerClass) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EStructuralFeature::getContainerClass";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EStructuralFeature::eGet(::ecore::EInt _featureID,
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
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_changeable);
        return _any;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_volatile);
        return _any;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_transient);
        return _any;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_defaultValueLiteral);
        return _any;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_unsettable);
        return _any;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_derived);
        return _any;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS:
    {
        if (m_eContainingClass)
            _any = ::ecore::as < ::ecore::EObject > (m_eContainingClass);
        return _any;
    }
    }
    throw std::runtime_error(
            "EStructuralFeature::eGet Error. FeatureID:" + _featureID);
}

void EStructuralFeature::eSet(::ecore::EInt _featureID,
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
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::EStructuralFeature::setChangeable(_t0);
        return;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::EStructuralFeature::setVolatile(_t0);
        return;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::EStructuralFeature::setTransient(_t0);
        return;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::ecore::EStructuralFeature::setDefaultValueLiteral(_t0);
        return;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::EStructuralFeature::setUnsettable(_t0);
        return;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::EStructuralFeature::setDerived(_t0);
        return;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClass_ptr _t1 = dynamic_cast< ::ecore::EClass* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EClass >(_t0);*/
        ::ecore::EStructuralFeature::setEContainingClass(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "EStructuralFeature::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EStructuralFeature::eIsSet(::ecore::EInt _featureID)
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
    {
        return m_changeable != true;
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_volatile);
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_transient);
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_defaultValueLiteral);
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUE:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EJavaObject
                > ::is_set(m_defaultValue);
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_unsettable);
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_derived);
    }
    case ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS:
    {
        return (bool) m_eContainingClass;
    }
    }
    throw std::runtime_error(
            "EStructuralFeature::eIsSet Error. FeatureID:" + _featureID);
}

void EStructuralFeature::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EStructuralFeature::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EStructuralFeature::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEStructuralFeature();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EStructuralFeature::_inverseAdd(::ecore::EInt _featureID,
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
void EStructuralFeature::_inverseRemove(::ecore::EInt _featureID,
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

