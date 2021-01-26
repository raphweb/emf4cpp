// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EObjectImpl.cpp
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

#include "EObject.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EObjectImpl.cpp) ENABLED START*/
#include <ecorecpp/mapping/FeatureEListImpl.hpp>

using namespace ::ecore;

void EObject::_setEContainer(::ecore::EObject_ptr _eContainer,
        ::ecore::EStructuralFeature_ptr _eContainingFeature)
{
    if (m_eContainer == _eContainer
            && m_eContainingFeature == _eContainingFeature)
        return;

    /* [SUITE3-208] m_eResource is not touched to allow cross resource
     * containment. */

    m_eContainer = _eContainer;
    m_eContainingFeature = _eContainingFeature;
}
#ifdef ECORECPP_RESOURCE_API
#include <ecorecpp/resource/Resource.hpp>
void EObject::_setEResource(::ecorecpp::resource::Resource *res)
{
    if (m_eResource == res)
        return;

    /* [SUITE3-208] m_eContainer is not touched to allow cross resource
     * containment. */

    if (m_eResource)
    {
        auto list = m_eResource->getContents();
        list->remove(_this());
    }

    m_eResource = res;
}

::ecorecpp::resource::Resource* EObject::_getDirectResource()
{
    return m_eResource;
}
#endif // ECORECPP_RESOURCE_API

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>

// Notification API
::ecorecpp::mapping::EList< ::ecorecpp::notify::Adapter_ptr >& EObject::eAdapters()
{
    return *m_eAdapters;
}

void EObject::eNotify( ::ecorecpp::notify::Notification_ptr _notification)
{
    for (auto adapter : *m_eAdapters)
    adapter->notifyChanged(_notification);
}

bool EObject::eNotificationRequired()
{
    return m_eDeliver && m_eAdapters->size() > 0;
}

#endif // ECORECPP_NOTIFICATION_API
/*PROTECTED REGION END*/

using namespace ::ecore;

