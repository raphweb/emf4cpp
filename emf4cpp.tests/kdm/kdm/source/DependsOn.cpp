// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/DependsOn.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
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

#include "DependsOn.hpp"
#include <kdm/source/AbstractInventoryRelationship.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/source/SourcePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::kdm::source;

// Default constructor
DependsOn::DependsOn() :
        m_to(0), m_from(0)
{

    /*PROTECTED REGION ID(DependsOnImpl__DependsOnImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

DependsOn::~DependsOn()
{
}

/*PROTECTED REGION ID(DependsOn.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::kdm::source::AbstractInventoryElement_ptr DependsOn::getTo()
{
    return m_to;
}

void DependsOn::setTo(::kdm::source::AbstractInventoryElement_ptr _to)
{
    ::kdm::source::AbstractInventoryElement_ptr _old_to = m_to;

    m_to = _to;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::source::SourcePackage::_instance()->getDependsOn__to(),
                _old_to,
                m_to
        );
        eNotify(&notification);
    }
#endif

}

::kdm::source::AbstractInventoryElement_ptr DependsOn::getFrom()
{
    return m_from;
}

void DependsOn::setFrom(::kdm::source::AbstractInventoryElement_ptr _from)
{
    ::kdm::source::AbstractInventoryElement_ptr _old_from = m_from;

    m_from = _from;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::kdm::source::SourcePackage::_instance()->getDependsOn__from(),
                _old_from,
                m_from
        );
        eNotify(&notification);
    }
#endif

}

