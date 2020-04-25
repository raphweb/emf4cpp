// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EDataTypeImpl.cpp
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

#include "EDataType.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EDataTypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EDataType::_initialize()
{
    // Supertypes
    ::ecore::EClassifier::_initialize();

    // References

    /*PROTECTED REGION ID(EDataTypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EDataType::eGet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
        return ecore::EClassifier::eGet(_featureID, _resolve);
    }
    case ::ecore::EcorePackage::EDATATYPE__SERIALIZABLE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_serializable);
        return _any;
    }
    }
    throw std::runtime_error("EDataType::eGet Error. FeatureID:" + _featureID);
}

void EDataType::eSet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
        ecore::EClassifier::eSet(_featureID, _newValue);
        return;
    }
    case ::ecore::EcorePackage::EDATATYPE__SERIALIZABLE:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::ecore::EDataType::setSerializable(_t0);
        return;
    }
    }
    throw std::runtime_error("EDataType::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EDataType::eIsSet(::ecore::EInt _featureID)
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
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME:
    case ::ecore::EcorePackage::ECLASSIFIER__DEFAULTVALUE:
    case ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME:
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
        return ecore::EClassifier::eIsSet(_featureID);
    }
    case ::ecore::EcorePackage::EDATATYPE__SERIALIZABLE:
    {
        return m_serializable != true;
    }
    }
    throw std::runtime_error(
            "EDataType::eIsSet Error. FeatureID:" + _featureID);
}

void EDataType::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EDataType::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EDataType::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDataType();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EDataType::_inverseAdd(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EPackage_ptr _t1 =
                dynamic_cast< ::ecore::EPackage* >(_t0.get());

        // set reference
        basicsetEPackage(_t1);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EDataType::_inverseRemove(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EPackage_ptr _t1 =
                dynamic_cast< ::ecore::EPackage* >(_t0.get());

        // set reference
        if (basicgetEPackage() == _t1)
            basicsetEPackage(nullptr);
    }
        return;
    case ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

