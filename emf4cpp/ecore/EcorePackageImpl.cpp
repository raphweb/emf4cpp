// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EcorePackageImpl.cpp
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

#include <ecore/EcorePackage.hpp>
#include <ecore/EcoreFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EcorePackage.hpp>

using namespace ::ecore;

EcorePackage::EcorePackage()
{

    // Feature definitions of EAttribute
    m_EAttribute__iD = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EAttribute__eAttributeType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EAnnotation
    m_EAnnotation__source = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EAnnotation__details = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EAnnotation__eModelElement = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EAnnotation__contents = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EAnnotation__references = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EClass
    m_EClass__abstract = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EClass__interface = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EClass__eSuperTypes = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eOperations = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eAllAttributes = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eAllReferences = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eReferences = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eAttributes = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eAllContainments = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eAllOperations = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eAllStructuralFeatures = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eAllSuperTypes = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eIDAttribute = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eStructuralFeatures = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eGenericSuperTypes = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClass__eAllGenericSuperTypes = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EClassifier
    m_EClassifier__instanceClassName = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EClassifier__instanceClass = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EClassifier__defaultValue = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EClassifier__instanceTypeName = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EClassifier__ePackage = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EClassifier__eTypeParameters = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EDataType
    m_EDataType__serializable = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of EEnum
    m_EEnum__eLiterals = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EEnumLiteral
    m_EEnumLiteral__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EEnumLiteral__instance = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EEnumLiteral__literal = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EEnumLiteral__eEnum = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EFactory
    m_EFactory__ePackage = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EModelElement
    m_EModelElement__eAnnotations = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ENamedElement
    m_ENamedElement__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of EObject

    // Feature definitions of EOperation
    m_EOperation__eContainingClass = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EOperation__eTypeParameters = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EOperation__eParameters = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EOperation__eExceptions = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EOperation__eGenericExceptions = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EPackage
    m_EPackage__nsURI = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EPackage__nsPrefix = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EPackage__eFactoryInstance = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EPackage__eClassifiers = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EPackage__eSubpackages = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EPackage__eSuperPackage = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EParameter
    m_EParameter__eOperation = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EReference
    m_EReference__containment = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EReference__container = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EReference__resolveProxies = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EReference__eOpposite = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EReference__eReferenceType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EReference__eKeys = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EStructuralFeature
    m_EStructuralFeature__changeable = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EStructuralFeature__volatile = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EStructuralFeature__transient = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EStructuralFeature__defaultValueLiteral = ::ecore::Ptr
            < ::ecore::EAttribute > (new ::ecore::EAttribute);
    m_EStructuralFeature__defaultValue = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EStructuralFeature__unsettable = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EStructuralFeature__derived = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EStructuralFeature__eContainingClass = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ETypedElement
    m_ETypedElement__ordered = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypedElement__unique = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypedElement__lowerBound = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypedElement__upperBound = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypedElement__many = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypedElement__required = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ETypedElement__eType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ETypedElement__eGenericType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EStringToStringMapEntry
    m_EStringToStringMapEntry__key = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EStringToStringMapEntry__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of EGenericType
    m_EGenericType__eUpperBound = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EGenericType__eTypeArguments = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EGenericType__eRawType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EGenericType__eLowerBound = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EGenericType__eTypeParameter = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EGenericType__eClassifier = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ETypeParameter
    m_ETypeParameter__eBounds = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void EcorePackage::_initPackage()
{
    // Factory
    {
        ::ecore::EFactory_ptr _fa = EcoreFactory::_instance();
        setEFactoryInstance(_fa);
        _fa->setEPackage(_this());
    }

    // Create classes and their features

    // EAttribute
    {
        m_EAttributeEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EAttributeEClass->setClassifierID(EATTRIBUTE);
        m_EAttributeEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EAttributeEClass);
    }
    // m_EAttribute__iD has already been allocated above
    m_EAttribute__iD->setFeatureID(::ecore::EcorePackage::EATTRIBUTE__ID);
    m_EAttributeEClass->getEStructuralFeatures().push_back(m_EAttribute__iD);
    // m_EAttribute__eAttributeType has already been allocated above
    m_EAttribute__eAttributeType->setFeatureID(
            ::ecore::EcorePackage::EATTRIBUTE__EATTRIBUTETYPE);
    m_EAttributeEClass->getEStructuralFeatures().push_back(
            m_EAttribute__eAttributeType);

    // EAnnotation
    {
        m_EAnnotationEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EAnnotationEClass->setClassifierID(EANNOTATION);
        m_EAnnotationEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EAnnotationEClass);
    }
    // m_EAnnotation__source has already been allocated above
    m_EAnnotation__source->setFeatureID(
            ::ecore::EcorePackage::EANNOTATION__SOURCE);
    m_EAnnotationEClass->getEStructuralFeatures().push_back(
            m_EAnnotation__source);
    // m_EAnnotation__details has already been allocated above
    m_EAnnotation__details->setFeatureID(
            ::ecore::EcorePackage::EANNOTATION__DETAILS);
    m_EAnnotationEClass->getEStructuralFeatures().push_back(
            m_EAnnotation__details);
    // m_EAnnotation__eModelElement has already been allocated above
    m_EAnnotation__eModelElement->setFeatureID(
            ::ecore::EcorePackage::EANNOTATION__EMODELELEMENT);
    m_EAnnotationEClass->getEStructuralFeatures().push_back(
            m_EAnnotation__eModelElement);
    // m_EAnnotation__contents has already been allocated above
    m_EAnnotation__contents->setFeatureID(
            ::ecore::EcorePackage::EANNOTATION__CONTENTS);
    m_EAnnotationEClass->getEStructuralFeatures().push_back(
            m_EAnnotation__contents);
    // m_EAnnotation__references has already been allocated above
    m_EAnnotation__references->setFeatureID(
            ::ecore::EcorePackage::EANNOTATION__REFERENCES);
    m_EAnnotationEClass->getEStructuralFeatures().push_back(
            m_EAnnotation__references);

    // EClass
    {
        m_EClassEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
        m_EClassEClass->setClassifierID(ECLASS);
        m_EClassEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EClassEClass);
    }
    // m_EClass__abstract has already been allocated above
    m_EClass__abstract->setFeatureID(::ecore::EcorePackage::ECLASS__ABSTRACT);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__abstract);
    // m_EClass__interface has already been allocated above
    m_EClass__interface->setFeatureID(::ecore::EcorePackage::ECLASS__INTERFACE);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__interface);
    // m_EClass__eSuperTypes has already been allocated above
    m_EClass__eSuperTypes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__ESUPERTYPES);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eSuperTypes);
    // m_EClass__eOperations has already been allocated above
    m_EClass__eOperations->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EOPERATIONS);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eOperations);
    // m_EClass__eAllAttributes has already been allocated above
    m_EClass__eAllAttributes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLATTRIBUTES);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eAllAttributes);
    // m_EClass__eAllReferences has already been allocated above
    m_EClass__eAllReferences->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLREFERENCES);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eAllReferences);
    // m_EClass__eReferences has already been allocated above
    m_EClass__eReferences->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EREFERENCES);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eReferences);
    // m_EClass__eAttributes has already been allocated above
    m_EClass__eAttributes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EATTRIBUTES);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eAttributes);
    // m_EClass__eAllContainments has already been allocated above
    m_EClass__eAllContainments->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLCONTAINMENTS);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eAllContainments);
    // m_EClass__eAllOperations has already been allocated above
    m_EClass__eAllOperations->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLOPERATIONS);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eAllOperations);
    // m_EClass__eAllStructuralFeatures has already been allocated above
    m_EClass__eAllStructuralFeatures->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLSTRUCTURALFEATURES);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eAllStructuralFeatures);
    // m_EClass__eAllSuperTypes has already been allocated above
    m_EClass__eAllSuperTypes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLSUPERTYPES);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eAllSuperTypes);
    // m_EClass__eIDAttribute has already been allocated above
    m_EClass__eIDAttribute->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EIDATTRIBUTE);
    m_EClassEClass->getEStructuralFeatures().push_back(m_EClass__eIDAttribute);
    // m_EClass__eStructuralFeatures has already been allocated above
    m_EClass__eStructuralFeatures->setFeatureID(
            ::ecore::EcorePackage::ECLASS__ESTRUCTURALFEATURES);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eStructuralFeatures);
    // m_EClass__eGenericSuperTypes has already been allocated above
    m_EClass__eGenericSuperTypes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EGENERICSUPERTYPES);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eGenericSuperTypes);
    // m_EClass__eAllGenericSuperTypes has already been allocated above
    m_EClass__eAllGenericSuperTypes->setFeatureID(
            ::ecore::EcorePackage::ECLASS__EALLGENERICSUPERTYPES);
    m_EClassEClass->getEStructuralFeatures().push_back(
            m_EClass__eAllGenericSuperTypes);

    // EClassifier
    {
        m_EClassifierEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EClassifierEClass->setClassifierID(ECLASSIFIER);
        m_EClassifierEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EClassifierEClass);
    }
    // m_EClassifier__instanceClassName has already been allocated above
    m_EClassifier__instanceClassName->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASSNAME);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__instanceClassName);
    // m_EClassifier__instanceClass has already been allocated above
    m_EClassifier__instanceClass->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__INSTANCECLASS);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__instanceClass);
    // m_EClassifier__defaultValue has already been allocated above
    m_EClassifier__defaultValue->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__DEFAULTVALUE);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__defaultValue);
    // m_EClassifier__instanceTypeName has already been allocated above
    m_EClassifier__instanceTypeName->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__INSTANCETYPENAME);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__instanceTypeName);
    // m_EClassifier__ePackage has already been allocated above
    m_EClassifier__ePackage->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__EPACKAGE);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__ePackage);
    // m_EClassifier__eTypeParameters has already been allocated above
    m_EClassifier__eTypeParameters->setFeatureID(
            ::ecore::EcorePackage::ECLASSIFIER__ETYPEPARAMETERS);
    m_EClassifierEClass->getEStructuralFeatures().push_back(
            m_EClassifier__eTypeParameters);

    // EDataType
    {
        m_EDataTypeEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EDataTypeEClass->setClassifierID(EDATATYPE);
        m_EDataTypeEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EDataTypeEClass);
    }
    // m_EDataType__serializable has already been allocated above
    m_EDataType__serializable->setFeatureID(
            ::ecore::EcorePackage::EDATATYPE__SERIALIZABLE);
    m_EDataTypeEClass->getEStructuralFeatures().push_back(
            m_EDataType__serializable);

    // EEnum
    {
        m_EEnumEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
        m_EEnumEClass->setClassifierID(EENUM);
        m_EEnumEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EEnumEClass);
    }
    // m_EEnum__eLiterals has already been allocated above
    m_EEnum__eLiterals->setFeatureID(::ecore::EcorePackage::EENUM__ELITERALS);
    m_EEnumEClass->getEStructuralFeatures().push_back(m_EEnum__eLiterals);

    // EEnumLiteral
    {
        m_EEnumLiteralEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EEnumLiteralEClass->setClassifierID(EENUMLITERAL);
        m_EEnumLiteralEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EEnumLiteralEClass);
    }
    // m_EEnumLiteral__value has already been allocated above
    m_EEnumLiteral__value->setFeatureID(
            ::ecore::EcorePackage::EENUMLITERAL__VALUE);
    m_EEnumLiteralEClass->getEStructuralFeatures().push_back(
            m_EEnumLiteral__value);
    // m_EEnumLiteral__instance has already been allocated above
    m_EEnumLiteral__instance->setFeatureID(
            ::ecore::EcorePackage::EENUMLITERAL__INSTANCE);
    m_EEnumLiteralEClass->getEStructuralFeatures().push_back(
            m_EEnumLiteral__instance);
    // m_EEnumLiteral__literal has already been allocated above
    m_EEnumLiteral__literal->setFeatureID(
            ::ecore::EcorePackage::EENUMLITERAL__LITERAL);
    m_EEnumLiteralEClass->getEStructuralFeatures().push_back(
            m_EEnumLiteral__literal);
    // m_EEnumLiteral__eEnum has already been allocated above
    m_EEnumLiteral__eEnum->setFeatureID(
            ::ecore::EcorePackage::EENUMLITERAL__EENUM);
    m_EEnumLiteralEClass->getEStructuralFeatures().push_back(
            m_EEnumLiteral__eEnum);

    // EFactory
    {
        m_EFactoryEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EFactoryEClass->setClassifierID(EFACTORY);
        m_EFactoryEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EFactoryEClass);
    }
    // m_EFactory__ePackage has already been allocated above
    m_EFactory__ePackage->setFeatureID(
            ::ecore::EcorePackage::EFACTORY__EPACKAGE);
    m_EFactoryEClass->getEStructuralFeatures().push_back(m_EFactory__ePackage);

    // EModelElement
    {
        m_EModelElementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EModelElementEClass->setClassifierID(EMODELELEMENT);
        m_EModelElementEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EModelElementEClass);
    }
    // m_EModelElement__eAnnotations has already been allocated above
    m_EModelElement__eAnnotations->setFeatureID(
            ::ecore::EcorePackage::EMODELELEMENT__EANNOTATIONS);
    m_EModelElementEClass->getEStructuralFeatures().push_back(
            m_EModelElement__eAnnotations);

    // ENamedElement
    {
        m_ENamedElementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ENamedElementEClass->setClassifierID(ENAMEDELEMENT);
        m_ENamedElementEClass->setEPackage(_this());
        getEClassifiers().push_back(m_ENamedElementEClass);
    }
    // m_ENamedElement__name has already been allocated above
    m_ENamedElement__name->setFeatureID(
            ::ecore::EcorePackage::ENAMEDELEMENT__NAME);
    m_ENamedElementEClass->getEStructuralFeatures().push_back(
            m_ENamedElement__name);

    // EObject
    {
        m_EObjectEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EObjectEClass->setClassifierID(EOBJECT);
        m_EObjectEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EObjectEClass);
    }

    // EOperation
    {
        m_EOperationEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EOperationEClass->setClassifierID(EOPERATION);
        m_EOperationEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EOperationEClass);
    }
    // m_EOperation__eContainingClass has already been allocated above
    m_EOperation__eContainingClass->setFeatureID(
            ::ecore::EcorePackage::EOPERATION__ECONTAININGCLASS);
    m_EOperationEClass->getEStructuralFeatures().push_back(
            m_EOperation__eContainingClass);
    // m_EOperation__eTypeParameters has already been allocated above
    m_EOperation__eTypeParameters->setFeatureID(
            ::ecore::EcorePackage::EOPERATION__ETYPEPARAMETERS);
    m_EOperationEClass->getEStructuralFeatures().push_back(
            m_EOperation__eTypeParameters);
    // m_EOperation__eParameters has already been allocated above
    m_EOperation__eParameters->setFeatureID(
            ::ecore::EcorePackage::EOPERATION__EPARAMETERS);
    m_EOperationEClass->getEStructuralFeatures().push_back(
            m_EOperation__eParameters);
    // m_EOperation__eExceptions has already been allocated above
    m_EOperation__eExceptions->setFeatureID(
            ::ecore::EcorePackage::EOPERATION__EEXCEPTIONS);
    m_EOperationEClass->getEStructuralFeatures().push_back(
            m_EOperation__eExceptions);
    // m_EOperation__eGenericExceptions has already been allocated above
    m_EOperation__eGenericExceptions->setFeatureID(
            ::ecore::EcorePackage::EOPERATION__EGENERICEXCEPTIONS);
    m_EOperationEClass->getEStructuralFeatures().push_back(
            m_EOperation__eGenericExceptions);

    // EPackage
    {
        m_EPackageEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EPackageEClass->setClassifierID(EPACKAGE);
        m_EPackageEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EPackageEClass);
    }
    // m_EPackage__nsURI has already been allocated above
    m_EPackage__nsURI->setFeatureID(::ecore::EcorePackage::EPACKAGE__NSURI);
    m_EPackageEClass->getEStructuralFeatures().push_back(m_EPackage__nsURI);
    // m_EPackage__nsPrefix has already been allocated above
    m_EPackage__nsPrefix->setFeatureID(
            ::ecore::EcorePackage::EPACKAGE__NSPREFIX);
    m_EPackageEClass->getEStructuralFeatures().push_back(m_EPackage__nsPrefix);
    // m_EPackage__eFactoryInstance has already been allocated above
    m_EPackage__eFactoryInstance->setFeatureID(
            ::ecore::EcorePackage::EPACKAGE__EFACTORYINSTANCE);
    m_EPackageEClass->getEStructuralFeatures().push_back(
            m_EPackage__eFactoryInstance);
    // m_EPackage__eClassifiers has already been allocated above
    m_EPackage__eClassifiers->setFeatureID(
            ::ecore::EcorePackage::EPACKAGE__ECLASSIFIERS);
    m_EPackageEClass->getEStructuralFeatures().push_back(
            m_EPackage__eClassifiers);
    // m_EPackage__eSubpackages has already been allocated above
    m_EPackage__eSubpackages->setFeatureID(
            ::ecore::EcorePackage::EPACKAGE__ESUBPACKAGES);
    m_EPackageEClass->getEStructuralFeatures().push_back(
            m_EPackage__eSubpackages);
    // m_EPackage__eSuperPackage has already been allocated above
    m_EPackage__eSuperPackage->setFeatureID(
            ::ecore::EcorePackage::EPACKAGE__ESUPERPACKAGE);
    m_EPackageEClass->getEStructuralFeatures().push_back(
            m_EPackage__eSuperPackage);

    // EParameter
    {
        m_EParameterEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EParameterEClass->setClassifierID(EPARAMETER);
        m_EParameterEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EParameterEClass);
    }
    // m_EParameter__eOperation has already been allocated above
    m_EParameter__eOperation->setFeatureID(
            ::ecore::EcorePackage::EPARAMETER__EOPERATION);
    m_EParameterEClass->getEStructuralFeatures().push_back(
            m_EParameter__eOperation);

    // EReference
    {
        m_EReferenceEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EReferenceEClass->setClassifierID(EREFERENCE);
        m_EReferenceEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EReferenceEClass);
    }
    // m_EReference__containment has already been allocated above
    m_EReference__containment->setFeatureID(
            ::ecore::EcorePackage::EREFERENCE__CONTAINMENT);
    m_EReferenceEClass->getEStructuralFeatures().push_back(
            m_EReference__containment);
    // m_EReference__container has already been allocated above
    m_EReference__container->setFeatureID(
            ::ecore::EcorePackage::EREFERENCE__CONTAINER);
    m_EReferenceEClass->getEStructuralFeatures().push_back(
            m_EReference__container);
    // m_EReference__resolveProxies has already been allocated above
    m_EReference__resolveProxies->setFeatureID(
            ::ecore::EcorePackage::EREFERENCE__RESOLVEPROXIES);
    m_EReferenceEClass->getEStructuralFeatures().push_back(
            m_EReference__resolveProxies);
    // m_EReference__eOpposite has already been allocated above
    m_EReference__eOpposite->setFeatureID(
            ::ecore::EcorePackage::EREFERENCE__EOPPOSITE);
    m_EReferenceEClass->getEStructuralFeatures().push_back(
            m_EReference__eOpposite);
    // m_EReference__eReferenceType has already been allocated above
    m_EReference__eReferenceType->setFeatureID(
            ::ecore::EcorePackage::EREFERENCE__EREFERENCETYPE);
    m_EReferenceEClass->getEStructuralFeatures().push_back(
            m_EReference__eReferenceType);
    // m_EReference__eKeys has already been allocated above
    m_EReference__eKeys->setFeatureID(::ecore::EcorePackage::EREFERENCE__EKEYS);
    m_EReferenceEClass->getEStructuralFeatures().push_back(m_EReference__eKeys);

    // EStructuralFeature
    {
        m_EStructuralFeatureEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EStructuralFeatureEClass->setClassifierID(ESTRUCTURALFEATURE);
        m_EStructuralFeatureEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EStructuralFeatureEClass);
    }
    // m_EStructuralFeature__changeable has already been allocated above
    m_EStructuralFeature__changeable->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__CHANGEABLE);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__changeable);
    // m_EStructuralFeature__volatile has already been allocated above
    m_EStructuralFeature__volatile->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__VOLATILE);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__volatile);
    // m_EStructuralFeature__transient has already been allocated above
    m_EStructuralFeature__transient->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__TRANSIENT);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__transient);
    // m_EStructuralFeature__defaultValueLiteral has already been allocated above
    m_EStructuralFeature__defaultValueLiteral->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUELITERAL);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__defaultValueLiteral);
    // m_EStructuralFeature__defaultValue has already been allocated above
    m_EStructuralFeature__defaultValue->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__DEFAULTVALUE);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__defaultValue);
    // m_EStructuralFeature__unsettable has already been allocated above
    m_EStructuralFeature__unsettable->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__UNSETTABLE);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__unsettable);
    // m_EStructuralFeature__derived has already been allocated above
    m_EStructuralFeature__derived->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__DERIVED);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__derived);
    // m_EStructuralFeature__eContainingClass has already been allocated above
    m_EStructuralFeature__eContainingClass->setFeatureID(
            ::ecore::EcorePackage::ESTRUCTURALFEATURE__ECONTAININGCLASS);
    m_EStructuralFeatureEClass->getEStructuralFeatures().push_back(
            m_EStructuralFeature__eContainingClass);

    // ETypedElement
    {
        m_ETypedElementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ETypedElementEClass->setClassifierID(ETYPEDELEMENT);
        m_ETypedElementEClass->setEPackage(_this());
        getEClassifiers().push_back(m_ETypedElementEClass);
    }
    // m_ETypedElement__ordered has already been allocated above
    m_ETypedElement__ordered->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__ORDERED);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__ordered);
    // m_ETypedElement__unique has already been allocated above
    m_ETypedElement__unique->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__UNIQUE);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__unique);
    // m_ETypedElement__lowerBound has already been allocated above
    m_ETypedElement__lowerBound->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__LOWERBOUND);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__lowerBound);
    // m_ETypedElement__upperBound has already been allocated above
    m_ETypedElement__upperBound->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__UPPERBOUND);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__upperBound);
    // m_ETypedElement__many has already been allocated above
    m_ETypedElement__many->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__MANY);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__many);
    // m_ETypedElement__required has already been allocated above
    m_ETypedElement__required->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__REQUIRED);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__required);
    // m_ETypedElement__eType has already been allocated above
    m_ETypedElement__eType->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__ETYPE);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__eType);
    // m_ETypedElement__eGenericType has already been allocated above
    m_ETypedElement__eGenericType->setFeatureID(
            ::ecore::EcorePackage::ETYPEDELEMENT__EGENERICTYPE);
    m_ETypedElementEClass->getEStructuralFeatures().push_back(
            m_ETypedElement__eGenericType);

    // EStringToStringMapEntry
    {
        m_EStringToStringMapEntryEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EStringToStringMapEntryEClass->setClassifierID(
                ESTRINGTOSTRINGMAPENTRY);
        m_EStringToStringMapEntryEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EStringToStringMapEntryEClass);
    }
    // m_EStringToStringMapEntry__key has already been allocated above
    m_EStringToStringMapEntry__key->setFeatureID(
            ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__KEY);
    m_EStringToStringMapEntryEClass->getEStructuralFeatures().push_back(
            m_EStringToStringMapEntry__key);
    // m_EStringToStringMapEntry__value has already been allocated above
    m_EStringToStringMapEntry__value->setFeatureID(
            ::ecore::EcorePackage::ESTRINGTOSTRINGMAPENTRY__VALUE);
    m_EStringToStringMapEntryEClass->getEStructuralFeatures().push_back(
            m_EStringToStringMapEntry__value);

    // EGenericType
    {
        m_EGenericTypeEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_EGenericTypeEClass->setClassifierID(EGENERICTYPE);
        m_EGenericTypeEClass->setEPackage(_this());
        getEClassifiers().push_back(m_EGenericTypeEClass);
    }
    // m_EGenericType__eUpperBound has already been allocated above
    m_EGenericType__eUpperBound->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__EUPPERBOUND);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eUpperBound);
    // m_EGenericType__eTypeArguments has already been allocated above
    m_EGenericType__eTypeArguments->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__ETYPEARGUMENTS);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eTypeArguments);
    // m_EGenericType__eRawType has already been allocated above
    m_EGenericType__eRawType->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__ERAWTYPE);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eRawType);
    // m_EGenericType__eLowerBound has already been allocated above
    m_EGenericType__eLowerBound->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__ELOWERBOUND);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eLowerBound);
    // m_EGenericType__eTypeParameter has already been allocated above
    m_EGenericType__eTypeParameter->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__ETYPEPARAMETER);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eTypeParameter);
    // m_EGenericType__eClassifier has already been allocated above
    m_EGenericType__eClassifier->setFeatureID(
            ::ecore::EcorePackage::EGENERICTYPE__ECLASSIFIER);
    m_EGenericTypeEClass->getEStructuralFeatures().push_back(
            m_EGenericType__eClassifier);

    // ETypeParameter
    {
        m_ETypeParameterEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ETypeParameterEClass->setClassifierID(ETYPEPARAMETER);
        m_ETypeParameterEClass->setEPackage(_this());
        getEClassifiers().push_back(m_ETypeParameterEClass);
    }
    // m_ETypeParameter__eBounds has already been allocated above
    m_ETypeParameter__eBounds->setFeatureID(
            ::ecore::EcorePackage::ETYPEPARAMETER__EBOUNDS);
    m_ETypeParameterEClass->getEStructuralFeatures().push_back(
            m_ETypeParameter__eBounds);

    // Create enums

    // Create data types

    {
        m_EBigDecimalEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EBigDecimalEDataType->setClassifierID(EBIGDECIMAL);
        m_EBigDecimalEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EBigDecimalEDataType);
    }

    {
        m_EBigIntegerEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EBigIntegerEDataType->setClassifierID(EBIGINTEGER);
        m_EBigIntegerEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EBigIntegerEDataType);
    }

    {
        m_EBooleanEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EBooleanEDataType->setClassifierID(EBOOLEAN);
        m_EBooleanEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EBooleanEDataType);
    }

    {
        m_EBooleanObjectEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EBooleanObjectEDataType->setClassifierID(EBOOLEANOBJECT);
        m_EBooleanObjectEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EBooleanObjectEDataType);
    }

    {
        m_EByteEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EByteEDataType->setClassifierID(EBYTE);
        m_EByteEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EByteEDataType);
    }

    {
        m_EByteArrayEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EByteArrayEDataType->setClassifierID(EBYTEARRAY);
        m_EByteArrayEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EByteArrayEDataType);
    }

    {
        m_EByteObjectEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EByteObjectEDataType->setClassifierID(EBYTEOBJECT);
        m_EByteObjectEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EByteObjectEDataType);
    }

    {
        m_ECharEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_ECharEDataType->setClassifierID(ECHAR);
        m_ECharEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_ECharEDataType);
    }

    {
        m_ECharacterObjectEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_ECharacterObjectEDataType->setClassifierID(ECHARACTEROBJECT);
        m_ECharacterObjectEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_ECharacterObjectEDataType);
    }

    {
        m_EDateEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EDateEDataType->setClassifierID(EDATE);
        m_EDateEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EDateEDataType);
    }

    {
        m_EDiagnosticChainEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EDiagnosticChainEDataType->setClassifierID(EDIAGNOSTICCHAIN);
        m_EDiagnosticChainEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EDiagnosticChainEDataType);
    }

    {
        m_EDoubleEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EDoubleEDataType->setClassifierID(EDOUBLE);
        m_EDoubleEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EDoubleEDataType);
    }

    {
        m_EDoubleObjectEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EDoubleObjectEDataType->setClassifierID(EDOUBLEOBJECT);
        m_EDoubleObjectEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EDoubleObjectEDataType);
    }

    {
        m_EEListEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EEListEDataType->setClassifierID(EELIST);
        m_EEListEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EEListEDataType);
    }

    {
        m_EEnumeratorEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EEnumeratorEDataType->setClassifierID(EENUMERATOR);
        m_EEnumeratorEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EEnumeratorEDataType);
    }

    {
        m_EFeatureMapEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EFeatureMapEDataType->setClassifierID(EFEATUREMAP);
        m_EFeatureMapEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EFeatureMapEDataType);
    }

    {
        m_EFeatureMapEntryEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EFeatureMapEntryEDataType->setClassifierID(EFEATUREMAPENTRY);
        m_EFeatureMapEntryEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EFeatureMapEntryEDataType);
    }

    {
        m_EFloatEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EFloatEDataType->setClassifierID(EFLOAT);
        m_EFloatEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EFloatEDataType);
    }

    {
        m_EFloatObjectEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EFloatObjectEDataType->setClassifierID(EFLOATOBJECT);
        m_EFloatObjectEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EFloatObjectEDataType);
    }

    {
        m_EIntEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EIntEDataType->setClassifierID(EINT);
        m_EIntEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EIntEDataType);
    }

    {
        m_EIntegerObjectEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EIntegerObjectEDataType->setClassifierID(EINTEGEROBJECT);
        m_EIntegerObjectEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EIntegerObjectEDataType);
    }

    {
        m_EJavaClassEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EJavaClassEDataType->setClassifierID(EJAVACLASS);
        m_EJavaClassEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EJavaClassEDataType);
    }

    {
        m_EJavaObjectEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EJavaObjectEDataType->setClassifierID(EJAVAOBJECT);
        m_EJavaObjectEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EJavaObjectEDataType);
    }

    {
        m_ELongEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_ELongEDataType->setClassifierID(ELONG);
        m_ELongEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_ELongEDataType);
    }

    {
        m_ELongObjectEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_ELongObjectEDataType->setClassifierID(ELONGOBJECT);
        m_ELongObjectEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_ELongObjectEDataType);
    }

    {
        m_EMapEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EMapEDataType->setClassifierID(EMAP);
        m_EMapEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EMapEDataType);
    }

    {
        m_EResourceEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EResourceEDataType->setClassifierID(ERESOURCE);
        m_EResourceEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EResourceEDataType);
    }

    {
        m_EResourceSetEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EResourceSetEDataType->setClassifierID(ERESOURCESET);
        m_EResourceSetEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EResourceSetEDataType);
    }

    {
        m_EShortEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EShortEDataType->setClassifierID(ESHORT);
        m_EShortEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EShortEDataType);
    }

    {
        m_EShortObjectEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EShortObjectEDataType->setClassifierID(ESHORTOBJECT);
        m_EShortObjectEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EShortObjectEDataType);
    }

    {
        m_EStringEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_EStringEDataType->setClassifierID(ESTRING);
        m_EStringEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EStringEDataType);
    }

    {
        m_ETreeIteratorEDataType = ::ecore::Ptr < ::ecore::EDataType
                > (new ::ecore::EDataType);
        m_ETreeIteratorEDataType->setClassifierID(ETREEITERATOR);
        m_ETreeIteratorEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_ETreeIteratorEDataType);
    }

    {
        m_EInvocationTargetExceptionEDataType = ::ecore::Ptr
                < ::ecore::EDataType > (new ::ecore::EDataType);
        m_EInvocationTargetExceptionEDataType->setClassifierID(
                EINVOCATIONTARGETEXCEPTION);
        m_EInvocationTargetExceptionEDataType->setEPackage(_this());
        getEClassifiers().push_back(m_EInvocationTargetExceptionEDataType);
    }

    // Initialize package
    setName("ecore");
    setNsPrefix("ecore");
    setNsURI("http://www.eclipse.org/emf/2002/Ecore");

    // Create type parameters
    {
        ::ecore::ETypeParameter_ptr _tp;

        _tp = ::ecore::Ptr < ::ecore::ETypeParameter
                > (new ::ecore::ETypeParameter);
        _tp->setName("E");
        m_EEListEDataType->getETypeParameters().push_back(_tp);

        _tp = ::ecore::Ptr < ::ecore::ETypeParameter
                > (new ::ecore::ETypeParameter);
        _tp->setName("T");
        m_EJavaClassEDataType->getETypeParameters().push_back(_tp);

        _tp = ::ecore::Ptr < ::ecore::ETypeParameter
                > (new ::ecore::ETypeParameter);
        _tp->setName("K");
        m_EMapEDataType->getETypeParameters().push_back(_tp);
        _tp = ::ecore::Ptr < ::ecore::ETypeParameter
                > (new ::ecore::ETypeParameter);
        _tp->setName("V");
        m_EMapEDataType->getETypeParameters().push_back(_tp);

        _tp = ::ecore::Ptr < ::ecore::ETypeParameter
                > (new ::ecore::ETypeParameter);
        _tp->setName("E");
        m_ETreeIteratorEDataType->getETypeParameters().push_back(_tp);
    }

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_EAttributeEClass->getESuperTypes().push_back(m_EStructuralFeatureEClass);
    m_EAnnotationEClass->getESuperTypes().push_back(m_EModelElementEClass);
    m_EClassEClass->getESuperTypes().push_back(m_EClassifierEClass);
    m_EClassifierEClass->getESuperTypes().push_back(m_ENamedElementEClass);
    m_EDataTypeEClass->getESuperTypes().push_back(m_EClassifierEClass);
    m_EEnumEClass->getESuperTypes().push_back(m_EDataTypeEClass);
    m_EEnumLiteralEClass->getESuperTypes().push_back(m_ENamedElementEClass);
    m_EFactoryEClass->getESuperTypes().push_back(m_EModelElementEClass);
    m_ENamedElementEClass->getESuperTypes().push_back(m_EModelElementEClass);
    m_EOperationEClass->getESuperTypes().push_back(m_ETypedElementEClass);
    m_EPackageEClass->getESuperTypes().push_back(m_ENamedElementEClass);
    m_EParameterEClass->getESuperTypes().push_back(m_ETypedElementEClass);
    m_EReferenceEClass->getESuperTypes().push_back(m_EStructuralFeatureEClass);
    m_EStructuralFeatureEClass->getESuperTypes().push_back(
            m_ETypedElementEClass);
    m_ETypedElementEClass->getESuperTypes().push_back(m_ENamedElementEClass);
    m_ETypeParameterEClass->getESuperTypes().push_back(m_ENamedElementEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // EAttribute
    m_EAttributeEClass->setName("EAttribute");
    m_EAttributeEClass->setAbstract(false);
    m_EAttributeEClass->setInterface(false);
    m_EAttribute__iD->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EAttribute__iD), "iD", true,
            false, false, "", false, false, true, true, 0, 1, false, false);
    m_EAttribute__iD->setID(false);
    m_EAttribute__eAttributeType->setEType(m_EDataTypeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EAttribute__eAttributeType),
            "eAttributeType", false, true, true, "", false, true, true, true, 1,
            1, false, true);
    m_EAttribute__eAttributeType->setContainment(false);
    m_EAttribute__eAttributeType->setResolveProxies(true);
    // EAnnotation
    m_EAnnotationEClass->setName("EAnnotation");
    m_EAnnotationEClass->setAbstract(false);
    m_EAnnotationEClass->setInterface(false);
    m_EAnnotation__source->setEType(m_EStringEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EAnnotation__source),
            "source", true, false, false, "", false, false, true, true, 0, 1,
            false, false);
    m_EAnnotation__source->setID(false);
    m_EAnnotation__details->setEType(m_EStringToStringMapEntryEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EAnnotation__details),
            "details", true, false, false, "", false, false, true, true, 0, -1,
            true, false);
    m_EAnnotation__details->setContainment(true);
    m_EAnnotation__details->setResolveProxies(false);
    m_EAnnotation__eModelElement->setEType(m_EModelElementEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EAnnotation__eModelElement),
            "eModelElement", true, false, true, "", false, false, true, true, 0,
            1, false, false);
    m_EAnnotation__eModelElement->setContainment(false);
    m_EAnnotation__eModelElement->setResolveProxies(false);
    m_EAnnotation__eModelElement->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EModelElementEClass->getEStructuralFeatures()[0]));
    m_EAnnotation__contents->setEType(m_EObjectEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EAnnotation__contents),
            "contents", true, false, false, "", false, false, true, true, 0, -1,
            true, false);
    m_EAnnotation__contents->setContainment(true);
    m_EAnnotation__contents->setResolveProxies(false);
    m_EAnnotation__references->setEType(m_EObjectEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EAnnotation__references),
            "references", true, false, false, "", false, false, true, true, 0,
            -1, true, false);
    m_EAnnotation__references->setContainment(false);
    m_EAnnotation__references->setResolveProxies(true);
    // EClass
    m_EClassEClass->setName("EClass");
    m_EClassEClass->setAbstract(false);
    m_EClassEClass->setInterface(false);
    m_EClass__abstract->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EClass__abstract),
            "abstract", true, false, false, "", false, false, true, true, 0, 1,
            false, false);
    m_EClass__abstract->setID(false);
    m_EClass__interface->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EClass__interface),
            "interface", true, false, false, "", false, false, true, true, 0, 1,
            false, false);
    m_EClass__interface->setID(false);
    m_EClass__eSuperTypes->setEType(m_EClassEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eSuperTypes),
            "eSuperTypes", true, false, false, "", true, false, true, true, 0,
            -1, true, false);
    m_EClass__eSuperTypes->setContainment(false);
    m_EClass__eSuperTypes->setResolveProxies(true);
    m_EClass__eOperations->setEType(m_EOperationEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eOperations),
            "eOperations", true, false, false, "", false, false, true, true, 0,
            -1, true, false);
    m_EClass__eOperations->setContainment(true);
    m_EClass__eOperations->setResolveProxies(false);
    m_EClass__eOperations->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EOperationEClass->getEStructuralFeatures()[0]));
    m_EClass__eAllAttributes->setEType(m_EAttributeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eAllAttributes),
            "eAllAttributes", false, true, true, "", false, true, true, true, 0,
            -1, true, false);
    m_EClass__eAllAttributes->setContainment(false);
    m_EClass__eAllAttributes->setResolveProxies(true);
    m_EClass__eAllReferences->setEType(m_EReferenceEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eAllReferences),
            "eAllReferences", false, true, true, "", false, true, true, true, 0,
            -1, true, false);
    m_EClass__eAllReferences->setContainment(false);
    m_EClass__eAllReferences->setResolveProxies(true);
    m_EClass__eReferences->setEType(m_EReferenceEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eReferences),
            "eReferences", false, true, true, "", false, true, true, true, 0,
            -1, true, false);
    m_EClass__eReferences->setContainment(false);
    m_EClass__eReferences->setResolveProxies(true);
    m_EClass__eAttributes->setEType(m_EAttributeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eAttributes),
            "eAttributes", false, true, true, "", false, true, true, true, 0,
            -1, true, false);
    m_EClass__eAttributes->setContainment(false);
    m_EClass__eAttributes->setResolveProxies(true);
    m_EClass__eAllContainments->setEType(m_EReferenceEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eAllContainments),
            "eAllContainments", false, true, true, "", false, true, true, true,
            0, -1, true, false);
    m_EClass__eAllContainments->setContainment(false);
    m_EClass__eAllContainments->setResolveProxies(true);
    m_EClass__eAllOperations->setEType(m_EOperationEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eAllOperations),
            "eAllOperations", false, true, true, "", false, true, true, true, 0,
            -1, true, false);
    m_EClass__eAllOperations->setContainment(false);
    m_EClass__eAllOperations->setResolveProxies(true);
    m_EClass__eAllStructuralFeatures->setEType(m_EStructuralFeatureEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference
                    > (m_EClass__eAllStructuralFeatures),
            "eAllStructuralFeatures", false, true, true, "", false, true, true,
            true, 0, -1, true, false);
    m_EClass__eAllStructuralFeatures->setContainment(false);
    m_EClass__eAllStructuralFeatures->setResolveProxies(true);
    m_EClass__eAllSuperTypes->setEType(m_EClassEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eAllSuperTypes),
            "eAllSuperTypes", false, true, true, "", false, true, true, true, 0,
            -1, true, false);
    m_EClass__eAllSuperTypes->setContainment(false);
    m_EClass__eAllSuperTypes->setResolveProxies(true);
    m_EClass__eIDAttribute->setEType(m_EAttributeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eIDAttribute),
            "eIDAttribute", false, true, true, "", false, true, true, true, 0,
            1, false, false);
    m_EClass__eIDAttribute->setContainment(false);
    m_EClass__eIDAttribute->setResolveProxies(false);
    m_EClass__eStructuralFeatures->setEType(m_EStructuralFeatureEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eStructuralFeatures),
            "eStructuralFeatures", true, false, false, "", false, false, true,
            true, 0, -1, true, false);
    m_EClass__eStructuralFeatures->setContainment(true);
    m_EClass__eStructuralFeatures->setResolveProxies(false);
    m_EClass__eStructuralFeatures->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EStructuralFeatureEClass->getEStructuralFeatures()[7]));
    m_EClass__eGenericSuperTypes->setEType(m_EGenericTypeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClass__eGenericSuperTypes),
            "eGenericSuperTypes", true, false, false, "", true, false, true,
            true, 0, -1, true, false);
    m_EClass__eGenericSuperTypes->setContainment(true);
    m_EClass__eGenericSuperTypes->setResolveProxies(false);
    m_EClass__eAllGenericSuperTypes->setEType(m_EGenericTypeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference
                    > (m_EClass__eAllGenericSuperTypes),
            "eAllGenericSuperTypes", false, true, true, "", false, true, true,
            true, 0, -1, true, false);
    m_EClass__eAllGenericSuperTypes->setContainment(false);
    m_EClass__eAllGenericSuperTypes->setResolveProxies(true);
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EClassEClass, nullptr,
                "isSuperTypeOf", 0, 1, true, true);
        _op->setEType(m_EBooleanEDataType);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "someClass", 0, 1,
                    true, true);
            _pa->setEType(m_EClassEClass);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EClassEClass, nullptr,
                "getFeatureCount", 0, 1, true, true);
        _op->setEType(m_EIntEDataType);
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EClassEClass, nullptr,
                "getEStructuralFeature", 0, 1, true, true);
        _op->setEType(m_EStructuralFeatureEClass);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "featureID", 0, 1,
                    true, true);
            _pa->setEType(m_EIntEDataType);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EClassEClass, nullptr,
                "getFeatureID", 0, 1, true, true);
        _op->setEType(m_EIntEDataType);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "feature", 0, 1,
                    true, true);
            _pa->setEType(m_EStructuralFeatureEClass);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EClassEClass, nullptr,
                "getEStructuralFeature", 0, 1, true, true);
        _op->setEType(m_EStructuralFeatureEClass);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "featureName", 0,
                    1, true, true);
            _pa->setEType(m_EStringEDataType);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EClassEClass, nullptr,
                "getOperationCount", 0, 1, true, true);
        _op->setEType(m_EIntEDataType);
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EClassEClass, nullptr,
                "getEOperation", 0, 1, true, true);
        _op->setEType(m_EOperationEClass);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "operationID", 0,
                    1, true, true);
            _pa->setEType(m_EIntEDataType);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EClassEClass, nullptr,
                "getOperationID", 0, 1, true, true);
        _op->setEType(m_EIntEDataType);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "operation", 0, 1,
                    true, true);
            _pa->setEType(m_EOperationEClass);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EClassEClass, nullptr,
                "getOverride", 0, 1, true, true);
        _op->setEType(m_EOperationEClass);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "operation", 0, 1,
                    true, true);
            _pa->setEType(m_EOperationEClass);
        }
    }
    // EClassifier
    m_EClassifierEClass->setName("EClassifier");
    m_EClassifierEClass->setAbstract(true);
    m_EClassifierEClass->setInterface(false);
    m_EClassifier__instanceClassName->setEType(m_EStringEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute
                    > (m_EClassifier__instanceClassName), "instanceClassName",
            true, true, false, "", true, false, true, true, 0, 1, false, false);
    m_EClassifier__instanceClassName->setID(false);
    m_EClassifier__instanceClass->setEType(m_EJavaClassEDataType);
    {
        ::ecore::EGenericType_ptr _g0 = ::ecore::Ptr < ::ecore::EGenericType
                > (new ::ecore::EGenericType);
        _g0->setEClassifier(m_EJavaClassEDataType);
        ::ecore::EGenericType_ptr _g1 = ::ecore::Ptr < ::ecore::EGenericType
                > (new ::ecore::EGenericType);
        _g0->getETypeArguments().push_back(_g1);
        m_EClassifier__instanceClass->setEGenericType(_g0);
    }
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EClassifier__instanceClass),
            "instanceClass", false, true, true, "", false, true, true, true, 0,
            1, false, false);
    m_EClassifier__instanceClass->setID(false);
    m_EClassifier__defaultValue->setEType(m_EJavaObjectEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EClassifier__defaultValue),
            "defaultValue", false, true, true, "", false, true, true, true, 0,
            1, false, false);
    m_EClassifier__defaultValue->setID(false);
    m_EClassifier__instanceTypeName->setEType(m_EStringEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute
                    > (m_EClassifier__instanceTypeName), "instanceTypeName",
            true, true, false, "", true, false, true, true, 0, 1, false, false);
    m_EClassifier__instanceTypeName->setID(false);
    m_EClassifier__ePackage->setEType(m_EPackageEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EClassifier__ePackage),
            "ePackage", false, false, true, "", false, false, true, true, 0, 1,
            false, false);
    m_EClassifier__ePackage->setContainment(false);
    m_EClassifier__ePackage->setResolveProxies(true);
    m_EClassifier__ePackage->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EPackageEClass->getEStructuralFeatures()[3]));
    m_EClassifier__eTypeParameters->setEType(m_ETypeParameterEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference
                    > (m_EClassifier__eTypeParameters), "eTypeParameters", true,
            false, false, "", false, false, true, true, 0, -1, true, false);
    m_EClassifier__eTypeParameters->setContainment(true);
    m_EClassifier__eTypeParameters->setResolveProxies(true);
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EClassifierEClass,
                nullptr, "isInstance", 0, 1, true, true);
        _op->setEType(m_EBooleanEDataType);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "object", 0, 1,
                    true, true);
            _pa->setEType(m_EJavaObjectEDataType);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EClassifierEClass,
                nullptr, "getClassifierID", 0, 1, true, true);
        _op->setEType(m_EIntEDataType);
    }
    // EDataType
    m_EDataTypeEClass->setName("EDataType");
    m_EDataTypeEClass->setAbstract(false);
    m_EDataTypeEClass->setInterface(false);
    m_EDataType__serializable->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EDataType__serializable),
            "serializable", true, false, false, "true", false, false, true,
            true, 0, 1, false, false);
    m_EDataType__serializable->setID(false);
    // EEnum
    m_EEnumEClass->setName("EEnum");
    m_EEnumEClass->setAbstract(false);
    m_EEnumEClass->setInterface(false);
    m_EEnum__eLiterals->setEType(m_EEnumLiteralEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EEnum__eLiterals),
            "eLiterals", true, false, false, "", false, false, true, true, 0,
            -1, true, false);
    m_EEnum__eLiterals->setContainment(true);
    m_EEnum__eLiterals->setResolveProxies(false);
    m_EEnum__eLiterals->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EEnumLiteralEClass->getEStructuralFeatures()[3]));
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EEnumEClass, nullptr,
                "getEEnumLiteral", 0, 1, true, true);
        _op->setEType(m_EEnumLiteralEClass);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "name", 0, 1, true,
                    true);
            _pa->setEType(m_EStringEDataType);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EEnumEClass, nullptr,
                "getEEnumLiteral", 0, 1, true, true);
        _op->setEType(m_EEnumLiteralEClass);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "value", 0, 1,
                    true, true);
            _pa->setEType(m_EIntEDataType);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EEnumEClass, nullptr,
                "getEEnumLiteralByLiteral", 0, 1, true, true);
        _op->setEType(m_EEnumLiteralEClass);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "literal", 0, 1,
                    true, true);
            _pa->setEType(m_EStringEDataType);
        }
    }
    // EEnumLiteral
    m_EEnumLiteralEClass->setName("EEnumLiteral");
    m_EEnumLiteralEClass->setAbstract(false);
    m_EEnumLiteralEClass->setInterface(false);
    m_EEnumLiteral__value->setEType(m_EIntEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EEnumLiteral__value),
            "value", true, false, false, "", false, false, true, true, 0, 1,
            false, false);
    m_EEnumLiteral__value->setID(false);
    m_EEnumLiteral__instance->setEType(m_EEnumeratorEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EEnumLiteral__instance),
            "instance", true, false, true, "", false, false, true, true, 0, 1,
            false, false);
    m_EEnumLiteral__instance->setID(false);
    m_EEnumLiteral__literal->setEType(m_EStringEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EEnumLiteral__literal),
            "literal", true, false, false, "", false, false, true, true, 0, 1,
            false, false);
    m_EEnumLiteral__literal->setID(false);
    m_EEnumLiteral__eEnum->setEType(m_EEnumEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EEnumLiteral__eEnum),
            "eEnum", false, false, true, "", false, false, true, true, 0, 1,
            false, false);
    m_EEnumLiteral__eEnum->setContainment(false);
    m_EEnumLiteral__eEnum->setResolveProxies(false);
    m_EEnumLiteral__eEnum->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EEnumEClass->getEStructuralFeatures()[0]));
    // EFactory
    m_EFactoryEClass->setName("EFactory");
    m_EFactoryEClass->setAbstract(false);
    m_EFactoryEClass->setInterface(false);
    m_EFactory__ePackage->setEType(m_EPackageEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EFactory__ePackage),
            "ePackage", true, false, true, "", false, false, true, true, 1, 1,
            false, true);
    m_EFactory__ePackage->setContainment(false);
    m_EFactory__ePackage->setResolveProxies(false);
    m_EFactory__ePackage->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EPackageEClass->getEStructuralFeatures()[2]));
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EFactoryEClass, nullptr,
                "create", 0, 1, true, true);
        _op->setEType(m_EObjectEClass);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "eClass", 0, 1,
                    true, true);
            _pa->setEType(m_EClassEClass);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EFactoryEClass, nullptr,
                "createFromString", 0, 1, true, true);
        _op->setEType(m_EJavaObjectEDataType);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "eDataType", 0, 1,
                    true, true);
            _pa->setEType(m_EDataTypeEClass);
        }
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "literalValue", 0,
                    1, true, true);
            _pa->setEType(m_EStringEDataType);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EFactoryEClass, nullptr,
                "convertToString", 0, 1, true, true);
        _op->setEType(m_EStringEDataType);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "eDataType", 0, 1,
                    true, true);
            _pa->setEType(m_EDataTypeEClass);
        }
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "instanceValue", 0,
                    1, true, true);
            _pa->setEType(m_EJavaObjectEDataType);
        }
    }
    // EModelElement
    m_EModelElementEClass->setName("EModelElement");
    m_EModelElementEClass->setAbstract(true);
    m_EModelElementEClass->setInterface(false);
    m_EModelElement__eAnnotations->setEType(m_EAnnotationEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EModelElement__eAnnotations),
            "eAnnotations", true, false, false, "", false, false, true, true, 0,
            -1, true, false);
    m_EModelElement__eAnnotations->setContainment(true);
    m_EModelElement__eAnnotations->setResolveProxies(false);
    m_EModelElement__eAnnotations->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EAnnotationEClass->getEStructuralFeatures()[2]));
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EModelElementEClass,
                nullptr, "getEAnnotation", 0, 1, true, true);
        _op->setEType(m_EAnnotationEClass);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "source", 0, 1,
                    true, true);
            _pa->setEType(m_EStringEDataType);
        }
    }
    // ENamedElement
    m_ENamedElementEClass->setName("ENamedElement");
    m_ENamedElementEClass->setAbstract(true);
    m_ENamedElementEClass->setInterface(false);
    m_ENamedElement__name->setEType(m_EStringEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ENamedElement__name), "name",
            true, false, false, "", false, false, true, true, 0, 1, false,
            false);
    m_ENamedElement__name->setID(false);
    // EObject
    m_EObjectEClass->setName("EObject");
    m_EObjectEClass->setAbstract(false);
    m_EObjectEClass->setInterface(false);
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eClass", 0, 1, true, true);
        _op->setEType(m_EClassEClass);
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eIsProxy", 0, 1, true, true);
        _op->setEType(m_EBooleanEDataType);
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eResource", 0, 1, true, true);
        _op->setEType(m_EResourceEDataType);
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eContainer", 0, 1, true, true);
        _op->setEType(m_EObjectEClass);
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eContainingFeature", 0, 1, true, true);
        _op->setEType(m_EStructuralFeatureEClass);
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eContainmentFeature", 0, 1, true, true);
        _op->setEType(m_EReferenceEClass);
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eContents", 0, 1, true, true);
        _op->setEType(m_EEListEDataType);
        {
            ::ecore::EGenericType_ptr _g0 = ::ecore::Ptr < ::ecore::EGenericType
                    > (new ::ecore::EGenericType);
            _g0->setEClassifier(m_EEListEDataType);
            ::ecore::EGenericType_ptr _g1 = ::ecore::Ptr < ::ecore::EGenericType
                    > (new ::ecore::EGenericType);
            _g1->setEClassifier(m_EObjectEClass);
            _g0->getETypeArguments().push_back(_g1);
            _op->setEGenericType(_g0);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eAllContents", 0, 1, true, true);
        _op->setEType(m_ETreeIteratorEDataType);
        {
            ::ecore::EGenericType_ptr _g0 = ::ecore::Ptr < ::ecore::EGenericType
                    > (new ::ecore::EGenericType);
            _g0->setEClassifier(m_ETreeIteratorEDataType);
            ::ecore::EGenericType_ptr _g1 = ::ecore::Ptr < ::ecore::EGenericType
                    > (new ::ecore::EGenericType);
            _g1->setEClassifier(m_EObjectEClass);
            _g0->getETypeArguments().push_back(_g1);
            _op->setEGenericType(_g0);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eCrossReferences", 0, 1, true, true);
        _op->setEType(m_EEListEDataType);
        {
            ::ecore::EGenericType_ptr _g0 = ::ecore::Ptr < ::ecore::EGenericType
                    > (new ::ecore::EGenericType);
            _g0->setEClassifier(m_EEListEDataType);
            ::ecore::EGenericType_ptr _g1 = ::ecore::Ptr < ::ecore::EGenericType
                    > (new ::ecore::EGenericType);
            _g1->setEClassifier(m_EObjectEClass);
            _g0->getETypeArguments().push_back(_g1);
            _op->setEGenericType(_g0);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eGet", 0, 1, true, true);
        _op->setEType(m_EJavaObjectEDataType);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "feature", 0, 1,
                    true, true);
            _pa->setEType(m_EStructuralFeatureEClass);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eGet", 0, 1, true, true);
        _op->setEType(m_EJavaObjectEDataType);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "feature", 0, 1,
                    true, true);
            _pa->setEType(m_EStructuralFeatureEClass);
        }
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "resolve", 0, 1,
                    true, true);
            _pa->setEType(m_EBooleanEDataType);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eSet", 0, 1, true, true);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "feature", 0, 1,
                    true, true);
            _pa->setEType(m_EStructuralFeatureEClass);
        }
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "newValue", 0, 1,
                    true, true);
            _pa->setEType(m_EJavaObjectEDataType);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eIsSet", 0, 1, true, true);
        _op->setEType(m_EBooleanEDataType);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "feature", 0, 1,
                    true, true);
            _pa->setEType(m_EStructuralFeatureEClass);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eUnset", 0, 1, true, true);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "feature", 0, 1,
                    true, true);
            _pa->setEType(m_EStructuralFeatureEClass);
        }
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EObjectEClass, nullptr,
                "eInvoke", 0, 1, true, true);
        _op->setEType(m_EJavaObjectEDataType);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "operation", 0, 1,
                    true, true);
            _pa->setEType(m_EOperationEClass);
        }
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "arguments", 0, 1,
                    true, true);
            _pa->setEType(m_EEListEDataType);
            {
                ::ecore::EGenericType_ptr _g0 = ::ecore::Ptr
                        < ::ecore::EGenericType > (new ::ecore::EGenericType);
                _g0->setEClassifier(m_EEListEDataType);
                ::ecore::EGenericType_ptr _g1 = ::ecore::Ptr
                        < ::ecore::EGenericType > (new ::ecore::EGenericType);
                _g0->getETypeArguments().push_back(_g1);
                _pa->setEGenericType(_g0);
            }
        }
    }
    // EOperation
    m_EOperationEClass->setName("EOperation");
    m_EOperationEClass->setAbstract(false);
    m_EOperationEClass->setInterface(false);
    m_EOperation__eContainingClass->setEType(m_EClassEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference
                    > (m_EOperation__eContainingClass), "eContainingClass",
            false, false, true, "", false, false, true, true, 0, 1, false,
            false);
    m_EOperation__eContainingClass->setContainment(false);
    m_EOperation__eContainingClass->setResolveProxies(false);
    m_EOperation__eContainingClass->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EClassEClass->getEStructuralFeatures()[3]));
    m_EOperation__eTypeParameters->setEType(m_ETypeParameterEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EOperation__eTypeParameters),
            "eTypeParameters", true, false, false, "", false, false, true, true,
            0, -1, true, false);
    m_EOperation__eTypeParameters->setContainment(true);
    m_EOperation__eTypeParameters->setResolveProxies(true);
    m_EOperation__eParameters->setEType(m_EParameterEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EOperation__eParameters),
            "eParameters", true, false, false, "", false, false, true, true, 0,
            -1, true, false);
    m_EOperation__eParameters->setContainment(true);
    m_EOperation__eParameters->setResolveProxies(false);
    m_EOperation__eParameters->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EParameterEClass->getEStructuralFeatures()[0]));
    m_EOperation__eExceptions->setEType(m_EClassifierEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EOperation__eExceptions),
            "eExceptions", true, false, false, "", true, false, true, true, 0,
            -1, true, false);
    m_EOperation__eExceptions->setContainment(false);
    m_EOperation__eExceptions->setResolveProxies(true);
    m_EOperation__eGenericExceptions->setEType(m_EGenericTypeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference
                    > (m_EOperation__eGenericExceptions), "eGenericExceptions",
            true, false, false, "", true, false, true, true, 0, -1, true,
            false);
    m_EOperation__eGenericExceptions->setContainment(true);
    m_EOperation__eGenericExceptions->setResolveProxies(false);
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EOperationEClass, nullptr,
                "getOperationID", 0, 1, true, true);
        _op->setEType(m_EIntEDataType);
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EOperationEClass, nullptr,
                "isOverrideOf", 0, 1, true, true);
        _op->setEType(m_EBooleanEDataType);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "someOperation", 0,
                    1, true, true);
            _pa->setEType(m_EOperationEClass);
        }
    }
    // EPackage
    m_EPackageEClass->setName("EPackage");
    m_EPackageEClass->setAbstract(false);
    m_EPackageEClass->setInterface(false);
    m_EPackage__nsURI->setEType(m_EStringEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EPackage__nsURI), "nsURI",
            true, false, false, "", false, false, true, true, 0, 1, false,
            false);
    m_EPackage__nsURI->setID(false);
    m_EPackage__nsPrefix->setEType(m_EStringEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EPackage__nsPrefix),
            "nsPrefix", true, false, false, "", false, false, true, true, 0, 1,
            false, false);
    m_EPackage__nsPrefix->setID(false);
    m_EPackage__eFactoryInstance->setEType(m_EFactoryEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EPackage__eFactoryInstance),
            "eFactoryInstance", true, false, true, "", false, false, true, true,
            1, 1, false, true);
    m_EPackage__eFactoryInstance->setContainment(false);
    m_EPackage__eFactoryInstance->setResolveProxies(false);
    m_EPackage__eFactoryInstance->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EFactoryEClass->getEStructuralFeatures()[0]));
    m_EPackage__eClassifiers->setEType(m_EClassifierEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EPackage__eClassifiers),
            "eClassifiers", true, false, false, "", false, false, true, true, 0,
            -1, true, false);
    m_EPackage__eClassifiers->setContainment(true);
    m_EPackage__eClassifiers->setResolveProxies(true);
    m_EPackage__eClassifiers->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EClassifierEClass->getEStructuralFeatures()[4]));
    m_EPackage__eSubpackages->setEType(m_EPackageEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EPackage__eSubpackages),
            "eSubpackages", true, false, false, "", false, false, true, true, 0,
            -1, true, false);
    m_EPackage__eSubpackages->setContainment(true);
    m_EPackage__eSubpackages->setResolveProxies(true);
    m_EPackage__eSubpackages->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EPackageEClass->getEStructuralFeatures()[5]));
    m_EPackage__eSuperPackage->setEType(m_EPackageEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EPackage__eSuperPackage),
            "eSuperPackage", false, false, true, "", false, false, true, true,
            0, 1, false, false);
    m_EPackage__eSuperPackage->setContainment(false);
    m_EPackage__eSuperPackage->setResolveProxies(true);
    m_EPackage__eSuperPackage->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EPackageEClass->getEStructuralFeatures()[4]));
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EPackageEClass, nullptr,
                "getEClassifier", 0, 1, true, true);
        _op->setEType(m_EClassifierEClass);
        {
            ::ecore::EParameter_ptr _pa = addEParameter(_op, "name", 0, 1, true,
                    true);
            _pa->setEType(m_EStringEDataType);
        }
    }
    // EParameter
    m_EParameterEClass->setName("EParameter");
    m_EParameterEClass->setAbstract(false);
    m_EParameterEClass->setInterface(false);
    m_EParameter__eOperation->setEType(m_EOperationEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EParameter__eOperation),
            "eOperation", false, false, true, "", false, false, true, true, 0,
            1, false, false);
    m_EParameter__eOperation->setContainment(false);
    m_EParameter__eOperation->setResolveProxies(false);
    m_EParameter__eOperation->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EOperationEClass->getEStructuralFeatures()[2]));
    // EReference
    m_EReferenceEClass->setName("EReference");
    m_EReferenceEClass->setAbstract(false);
    m_EReferenceEClass->setInterface(false);
    m_EReference__containment->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EReference__containment),
            "containment", true, false, false, "", false, false, true, true, 0,
            1, false, false);
    m_EReference__containment->setID(false);
    m_EReference__container->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EReference__container),
            "container", false, true, true, "", false, true, true, true, 0, 1,
            false, false);
    m_EReference__container->setID(false);
    m_EReference__resolveProxies->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EReference__resolveProxies),
            "resolveProxies", true, false, false, "true", false, false, true,
            true, 0, 1, false, false);
    m_EReference__resolveProxies->setID(false);
    m_EReference__eOpposite->setEType(m_EReferenceEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EReference__eOpposite),
            "eOpposite", true, false, false, "", false, false, true, true, 0, 1,
            false, false);
    m_EReference__eOpposite->setContainment(false);
    m_EReference__eOpposite->setResolveProxies(true);
    m_EReference__eReferenceType->setEType(m_EClassEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EReference__eReferenceType),
            "eReferenceType", false, true, true, "", false, true, true, true, 1,
            1, false, true);
    m_EReference__eReferenceType->setContainment(false);
    m_EReference__eReferenceType->setResolveProxies(true);
    m_EReference__eKeys->setEType(m_EAttributeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EReference__eKeys), "eKeys",
            true, false, false, "", false, false, true, true, 0, -1, true,
            false);
    m_EReference__eKeys->setContainment(false);
    m_EReference__eKeys->setResolveProxies(true);
    // EStructuralFeature
    m_EStructuralFeatureEClass->setName("EStructuralFeature");
    m_EStructuralFeatureEClass->setAbstract(true);
    m_EStructuralFeatureEClass->setInterface(false);
    m_EStructuralFeature__changeable->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute
                    > (m_EStructuralFeature__changeable), "changeable", true,
            false, false, "true", false, false, true, true, 0, 1, false, false);
    m_EStructuralFeature__changeable->setID(false);
    m_EStructuralFeature__volatile->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute
                    > (m_EStructuralFeature__volatile), "volatile", true, false,
            false, "", false, false, true, true, 0, 1, false, false);
    m_EStructuralFeature__volatile->setID(false);
    m_EStructuralFeature__transient->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute
                    > (m_EStructuralFeature__transient), "transient", true,
            false, false, "", false, false, true, true, 0, 1, false, false);
    m_EStructuralFeature__transient->setID(false);
    m_EStructuralFeature__defaultValueLiteral->setEType(m_EStringEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute
                    > (m_EStructuralFeature__defaultValueLiteral),
            "defaultValueLiteral", true, false, false, "", false, false, true,
            true, 0, 1, false, false);
    m_EStructuralFeature__defaultValueLiteral->setID(false);
    m_EStructuralFeature__defaultValue->setEType(m_EJavaObjectEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute
                    > (m_EStructuralFeature__defaultValue), "defaultValue",
            false, true, true, "", false, true, true, true, 0, 1, false, false);
    m_EStructuralFeature__defaultValue->setID(false);
    m_EStructuralFeature__unsettable->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute
                    > (m_EStructuralFeature__unsettable), "unsettable", true,
            false, false, "", false, false, true, true, 0, 1, false, false);
    m_EStructuralFeature__unsettable->setID(false);
    m_EStructuralFeature__derived->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_EStructuralFeature__derived),
            "derived", true, false, false, "", false, false, true, true, 0, 1,
            false, false);
    m_EStructuralFeature__derived->setID(false);
    m_EStructuralFeature__eContainingClass->setEType(m_EClassEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference
                    > (m_EStructuralFeature__eContainingClass),
            "eContainingClass", false, false, true, "", false, false, true,
            true, 0, 1, false, false);
    m_EStructuralFeature__eContainingClass->setContainment(false);
    m_EStructuralFeature__eContainingClass->setResolveProxies(false);
    m_EStructuralFeature__eContainingClass->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_EClassEClass->getEStructuralFeatures()[13]));
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EStructuralFeatureEClass,
                nullptr, "getFeatureID", 0, 1, true, true);
        _op->setEType(m_EIntEDataType);
    }
    {
        ::ecore::EOperation_ptr _op = addEOperation(m_EStructuralFeatureEClass,
                nullptr, "getContainerClass", 0, 1, true, true);
        _op->setEType(m_EJavaClassEDataType);
        {
            ::ecore::EGenericType_ptr _g0 = ::ecore::Ptr < ::ecore::EGenericType
                    > (new ::ecore::EGenericType);
            _g0->setEClassifier(m_EJavaClassEDataType);
            ::ecore::EGenericType_ptr _g1 = ::ecore::Ptr < ::ecore::EGenericType
                    > (new ::ecore::EGenericType);
            _g0->getETypeArguments().push_back(_g1);
            _op->setEGenericType(_g0);
        }
    }
    // ETypedElement
    m_ETypedElementEClass->setName("ETypedElement");
    m_ETypedElementEClass->setAbstract(true);
    m_ETypedElementEClass->setInterface(false);
    m_ETypedElement__ordered->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ETypedElement__ordered),
            "ordered", true, false, false, "true", false, false, true, true, 0,
            1, false, false);
    m_ETypedElement__ordered->setID(false);
    m_ETypedElement__unique->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ETypedElement__unique),
            "unique", true, false, false, "true", false, false, true, true, 0,
            1, false, false);
    m_ETypedElement__unique->setID(false);
    m_ETypedElement__lowerBound->setEType(m_EIntEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ETypedElement__lowerBound),
            "lowerBound", true, false, false, "", false, false, true, true, 0,
            1, false, false);
    m_ETypedElement__lowerBound->setID(false);
    m_ETypedElement__upperBound->setEType(m_EIntEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ETypedElement__upperBound),
            "upperBound", true, false, false, "1", false, false, true, true, 0,
            1, false, false);
    m_ETypedElement__upperBound->setID(false);
    m_ETypedElement__many->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ETypedElement__many), "many",
            false, true, true, "", false, true, true, true, 0, 1, false, false);
    m_ETypedElement__many->setID(false);
    m_ETypedElement__required->setEType(m_EBooleanEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute > (m_ETypedElement__required),
            "required", false, true, true, "", false, true, true, true, 0, 1,
            false, false);
    m_ETypedElement__required->setID(false);
    m_ETypedElement__eType->setEType(m_EClassifierEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_ETypedElement__eType),
            "eType", true, true, false, "", true, false, true, true, 0, 1,
            false, false);
    m_ETypedElement__eType->setContainment(false);
    m_ETypedElement__eType->setResolveProxies(true);
    m_ETypedElement__eGenericType->setEType(m_EGenericTypeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_ETypedElement__eGenericType),
            "eGenericType", true, true, false, "", true, false, true, true, 0,
            1, false, false);
    m_ETypedElement__eGenericType->setContainment(true);
    m_ETypedElement__eGenericType->setResolveProxies(false);
    // EStringToStringMapEntry
    m_EStringToStringMapEntryEClass->setName("EStringToStringMapEntry");
    m_EStringToStringMapEntryEClass->setAbstract(false);
    m_EStringToStringMapEntryEClass->setInterface(false);
    m_EStringToStringMapEntry__key->setEType(m_EStringEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute
                    > (m_EStringToStringMapEntry__key), "key", true, false,
            false, "", false, false, true, true, 0, 1, false, false);
    m_EStringToStringMapEntry__key->setID(false);
    m_EStringToStringMapEntry__value->setEType(m_EStringEDataType);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EAttribute
                    > (m_EStringToStringMapEntry__value), "value", true, false,
            false, "", false, false, true, true, 0, 1, false, false);
    m_EStringToStringMapEntry__value->setID(false);
    // EGenericType
    m_EGenericTypeEClass->setName("EGenericType");
    m_EGenericTypeEClass->setAbstract(false);
    m_EGenericTypeEClass->setInterface(false);
    m_EGenericType__eUpperBound->setEType(m_EGenericTypeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EGenericType__eUpperBound),
            "eUpperBound", true, false, false, "", false, false, true, true, 0,
            1, false, false);
    m_EGenericType__eUpperBound->setContainment(true);
    m_EGenericType__eUpperBound->setResolveProxies(false);
    m_EGenericType__eTypeArguments->setEType(m_EGenericTypeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference
                    > (m_EGenericType__eTypeArguments), "eTypeArguments", true,
            false, false, "", false, false, true, true, 0, -1, true, false);
    m_EGenericType__eTypeArguments->setContainment(true);
    m_EGenericType__eTypeArguments->setResolveProxies(false);
    m_EGenericType__eRawType->setEType(m_EClassifierEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EGenericType__eRawType),
            "eRawType", false, false, true, "", false, true, true, true, 1, 1,
            false, true);
    m_EGenericType__eRawType->setContainment(false);
    m_EGenericType__eRawType->setResolveProxies(true);
    m_EGenericType__eLowerBound->setEType(m_EGenericTypeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EGenericType__eLowerBound),
            "eLowerBound", true, false, false, "", false, false, true, true, 0,
            1, false, false);
    m_EGenericType__eLowerBound->setContainment(true);
    m_EGenericType__eLowerBound->setResolveProxies(false);
    m_EGenericType__eTypeParameter->setEType(m_ETypeParameterEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference
                    > (m_EGenericType__eTypeParameter), "eTypeParameter", true,
            false, false, "", false, false, true, true, 0, 1, false, false);
    m_EGenericType__eTypeParameter->setContainment(false);
    m_EGenericType__eTypeParameter->setResolveProxies(false);
    m_EGenericType__eClassifier->setEType(m_EClassifierEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_EGenericType__eClassifier),
            "eClassifier", true, false, false, "", false, false, true, true, 0,
            1, false, false);
    m_EGenericType__eClassifier->setContainment(false);
    m_EGenericType__eClassifier->setResolveProxies(true);
    // ETypeParameter
    m_ETypeParameterEClass->setName("ETypeParameter");
    m_ETypeParameterEClass->setAbstract(false);
    m_ETypeParameterEClass->setInterface(false);
    m_ETypeParameter__eBounds->setEType(m_EGenericTypeEClass);
    initEStructuralFeature(
            ::ecore::as < ::ecore::EReference > (m_ETypeParameter__eBounds),
            "eBounds", true, false, false, "", false, false, true, true, 0, -1,
            true, false);
    m_ETypeParameter__eBounds->setContainment(true);
    m_ETypeParameter__eBounds->setResolveProxies(false);

    // TODO: Initialize data types

    // EBigDecimal
    m_EBigDecimalEDataType->setName("EBigDecimal");
    m_EBigDecimalEDataType->setSerializable(true);

    // EBigInteger
    m_EBigIntegerEDataType->setName("EBigInteger");
    m_EBigIntegerEDataType->setSerializable(true);

    // EBoolean
    m_EBooleanEDataType->setName("EBoolean");
    m_EBooleanEDataType->setSerializable(true);

    // EBooleanObject
    m_EBooleanObjectEDataType->setName("EBooleanObject");
    m_EBooleanObjectEDataType->setSerializable(true);

    // EByte
    m_EByteEDataType->setName("EByte");
    m_EByteEDataType->setSerializable(true);

    // EByteArray
    m_EByteArrayEDataType->setName("EByteArray");
    m_EByteArrayEDataType->setSerializable(true);

    // EByteObject
    m_EByteObjectEDataType->setName("EByteObject");
    m_EByteObjectEDataType->setSerializable(true);

    // EChar
    m_ECharEDataType->setName("EChar");
    m_ECharEDataType->setSerializable(true);

    // ECharacterObject
    m_ECharacterObjectEDataType->setName("ECharacterObject");
    m_ECharacterObjectEDataType->setSerializable(true);

    // EDate
    m_EDateEDataType->setName("EDate");
    m_EDateEDataType->setSerializable(true);

    // EDiagnosticChain
    m_EDiagnosticChainEDataType->setName("EDiagnosticChain");
    m_EDiagnosticChainEDataType->setSerializable(false);

    // EDouble
    m_EDoubleEDataType->setName("EDouble");
    m_EDoubleEDataType->setSerializable(true);

    // EDoubleObject
    m_EDoubleObjectEDataType->setName("EDoubleObject");
    m_EDoubleObjectEDataType->setSerializable(true);

    // EEList
    m_EEListEDataType->setName("EEList");
    m_EEListEDataType->setSerializable(false);

    // EEnumerator
    m_EEnumeratorEDataType->setName("EEnumerator");
    m_EEnumeratorEDataType->setSerializable(false);

    // EFeatureMap
    m_EFeatureMapEDataType->setName("EFeatureMap");
    m_EFeatureMapEDataType->setSerializable(false);

    // EFeatureMapEntry
    m_EFeatureMapEntryEDataType->setName("EFeatureMapEntry");
    m_EFeatureMapEntryEDataType->setSerializable(false);

    // EFloat
    m_EFloatEDataType->setName("EFloat");
    m_EFloatEDataType->setSerializable(true);

    // EFloatObject
    m_EFloatObjectEDataType->setName("EFloatObject");
    m_EFloatObjectEDataType->setSerializable(true);

    // EInt
    m_EIntEDataType->setName("EInt");
    m_EIntEDataType->setSerializable(true);

    // EIntegerObject
    m_EIntegerObjectEDataType->setName("EIntegerObject");
    m_EIntegerObjectEDataType->setSerializable(true);

    // EJavaClass
    m_EJavaClassEDataType->setName("EJavaClass");
    m_EJavaClassEDataType->setSerializable(true);

    // EJavaObject
    m_EJavaObjectEDataType->setName("EJavaObject");
    m_EJavaObjectEDataType->setSerializable(true);

    // ELong
    m_ELongEDataType->setName("ELong");
    m_ELongEDataType->setSerializable(true);

    // ELongObject
    m_ELongObjectEDataType->setName("ELongObject");
    m_ELongObjectEDataType->setSerializable(true);

    // EMap
    m_EMapEDataType->setName("EMap");
    m_EMapEDataType->setSerializable(false);

    // EResource
    m_EResourceEDataType->setName("EResource");
    m_EResourceEDataType->setSerializable(false);

    // EResourceSet
    m_EResourceSetEDataType->setName("EResourceSet");
    m_EResourceSetEDataType->setSerializable(false);

    // EShort
    m_EShortEDataType->setName("EShort");
    m_EShortEDataType->setSerializable(true);

    // EShortObject
    m_EShortObjectEDataType->setName("EShortObject");
    m_EShortObjectEDataType->setSerializable(true);

    // EString
    m_EStringEDataType->setName("EString");
    m_EStringEDataType->setSerializable(true);

    // ETreeIterator
    m_ETreeIteratorEDataType->setName("ETreeIterator");
    m_ETreeIteratorEDataType->setSerializable(false);

    // EInvocationTargetException
    m_EInvocationTargetExceptionEDataType->setName(
            "EInvocationTargetException");
    m_EInvocationTargetExceptionEDataType->setSerializable(false);

    _initialize();
}

