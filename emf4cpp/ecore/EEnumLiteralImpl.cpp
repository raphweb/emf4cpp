// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EEnumLiteralImpl.cpp
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

#include "EEnumLiteral.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EEnumLiteralImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EEnumLiteral::_initialize()
{
    // Supertypes
    ::ecore::ENamedElement::_initialize();

    // References

    /*PROTECTED REGION ID(EEnumLiteralImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EEnumLiteral::eGet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EENUMLITERAL__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_value);
        return _any;
    }
    case ::ecore::EcorePackage::EENUMLITERAL__INSTANCE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EEnumerator
                > ::toAny(_any, m_instance);
        return _any;
    }
    case ::ecore::EcorePackage::EENUMLITERAL__LITERAL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_literal);
        return _any;
    }
    case ::ecore::EcorePackage::EENUMLITERAL__EENUM:
    {
        if (m_eEnum)
            _any = ::ecore::as < ::ecore::EObject > (m_eEnum);
        return _any;
    }
    }
    throw std::runtime_error(
            "EEnumLiteral::eGet Error. FeatureID:" + _featureID);
}

void EEnumLiteral::eSet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EENUMLITERAL__VALUE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::ecore::EEnumLiteral::setValue(_t0);
        return;
    }
    case ::ecore::EcorePackage::EENUMLITERAL__INSTANCE:
    {
        ::ecore::EEnumerator _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EEnumerator
                > ::fromAny(_newValue, _t0);
        ::ecore::EEnumLiteral::setInstance(_t0);
        return;
    }
    case ::ecore::EcorePackage::EENUMLITERAL__LITERAL:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::ecore::EEnumLiteral::setLiteral(_t0);
        return;
    }
    case ::ecore::EcorePackage::EENUMLITERAL__EENUM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EEnum_ptr _t1 = dynamic_cast< ::ecore::EEnum* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EEnum >(_t0);*/
        ::ecore::EEnumLiteral::setEEnum(_t1);
        return;
    }
    }
    throw std::runtime_error(
            "EEnumLiteral::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EEnumLiteral::eIsSet(::ecore::EInt _featureID)
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
    case ::ecore::EcorePackage::EENUMLITERAL__VALUE:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_value);
    }
    case ::ecore::EcorePackage::EENUMLITERAL__INSTANCE:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EEnumerator
                > ::is_set(m_instance);
    }
    case ::ecore::EcorePackage::EENUMLITERAL__LITERAL:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_literal);
    }
    case ::ecore::EcorePackage::EENUMLITERAL__EENUM:
    {
        return (bool) m_eEnum;
    }
    }
    throw std::runtime_error(
            "EEnumLiteral::eIsSet Error. FeatureID:" + _featureID);
}

void EEnumLiteral::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EEnumLiteral::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EEnumLiteral::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEEnumLiteral();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EEnumLiteral::_inverseAdd(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EENUMLITERAL__EENUM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EEnum_ptr _t1 = dynamic_cast< ::ecore::EEnum* >(_t0.get());

        // set reference
        basicsetEEnum(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EEnumLiteral::_inverseRemove(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EENUMLITERAL__EENUM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EEnum_ptr _t1 = dynamic_cast< ::ecore::EEnum* >(_t0.get());

        // set reference
        if (basicgetEEnum() == _t1)
            basicsetEEnum(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

