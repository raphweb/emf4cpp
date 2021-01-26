// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EObject.cpp
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
#include <ecore/EClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "ecore/EcorePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EObject.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::ecore;

// Default constructor
EObject::EObject()
{
    m_refCount = 0u;

    /*PROTECTED REGION ID(EObjectImpl__EObjectImpl) ENABLED START*/
    m_eContainer = nullptr;
    m_eContainingFeature = nullptr;
#ifdef ECORECPP_RESOURCE_API
    m_eResource = nullptr;
#endif // ECORECPP_RESOURCE_API
#ifdef ECORECPP_NOTIFICATION_API
    m_eAdapters.reset(
            new ::ecorecpp::mapping::EListImpl< ::ecorecpp::notify::Adapter_ptr >());
    m_eDeliver = false;
#endif // ECORECPP_NOTIFICATION_API
    /*PROTECTED REGION END*/
}

// Copy constructor only for EObject, needed to properly initialize reference counting
EObject::EObject(const EObject&)
{
    m_refCount = 0u;

    /*PROTECTED REGION ID(EObjectImpl__EObjectImplConst) ENABLED START*/
    m_eContainer = nullptr;
    m_eContainingFeature = nullptr;
#ifdef ECORECPP_RESOURCE_API
    m_eResource = nullptr;
#endif
#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
    /*PROTECTED REGION END*/
}

EObject::~EObject()
{
}

// Attributes

// References