::ecore::EClass_ptr EcorePackage::getEAttribute()
{
    return m_EAttributeEClass;
}
::ecore::EClass_ptr EcorePackage::getEAnnotation_()
{
    return m_EAnnotationEClass;
}
::ecore::EClass_ptr EcorePackage::getEClass()
{
    return m_EClassEClass;
}
::ecore::EClass_ptr EcorePackage::getEClassifier_()
{
    return m_EClassifierEClass;
}
::ecore::EClass_ptr EcorePackage::getEDataType()
{
    return m_EDataTypeEClass;
}
::ecore::EClass_ptr EcorePackage::getEEnum()
{
    return m_EEnumEClass;
}
::ecore::EClass_ptr EcorePackage::getEEnumLiteral()
{
    return m_EEnumLiteralEClass;
}
::ecore::EClass_ptr EcorePackage::getEFactory()
{
    return m_EFactoryEClass;
}
::ecore::EClass_ptr EcorePackage::getEModelElement()
{
    return m_EModelElementEClass;
}
::ecore::EClass_ptr EcorePackage::getENamedElement()
{
    return m_ENamedElementEClass;
}
::ecore::EClass_ptr EcorePackage::getEObject()
{
    return m_EObjectEClass;
}
::ecore::EClass_ptr EcorePackage::getEOperation()
{
    return m_EOperationEClass;
}
::ecore::EClass_ptr EcorePackage::getEPackage()
{
    return m_EPackageEClass;
}
::ecore::EClass_ptr EcorePackage::getEParameter()
{
    return m_EParameterEClass;
}
::ecore::EClass_ptr EcorePackage::getEReference()
{
    return m_EReferenceEClass;
}
::ecore::EClass_ptr EcorePackage::getEStructuralFeature()
{
    return m_EStructuralFeatureEClass;
}
::ecore::EClass_ptr EcorePackage::getETypedElement()
{
    return m_ETypedElementEClass;
}
::ecore::EDataType_ptr EcorePackage::getEBigDecimal()
{
    return m_EBigDecimalEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEBigInteger()
{
    return m_EBigIntegerEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEBoolean()
{
    return m_EBooleanEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEBooleanObject()
{
    return m_EBooleanObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEByte()
{
    return m_EByteEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEByteArray()
{
    return m_EByteArrayEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEByteObject()
{
    return m_EByteObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEChar()
{
    return m_ECharEDataType;
}
::ecore::EDataType_ptr EcorePackage::getECharacterObject()
{
    return m_ECharacterObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDate()
{
    return m_EDateEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDiagnosticChain()
{
    return m_EDiagnosticChainEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDouble()
{
    return m_EDoubleEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEDoubleObject()
{
    return m_EDoubleObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEEList()
{
    return m_EEListEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEEnumerator()
{
    return m_EEnumeratorEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFeatureMap()
{
    return m_EFeatureMapEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFeatureMapEntry()
{
    return m_EFeatureMapEntryEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFloat()
{
    return m_EFloatEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEFloatObject()
{
    return m_EFloatObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEInt()
{
    return m_EIntEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEIntegerObject()
{
    return m_EIntegerObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEJavaClass()
{
    return m_EJavaClassEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEJavaObject()
{
    return m_EJavaObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getELong()
{
    return m_ELongEDataType;
}
::ecore::EDataType_ptr EcorePackage::getELongObject()
{
    return m_ELongObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEMap()
{
    return m_EMapEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEResource()
{
    return m_EResourceEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEResourceSet()
{
    return m_EResourceSetEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEShort()
{
    return m_EShortEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEShortObject()
{
    return m_EShortObjectEDataType;
}
::ecore::EDataType_ptr EcorePackage::getEString()
{
    return m_EStringEDataType;
}
::ecore::EClass_ptr EcorePackage::getEStringToStringMapEntry()
{
    return m_EStringToStringMapEntryEClass;
}
::ecore::EDataType_ptr EcorePackage::getETreeIterator()
{
    return m_ETreeIteratorEDataType;
}
::ecore::EClass_ptr EcorePackage::getEGenericType()
{
    return m_EGenericTypeEClass;
}
::ecore::EClass_ptr EcorePackage::getETypeParameter()
{
    return m_ETypeParameterEClass;
}
::ecore::EDataType_ptr EcorePackage::getEInvocationTargetException()
{
    return m_EInvocationTargetExceptionEDataType;
}

::ecore::EReference_ptr EcorePackage::getEModelElement__eAnnotations()
{
    return m_EModelElement__eAnnotations;
}
::ecore::EAttribute_ptr EcorePackage::getENamedElement__name()
{
    return m_ENamedElement__name;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__ordered()
{
    return m_ETypedElement__ordered;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__unique()
{
    return m_ETypedElement__unique;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__lowerBound()
{
    return m_ETypedElement__lowerBound;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__upperBound()
{
    return m_ETypedElement__upperBound;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__many()
{
    return m_ETypedElement__many;
}
::ecore::EAttribute_ptr EcorePackage::getETypedElement__required()
{
    return m_ETypedElement__required;
}
::ecore::EReference_ptr EcorePackage::getETypedElement__eType()
{
    return m_ETypedElement__eType;
}
::ecore::EReference_ptr EcorePackage::getETypedElement__eGenericType()
{
    return m_ETypedElement__eGenericType;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__changeable()
{
    return m_EStructuralFeature__changeable;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__volatile()
{
    return m_EStructuralFeature__volatile;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__transient()
{
    return m_EStructuralFeature__transient;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__defaultValueLiteral()
{
    return m_EStructuralFeature__defaultValueLiteral;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__defaultValue()
{
    return m_EStructuralFeature__defaultValue;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__unsettable()
{
    return m_EStructuralFeature__unsettable;
}
::ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__derived()
{
    return m_EStructuralFeature__derived;
}
::ecore::EReference_ptr EcorePackage::getEStructuralFeature__eContainingClass()
{
    return m_EStructuralFeature__eContainingClass;
}
::ecore::EAttribute_ptr EcorePackage::getEAttribute__iD()
{
    return m_EAttribute__iD;
}
::ecore::EReference_ptr EcorePackage::getEAttribute__eAttributeType()
{
    return m_EAttribute__eAttributeType;
}
::ecore::EAttribute_ptr EcorePackage::getEAnnotation__source()
{
    return m_EAnnotation__source;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__details()
{
    return m_EAnnotation__details;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__eModelElement()
{
    return m_EAnnotation__eModelElement;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__contents()
{
    return m_EAnnotation__contents;
}
::ecore::EReference_ptr EcorePackage::getEAnnotation__references()
{
    return m_EAnnotation__references;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceClassName()
{
    return m_EClassifier__instanceClassName;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceClass()
{
    return m_EClassifier__instanceClass;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__defaultValue()
{
    return m_EClassifier__defaultValue;
}
::ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceTypeName()
{
    return m_EClassifier__instanceTypeName;
}
::ecore::EReference_ptr EcorePackage::getEClassifier__ePackage()
{
    return m_EClassifier__ePackage;
}
::ecore::EReference_ptr EcorePackage::getEClassifier__eTypeParameters()
{
    return m_EClassifier__eTypeParameters;
}
::ecore::EAttribute_ptr EcorePackage::getEClass__abstract()
{
    return m_EClass__abstract;
}
::ecore::EAttribute_ptr EcorePackage::getEClass__interface()
{
    return m_EClass__interface;
}
::ecore::EReference_ptr EcorePackage::getEClass__eSuperTypes()
{
    return m_EClass__eSuperTypes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eOperations()
{
    return m_EClass__eOperations;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllAttributes()
{
    return m_EClass__eAllAttributes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllReferences()
{
    return m_EClass__eAllReferences;
}
::ecore::EReference_ptr EcorePackage::getEClass__eReferences()
{
    return m_EClass__eReferences;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAttributes()
{
    return m_EClass__eAttributes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllContainments()
{
    return m_EClass__eAllContainments;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllOperations()
{
    return m_EClass__eAllOperations;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllStructuralFeatures()
{
    return m_EClass__eAllStructuralFeatures;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllSuperTypes()
{
    return m_EClass__eAllSuperTypes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eIDAttribute()
{
    return m_EClass__eIDAttribute;
}
::ecore::EReference_ptr EcorePackage::getEClass__eStructuralFeatures()
{
    return m_EClass__eStructuralFeatures;
}
::ecore::EReference_ptr EcorePackage::getEClass__eGenericSuperTypes()
{
    return m_EClass__eGenericSuperTypes;
}
::ecore::EReference_ptr EcorePackage::getEClass__eAllGenericSuperTypes()
{
    return m_EClass__eAllGenericSuperTypes;
}
::ecore::EAttribute_ptr EcorePackage::getEDataType__serializable()
{
    return m_EDataType__serializable;
}
::ecore::EReference_ptr EcorePackage::getEEnum__eLiterals()
{
    return m_EEnum__eLiterals;
}
::ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__value()
{
    return m_EEnumLiteral__value;
}
::ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__instance()
{
    return m_EEnumLiteral__instance;
}
::ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__literal()
{
    return m_EEnumLiteral__literal;
}
::ecore::EReference_ptr EcorePackage::getEEnumLiteral__eEnum()
{
    return m_EEnumLiteral__eEnum;
}
::ecore::EReference_ptr EcorePackage::getEFactory__ePackage()
{
    return m_EFactory__ePackage;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eContainingClass()
{
    return m_EOperation__eContainingClass;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eTypeParameters()
{
    return m_EOperation__eTypeParameters;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eParameters()
{
    return m_EOperation__eParameters;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eExceptions()
{
    return m_EOperation__eExceptions;
}
::ecore::EReference_ptr EcorePackage::getEOperation__eGenericExceptions()
{
    return m_EOperation__eGenericExceptions;
}
::ecore::EAttribute_ptr EcorePackage::getEPackage__nsURI()
{
    return m_EPackage__nsURI;
}
::ecore::EAttribute_ptr EcorePackage::getEPackage__nsPrefix()
{
    return m_EPackage__nsPrefix;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eFactoryInstance()
{
    return m_EPackage__eFactoryInstance;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eClassifiers()
{
    return m_EPackage__eClassifiers;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eSubpackages()
{
    return m_EPackage__eSubpackages;
}
::ecore::EReference_ptr EcorePackage::getEPackage__eSuperPackage()
{
    return m_EPackage__eSuperPackage;
}
::ecore::EReference_ptr EcorePackage::getEParameter__eOperation()
{
    return m_EParameter__eOperation;
}
::ecore::EAttribute_ptr EcorePackage::getEReference__containment()
{
    return m_EReference__containment;
}
::ecore::EAttribute_ptr EcorePackage::getEReference__container()
{
    return m_EReference__container;
}
::ecore::EAttribute_ptr EcorePackage::getEReference__resolveProxies()
{
    return m_EReference__resolveProxies;
}
::ecore::EReference_ptr EcorePackage::getEReference__eOpposite()
{
    return m_EReference__eOpposite;
}
::ecore::EReference_ptr EcorePackage::getEReference__eReferenceType()
{
    return m_EReference__eReferenceType;
}
::ecore::EReference_ptr EcorePackage::getEReference__eKeys()
{
    return m_EReference__eKeys;
}
::ecore::EAttribute_ptr EcorePackage::getEStringToStringMapEntry__key()
{
    return m_EStringToStringMapEntry__key;
}
::ecore::EAttribute_ptr EcorePackage::getEStringToStringMapEntry__value()
{
    return m_EStringToStringMapEntry__value;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eUpperBound()
{
    return m_EGenericType__eUpperBound;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eTypeArguments()
{
    return m_EGenericType__eTypeArguments;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eRawType()
{
    return m_EGenericType__eRawType;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eLowerBound()
{
    return m_EGenericType__eLowerBound;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eTypeParameter()
{
    return m_EGenericType__eTypeParameter;
}
::ecore::EReference_ptr EcorePackage::getEGenericType__eClassifier()
{
    return m_EGenericType__eClassifier;
}
::ecore::EReference_ptr EcorePackage::getETypeParameter__eBounds()
{
    return m_ETypeParameter__eBounds;
}

