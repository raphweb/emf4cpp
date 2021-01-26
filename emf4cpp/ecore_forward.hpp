// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore_forward.hpp
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

#ifndef _ECORE_FORWARD_HPP
#define _ECORE_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(ecore_forward) ENABLED START*/
#ifdef ECORECPP_RESOURCE_API
#include <ecorecpp/resource_forward.hpp>
#endif

#ifndef ECORECPP_USE_UNORDERED_MAP
#define ECORECPP_USE_UNORDERED_MAP
#endif
#include <map>
#include <unordered_map>
namespace ecore
{
    typedef ::ecorecpp::mapping::any any;
    typedef std::unordered_map< std::string, std::string > EStringMap;
    typedef std::pair< std::string, std::string > StringPair;
} // ecore
namespace ecorecpp
{
    namespace mapping
    {
        template< >
        struct string_traits< ::ecore::EStringMap > ;
        template< >
        struct string_traits< ::ecore::EStringMap >
        {
            static inline any fromString(const type_definitions::string_t&)
            {
                // TODO
                throw "Not implemented!";
            }

            static inline type_definitions::string_t toString(any const&)
            {
                // TODO
                throw "Not implemented!";
            }
        };
    }
}
/*PROTECTED REGION END*/

// EPackage

namespace ecore
{

    /** The default pointer type used by the generated EMF implementation. */
    template< class T >
    using Ptr = boost::intrusive_ptr<T>;

    /* A helper function to create objects and wrap them in the default pointer type. */
    template< class T, class ... Args >
    Ptr< T > make(Args &&... args)
    {
        return Ptr< T >(new T(args...));
    }

    template< typename T, typename S >
    inline T* as(S *_s)
    {
        return dynamic_cast< T* >(_s);
    }

    template< typename T, typename S >
    inline Ptr< T > as(const Ptr< S > &_s)
    {
        return Ptr< T >(dynamic_cast< T* >(_s.get()));
    }

    template< typename T, typename S >
    inline bool instanceOf(const Ptr< S > &_s)
    {
        return (bool) dynamic_cast< T* >(_s.get());
    }

// EDataType
    /*PROTECTED REGION ID(ecore_EBigDecimal) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef long double EBigDecimal;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EBigInteger) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int64_t EBigInteger;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EBoolean) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef bool EBoolean;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EBooleanObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef bool EBooleanObject;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EByte) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef unsigned char EByte;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EByteArray) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef std::vector< unsigned char > EByteArray;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EByteObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef unsigned char EByteObject;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EChar) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef char16_t EChar;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_ECharacterObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef char16_t ECharacterObject;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EDate) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef ::ecorecpp::mapping::EDate EDate;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EDiagnosticChain) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int EDiagnosticChain;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EDouble) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef double EDouble;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EDoubleObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef double EDoubleObject;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EEnumerator) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int EEnumerator;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EFeatureMap) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int EFeatureMap;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EFeatureMapEntry) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int EFeatureMapEntry;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EFloat) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef float EFloat;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EFloatObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef float EFloatObject;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EInt) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int EInt;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EIntegerObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int EIntegerObject;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EJavaObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef ::ecorecpp::mapping::any EJavaObject;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_ELong) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int64_t ELong;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_ELongObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int64_t ELongObject;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EResource) ENABLED START*/
#ifdef ECORECPP_RESOURCE_API
		typedef ::ecorecpp::resource::Resource* EResource;
	#else
    typedef int EResource;
#endif //ECORECPP_RESOURCE_API
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EResourceSet) ENABLED START*/
#ifdef ECORECPP_RESOURCE_API
		typedef ::ecorecpp::resource::ResourceSet* EResourceSet;
	#else
    typedef int EResourceSet;
#endif
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EShort) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef short EShort;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EShortObject) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef short EShortObject;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EString) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef ::ecorecpp::mapping::type_definitions::string_t EString;
    /*PROTECTED REGION END*/
    /*PROTECTED REGION ID(ecore_EInvocationTargetException) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int EInvocationTargetException;
    /*PROTECTED REGION END*/

// EClass
// EAttribute
    class EAttribute;
    using EAttribute_ptr = ::ecore::Ptr<EAttribute>;

// EAnnotation
    class EAnnotation;
    using EAnnotation_ptr = ::ecore::Ptr<EAnnotation>;

// EClass
    class EClass;
    using EClass_ptr = ::ecore::Ptr<EClass>;

// EClassifier
    class EClassifier;
    using EClassifier_ptr = ::ecore::Ptr<EClassifier>;

// EDataType
    class EDataType;
    using EDataType_ptr = ::ecore::Ptr<EDataType>;

// EEnum
    class EEnum;
    using EEnum_ptr = ::ecore::Ptr<EEnum>;

// EEnumLiteral
    class EEnumLiteral;
    using EEnumLiteral_ptr = ::ecore::Ptr<EEnumLiteral>;

// EFactory
    class EFactory;
    using EFactory_ptr = ::ecore::Ptr<EFactory>;

// EModelElement
    class EModelElement;
    using EModelElement_ptr = ::ecore::Ptr<EModelElement>;

// ENamedElement
    class ENamedElement;
    using ENamedElement_ptr = ::ecore::Ptr<ENamedElement>;

// EObject
    class EObject;
    using EObject_ptr = ::ecore::Ptr<EObject>;

// EOperation
    class EOperation;
    using EOperation_ptr = ::ecore::Ptr<EOperation>;

// EPackage
    class EPackage;
    using EPackage_ptr = ::ecore::Ptr<EPackage>;

// EParameter
    class EParameter;
    using EParameter_ptr = ::ecore::Ptr<EParameter>;

// EReference
    class EReference;
    using EReference_ptr = ::ecore::Ptr<EReference>;

// EStructuralFeature
    class EStructuralFeature;
    using EStructuralFeature_ptr = ::ecore::Ptr<EStructuralFeature>;

// ETypedElement
    class ETypedElement;
    using ETypedElement_ptr = ::ecore::Ptr<ETypedElement>;

// EStringToStringMapEntry
    class EStringToStringMapEntry;
    using EStringToStringMapEntry_ptr = ::ecore::Ptr<EStringToStringMapEntry>;

// EGenericType
    class EGenericType;
    using EGenericType_ptr = ::ecore::Ptr<EGenericType>;

// ETypeParameter
    class ETypeParameter;
    using ETypeParameter_ptr = ::ecore::Ptr<ETypeParameter>;

// EEnum

// Package & Factory
    class EcoreFactory;
    using EcoreFactory_ptr = ::ecore::Ptr<EcoreFactory>;
    class EcorePackage;
    using EcorePackage_ptr = ::ecore::Ptr<EcorePackage>;

} // ecore

#endif // _ECORE_FORWARD_HPP

