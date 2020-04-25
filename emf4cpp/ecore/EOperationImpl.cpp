// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EOperationImpl.cpp
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

#include "EOperation.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ETypedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/EClass.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EOperationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

void EOperation::_initialize()
{
    // Supertypes
    ::ecore::ETypedElement::_initialize();

    // References
    for (size_t i = 0; i < m_eTypeParameters->size(); i++)
    {
        (*m_eTypeParameters)[i]->_initialize();
    }
    for (size_t i = 0; i < m_eParameters->size(); i++)
    {
        (*m_eParameters)[i]->_initialize();
    }
    for (size_t i = 0; i < m_eGenericExceptions->size(); i++)
    {
        (*m_eGenericExceptions)[i]->_initialize();
    }

    /*PROTECTED REGION ID(EOperationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EInt EOperation::getOperationID()
{
    /*PROTECTED REGION ID(EOperationImpl_getOperationID) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EOperation::getOperationID";
    /*PROTECTED REGION END*/
}

::ecore::EBoolean EOperation::isOverrideOf(
        ::ecore::EOperation_ptr _someOperation)
{
    /*PROTECTED REGION ID(EOperationImpl_isOverrideOf) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EOperation::isOverrideOf";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EOperation::eGet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
    {
        if (m_eContainingClass)
            _any = ::ecore::as < ::ecore::EObject > (m_eContainingClass);
        return _any;
    }
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
        _any = m_eTypeParameters->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        _any = m_eParameters->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
        _any = m_eExceptions->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
        _any = m_eGenericExceptions->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    }
    throw std::runtime_error("EOperation::eGet Error. FeatureID:" + _featureID);
}

void EOperation::eSet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClass_ptr _t1 = dynamic_cast< ::ecore::EClass* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EClass >(_t0);*/
        ::ecore::EOperation::setEContainingClass(_t1);
        return;
    }
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EOperation::getETypeParameters().clear();
        ::ecore::EOperation::getETypeParameters().insert_all(*_t0);
        return;
    }
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EOperation::getEParameters().clear();
        ::ecore::EOperation::getEParameters().insert_all(*_t0);
        return;
    }
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EOperation::getEExceptions().clear();
        ::ecore::EOperation::getEExceptions().insert_all(*_t0);
        return;
    }
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EOperation::getEGenericExceptions().clear();
        ::ecore::EOperation::getEGenericExceptions().insert_all(*_t0);
        return;
    }
    }
    throw std::runtime_error("EOperation::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EOperation::eIsSet(::ecore::EInt _featureID)
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
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
    {
        return (bool) m_eContainingClass;
    }
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
        return m_eTypeParameters && m_eTypeParameters->size();
    }
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        return m_eParameters && m_eParameters->size();
    }
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
        return m_eExceptions && m_eExceptions->size();
    }
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
        return m_eGenericExceptions && m_eGenericExceptions->size();
    }
    }
    throw std::runtime_error(
            "EOperation::eIsSet Error. FeatureID:" + _featureID);
}

void EOperation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error(
            "EOperation::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EOperation::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEOperation();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EOperation::_inverseAdd(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClass_ptr _t1 = dynamic_cast< ::ecore::EClass* >(_t0.get());

        // set reference
        basicsetEContainingClass(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EParameter_ptr _t1 =
                dynamic_cast< ::ecore::EParameter* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EParameter_ptr, -1, true, true >&) ::ecore::EOperation::getEParameters();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EOperation::_inverseRemove(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EClass_ptr _t1 = dynamic_cast< ::ecore::EClass* >(_t0.get());

        // set reference
        if (basicgetEContainingClass() == _t1)
            basicsetEContainingClass(nullptr);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EPARAMETERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EParameter_ptr _t1 =
                dynamic_cast< ::ecore::EParameter* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EParameter_ptr, -1, true, true >&) ::ecore::EOperation::getEParameters();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS:
    {
    }
        return;
    case ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

