// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EParameterImpl.cpp
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

#include "EParameter.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ETypedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EParameterImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EParameter::_initialize()
{
    // Supertypes
    ::ecore::ETypedElement::_initialize();

    // References

    /*PROTECTED REGION ID(EParameterImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EParameter::eGet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EPARAMETER__EOPERATION:
    {
        if (m_eOperation)
            _any = ::ecore::as < ::ecore::EObject > (m_eOperation);
        return _any;
    }
    }
    throw std::runtime_error("EParameter::eGet Error. FeatureID:" + _featureID);
}

void EParameter::eSet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EPARAMETER__EOPERATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EOperation_ptr _t1 =
                dynamic_cast< ::ecore::EOperation* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EOperation >(_t0);*/
        ::ecore::EParameter::setEOperation(_t1);
        return;
    }
    }
    throw std::runtime_error("EParameter::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EParameter::eIsSet(::ecore::EInt _featureID)
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
    case ::ecore::EcorePackage::EPARAMETER__EOPERATION:
    {
        return (bool) m_eOperation;
    }
    }
    throw std::runtime_error(
            "EParameter::eIsSet Error. FeatureID:" + _featureID);
}

void EParameter::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EParameter::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EParameter::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEParameter();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EParameter::_inverseAdd(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EPARAMETER__EOPERATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EOperation_ptr _t1 =
                dynamic_cast< ::ecore::EOperation* >(_t0.get());

        // set reference
        basicsetEOperation(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EParameter::_inverseRemove(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EPARAMETER__EOPERATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EOperation_ptr _t1 =
                dynamic_cast< ::ecore::EOperation* >(_t0.get());

        // set reference
        if (basicgetEOperation() == _t1)
            basicsetEOperation(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

