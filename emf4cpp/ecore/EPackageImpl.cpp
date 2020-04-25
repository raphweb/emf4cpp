// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EPackageImpl.cpp
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

#include "EPackage.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/ENamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EFactory.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EPackageImpl.cpp) ENABLED START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
using namespace ::ecore;
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EcoreFactory.hpp>
// FIXME Args to be replaced with EEunumerator once support is there.
EEnumLiteral_ptr EPackage::addEEnumLiteral(EEnum_ptr owner, EString name,
        EInt value, EString literal)
{
    EcoreFactory_ptr ecoreFactory = EcoreFactory::_instance();
    EEnumLiteral_ptr el = ecoreFactory->createEEnumLiteral();
    el->setName(name);
    el->setValue(value);
    el->setLiteral(literal);
    el->setEEnum(owner);
    owner->getELiterals().push_back(el);
    return el;
}
EOperation_ptr EPackage::addEOperation(EClass_ptr owner, EClassifier_ptr type,
        EString name, EInt lowerBound, EInt upperBound, EBoolean isUnique,
        EBoolean isOrdered)
{
    EcoreFactory_ptr ecoreFactory = EcoreFactory::_instance();
    EOperation_ptr eOperation = ecoreFactory->createEOperation();
    initEOperation(eOperation, type, name, lowerBound, upperBound, isUnique,
            isOrdered);
    owner->getEOperations().push_back(eOperation);
    return eOperation;
}
void EPackage::initEOperation(EOperation_ptr eOperation, EClassifier_ptr type,
        EString name, EInt lowerBound, EInt upperBound, EBoolean isUnique,
        EBoolean isOrdered)
{
    eOperation->setEType(type);
    eOperation->setName(name);
    eOperation->setLowerBound(lowerBound);
    eOperation->setUpperBound(upperBound);
    eOperation->setUnique(isUnique);
    eOperation->setOrdered(isOrdered);
}
EParameter_ptr EPackage::addEParameter(EOperation_ptr owner, EString name,
        EInt lowerBound, EInt upperBound, EBoolean isUnique, EBoolean isOrdered)
{
    EcoreFactory_ptr ecoreFactory = EcoreFactory::_instance();
    EParameter_ptr p = ecoreFactory->createEParameter();
    iniEParameterAttributes(p, name, lowerBound, upperBound, isUnique,
            isOrdered);
    owner->getEParameters().push_back(p);
    return p;
}
EParameter_ptr EPackage::addEParameter(EOperation_ptr owner,
        EClassifier_ptr type, EString name, EInt lowerBound, EInt upperBound,
        EBoolean isUnique, EBoolean isOrdered)
{
    EParameter_ptr p = addEParameter(owner, name, lowerBound, upperBound,
            isUnique, isOrdered);
    p->setEType(type);
    return p;
}
EParameter_ptr EPackage::addEParameter(EOperation_ptr owner,
        EGenericType_ptr genericType, EString name, EInt lowerBound,
        EInt upperBound, EBoolean isUnique, EBoolean isOrdered)
{
    EParameter_ptr p = addEParameter(owner, name, lowerBound, upperBound,
            isUnique, isOrdered);
    p->setEGenericType(genericType);
    return p;
}
void EPackage::iniEParameterAttributes(EParameter_ptr p, EString name,
        EInt lowerBound, EInt upperBound, EBoolean isUnique, EBoolean isOrdered)
{
    p->setName(name);
    p->setLowerBound(lowerBound);
    p->setUpperBound(upperBound);
    p->setUnique(isUnique);
    p->setOrdered(isOrdered);
}

void EPackage::initEStructuralFeature(EStructuralFeature_ptr s, EString name, // 3
        EBoolean isChangeable, // 1
        EBoolean isVolatile, // 1
        EBoolean isTransient, // 1
//        EJavaObject & defaultValue, // 1
        EString defaultValueLiteral, // 1
        EBoolean isUnsettable, // 1
        EBoolean isDerived, // 1
        EBoolean isOrdered, // 2
        EBoolean isUnique, // 2
        EInt lowerBound, // 2
        EInt upperBound, // 2
        EBoolean isMany, // 2
        EBoolean isRequired // 2
        )
{
    s->setName(name);

    s->setChangeable(isChangeable);
    s->setVolatile(isVolatile);
    s->setTransient(isTransient);
    //       s->setDefaultValue(defaultValue);
    s->setDefaultValueLiteral(defaultValueLiteral);
    s->setUnsettable(isUnsettable);
    s->setDerived(isDerived);

    s->setOrdered(isOrdered);
    s->setUnique(isUnique);
    s->setLowerBound(lowerBound);
    s->setUpperBound(upperBound);
    s->setMany(isMany);
//        s->setRequired(isRequired);
    // s->setEGenericType(type);
    //FIXME: Container Class;
}
/*PROTECTED REGION END*/

using namespace ::ecore;