void EObject::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(EObjectImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

::ecore::EClass_ptr EObject::eClass()
{
    /*PROTECTED REGION ID(EObjectImpl_eClass) ENABLED START*/

    return _eClass();

    /*PROTECTED REGION END*/
}

::ecore::EBoolean EObject::eIsProxy()
{
    /*PROTECTED REGION ID(EObjectImpl_eIsProxy) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EObject::eIsProxy";
    /*PROTECTED REGION END*/
}

::ecore::EResource EObject::eResource()
{
    /*PROTECTED REGION ID(EObjectImpl_eResource) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
#ifdef ECORECPP_RESOURCE_API
    if (m_eResource || !eContainer())
        return m_eResource;

    EObject_ptr current = eContainer();
    size_t count = 0;
    while (current && !current->_getDirectResource() && current->eContainer()
            && current.get() != this // prevent cyclic containments
            && count < 10000000) // last resort
    {
        count++;
        current = current->eContainer();
    }

    return current->_getDirectResource();
#else
    return 0;
#endif // ECORECPP_RESOURCE_API

    /*PROTECTED REGION END*/
}

::ecore::EObject_ptr EObject::eContainer()
{
    /*PROTECTED REGION ID(EObjectImpl_eContainer) ENABLED START*/
    return m_eContainer;
    /*PROTECTED REGION END*/
}

::ecore::EStructuralFeature_ptr EObject::eContainingFeature()
{
    /*PROTECTED REGION ID(EObjectImpl_eContainingFeature) ENABLED START*/

    return m_eContainingFeature;

    /*PROTECTED REGION END*/
}

::ecore::EReference_ptr EObject::eContainmentFeature()
{
    /*PROTECTED REGION ID(EObjectImpl_eContainmentFeature) ENABLED START*/

    return ::ecore::as < EReference > (m_eContainingFeature);

    /*PROTECTED REGION END*/
}

std::shared_ptr< ::ecorecpp::mapping::EList< ::ecore::EObject_ptr > > EObject::eContents()
{
    /*PROTECTED REGION ID(EObjectImpl_eContents) ENABLED START*/
    auto retList = std::make_shared<
            ::ecorecpp::mapping::FeatureEListImpl< ::ecore::EObject_ptr > >();

    ::ecore::EClass_ptr eclass = eClass();
    for (const auto &ref : eclass->getEAllReferences())
    {
        if (ref->isTransient() || !ref->isContainment() || !eIsSet(ref))
        {
            continue;
        }

        ::ecorecpp::mapping::any any = eGet(ref);
        if (ref->getUpperBound() != 1)
        {
            auto children = ecorecpp::mapping::any::any_cast
                    < ::ecorecpp::mapping::EList < ::ecore::EObject_ptr
                    > ::ptr_type > (any);
            retList->insert_all(*children, ref);
        }
        else
        {
            EObject_ptr child = ecorecpp::mapping::any::any_cast < EObject_ptr
                    > (any);
            retList->push_back(child, ref);
        }
    }

    return retList;
    /*PROTECTED REGION END*/
}

::ecorecpp::util::TreeIterator< ::ecore::EObject_ptr > EObject::eAllContents()
{
    /*PROTECTED REGION ID(EObjectImpl_eAllContents) ENABLED START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    return ::ecorecpp::util::TreeIterator < ::ecore::EObject_ptr > (_this());

    /*PROTECTED REGION END*/
}

std::shared_ptr< ::ecorecpp::mapping::EList< ::ecore::EObject_ptr > > EObject::eCrossReferences()
{
    /*PROTECTED REGION ID(EObjectImpl_eCrossReferences) ENABLED START*/
    /*
     * http://download.eclipse.org/modeling/emf/emf/javadoc/2.4.2/org/eclipse/emf/ecore/EObject.html#eCrossReferences()
     *
     * This will be the list of EObjects determined by the contents of the
     * reference features of this object's meta class, excluding containment
     * features and their opposites.
     *
     * Note: The returned EList<> is actually an FeatureEListImpl<>, whose
     * iterator allows access to the feature.
     */
    auto retList = std::make_shared<
            ::ecorecpp::mapping::FeatureEListImpl< ::ecore::EObject_ptr > >();

    ::ecore::EClass_ptr eclass = eClass();
    for (const auto &ref : eclass->getEAllReferences())
    {
        if (ref->isTransient() || ref->isContainment() || !eIsSet(ref))
        {
            continue;
        }

        auto eOpposite = ref->getEOpposite();
        if (eOpposite && eOpposite->isContainment())
        {
            continue;
        }

        ::ecorecpp::mapping::any any = eGet(ref);
        if (ref->getUpperBound() != 1)
        {
            auto children = ecorecpp::mapping::any::any_cast
                    < ::ecorecpp::mapping::EList < ::ecore::EObject_ptr
                    > ::ptr_type > (any);
            retList->insert_all(*children, ref);
        }
        else
        {
            EObject_ptr child = ecorecpp::mapping::any::any_cast < EObject_ptr
                    > (any);
            retList->push_back(child, ref);
        }
    }

    return retList;
    /*PROTECTED REGION END*/
}

::ecore::EJavaObject EObject::eGet(::ecore::EStructuralFeature_ptr _feature)
{
    /*PROTECTED REGION ID(EObjectImpl_eGet_0) ENABLED START*/

    return eGet(_feature->getFeatureID(), false);

    /*PROTECTED REGION END*/
}

::ecore::EJavaObject EObject::eGet(::ecore::EStructuralFeature_ptr _feature,
        ::ecore::EBoolean _resolve)
{
    /*PROTECTED REGION ID(EObjectImpl_eGet_1) ENABLED START*/

    return eGet(_feature->getFeatureID(), _resolve);

    /*PROTECTED REGION END*/
}

void EObject::eSet(::ecore::EStructuralFeature_ptr _feature,
        ::ecore::EJavaObject const &_newValue)
{
    /*PROTECTED REGION ID(EObjectImpl_eSet) ENABLED START*/
    eSet(_feature->getFeatureID(), _newValue);
    /*PROTECTED REGION END*/
}

::ecore::EBoolean EObject::eIsSet(::ecore::EStructuralFeature_ptr _feature)
{
    /*PROTECTED REGION ID(EObjectImpl_eIsSet) ENABLED START*/
    return eIsSet(_feature->getFeatureID());
    /*PROTECTED REGION END*/
}

void EObject::eUnset(::ecore::EStructuralFeature_ptr _feature)
{
    /*PROTECTED REGION ID(EObjectImpl_eUnset) ENABLED START*/
    return eUnset(_feature->getFeatureID());
    /*PROTECTED REGION END*/
}

::ecore::EJavaObject EObject::eInvoke(::ecore::EOperation_ptr _operation,
        std::shared_ptr< ::ecorecpp::mapping::EList< ::ecorecpp::mapping::any > > const &_arguments)
{
    /*PROTECTED REGION ID(EObjectImpl_eInvoke) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: ecore::EObject::eInvoke";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject EObject::eGet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    }
    throw std::runtime_error("EObject::eGet Error. FeatureID:" + _featureID);
}

void EObject::eSet(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    }
    throw std::runtime_error("EObject::eSet Error. FeatureID:" + _featureID);
}

::ecore::EBoolean EObject::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    }
    throw std::runtime_error("EObject::eIsSet Error. FeatureID:" + _featureID);
}

void EObject::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw std::runtime_error("EObject::eUnset Error. FeatureID:" + _featureID);
}

::ecore::EClass_ptr EObject::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEObject();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EObject::_inverseAdd(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EObject::_inverseRemove(::ecore::EInt _featureID,
        [[maybe_unused]] ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