void EPackage::_initialize()
{
    // Supertypes
    ::ecore::ENamedElement::_initialize();

    // References
    for (size_t i = 0; i < m_eClassifiers->size(); i++)
    {
        (*m_eClassifiers)[i]->_initialize();
    }
    for (size_t i = 0; i < m_eSubpackages->size(); i++)
    {
        (*m_eSubpackages)[i]->_initialize();
    }

    /*PROTECTED REGION ID(EPackageImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EClassifier_ptr EPackage::getEClassifier(::ecore::EString const &_name)
{
    /*PROTECTED REGION ID(EPackageImpl_getEClassifier) ENABLED START*/
    if (m_eClassifiersMap.size() == 0)
    {
        // Fill eClassifiers map
        for (size_t i = 0; i < m_eClassifiers->size(); i++)
        {
            ::ecore::EClassifier_ptr c = (*m_eClassifiers)[i];
            m_eClassifiersMap[c->getName()] = c;
        }
    }

    EClassifierMapType::const_iterator it;
    if ((it = m_eClassifiersMap.find(_name)) != m_eClassifiersMap.end())
        return it->second;

    throw std::logic_error(
            std::string("EPackage: EClassifier not found: ") + _name);
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EPackage::eGet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EPACKAGE__NSURI:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_nsURI);
        return _any;
    }
    case ::ecore::EcorePackage::EPACKAGE__NSPREFIX:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_nsPrefix);
        return _any;
    }
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
    {
        if (m_eFactoryInstance)
            _any = ::ecore::as < ::ecore::EObject > (m_eFactoryInstance);
        return _any;
    }
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
    {
        _any = m_eClassifiers->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
    {
        _any = m_eSubpackages->asEListOf< ::ecore::EObject_ptr >();
        return _any;
    }
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
    {
        if (m_eSuperPackage)
            _any = ::ecore::as < ::ecore::EObject > (m_eSuperPackage);
        return _any;
    }
    }
    throw std::runtime_error("EPackage::eGet Error. FeatureID:" + _featureID);
}

void EPackage::eSet(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EPACKAGE__NSURI:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::ecore::EPackage::setNsURI(_t0);
        return;
    }
    case ::ecore::EcorePackage::EPACKAGE__NSPREFIX:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::ecore::EPackage::setNsPrefix(_t0);
        return;
    }
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EFactory_ptr _t1 =
                dynamic_cast< ::ecore::EFactory* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EFactory >(_t0);*/
        ::ecore::EPackage::setEFactoryInstance(_t1);
        return;
    }
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EPackage::getEClassifiers().clear();
        ::ecore::EPackage::getEClassifiers().insert_all(*_t0);
        return;
    }
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::ecore::EPackage::getESubpackages().clear();
        ::ecore::EPackage::getESubpackages().insert_all(*_t0);
        return;
    }
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EPackage_ptr _t1 =
                dynamic_cast< ::ecore::EPackage* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::ecore::EPackage >(_t0);*/
        ::ecore::EPackage::setESuperPackage(_t1);
        return;
    }
    }
    throw std::runtime_error("EPackage::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EPackage::eIsSet(::ecore::EInt _featureID)
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
    case ::ecore::EcorePackage::EPACKAGE__NSURI:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_nsURI);
    }
    case ::ecore::EcorePackage::EPACKAGE__NSPREFIX:
    {
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_nsPrefix);
    }
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
    {
        return (bool) m_eFactoryInstance;
    }
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
    {
        return m_eClassifiers && m_eClassifiers->size();
    }
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
    {
        return m_eSubpackages && m_eSubpackages->size();
    }
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
    {
        return (bool) m_eSuperPackage;
    }
    }
    throw std::runtime_error("EPackage::eIsSet Error. FeatureID:" + _featureID);
}

void EPackage::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("EPackage::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EPackage::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEPackage();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EPackage::_inverseAdd(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EFactory_ptr _t1 =
                dynamic_cast< ::ecore::EFactory* >(_t0.get());

        // set reference
        basicsetEFactoryInstance(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EClassifier_ptr _t1 =
                dynamic_cast< ::ecore::EClassifier* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EClassifier_ptr, -1, true, true >&) ::ecore::EPackage::getEClassifiers();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EPackage_ptr _t1 =
                dynamic_cast< ::ecore::EPackage* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EPackage_ptr,
                        -1, true, true >&) ::ecore::EPackage::getESubpackages();
        container.basicAdd(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::ecore::EPackage_ptr _t1 =
                dynamic_cast< ::ecore::EPackage* >(_t0.get());

        // set reference
        basicsetESuperPackage(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EPackage::_inverseRemove(::ecore::EInt _featureID,
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
    case ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EFactory_ptr _t1 =
                dynamic_cast< ::ecore::EFactory* >(_t0.get());

        // set reference
        if (basicgetEFactoryInstance() == _t1)
            basicsetEFactoryInstance(nullptr);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EClassifier_ptr _t1 =
                dynamic_cast< ::ecore::EClassifier* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::ecore::EClassifier_ptr, -1, true, true >&) ::ecore::EPackage::getEClassifiers();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EPackage_ptr _t1 =
                dynamic_cast< ::ecore::EPackage* >(_t0.get());

        // add to a list
        auto &container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::ecore::EPackage_ptr,
                        -1, true, true >&) ::ecore::EPackage::getESubpackages();
        container.basicRemove(_t1);
    }
        return;
    case ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::ecore::EPackage_ptr _t1 =
                dynamic_cast< ::ecore::EPackage* >(_t0.get());

        // set reference
        if (basicgetESuperPackage() == _t1)
            basicsetESuperPackage(nullptr);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

