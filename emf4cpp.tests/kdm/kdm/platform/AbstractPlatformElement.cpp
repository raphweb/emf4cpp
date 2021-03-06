// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/AbstractPlatformElement.cpp
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

#include "AbstractPlatformElement.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/platform/PlatformPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractPlatformElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::platform;

// Default constructor
AbstractPlatformElement::AbstractPlatformElement()
{

    m_source.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::source::SourceRef_ptr, -1, true, false >(this,
                    ::kdm::platform::PlatformPackage::_instance()->getAbstractPlatformElement__source()));
    m_relation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::platform::AbstractPlatformRelationship_ptr, -1, true,
                    false >(this,
                    ::kdm::platform::PlatformPackage::_instance()->getAbstractPlatformElement__relation()));
    m_abstraction.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::action::ActionElement_ptr, -1, true, false >(this,
                    ::kdm::platform::PlatformPackage::_instance()->getAbstractPlatformElement__abstraction()));
    m_implementation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::code::AbstractCodeElement_ptr, -1, false, false >(
                    this,
                    ::kdm::platform::PlatformPackage::_instance()->getAbstractPlatformElement__implementation()));

    /*PROTECTED REGION ID(AbstractPlatformElementImpl__AbstractPlatformElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractPlatformElement::~AbstractPlatformElement()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& AbstractPlatformElement::getSource() const
{
    return *m_source;
}

::ecorecpp::mapping::EList< ::kdm::source::SourceRef_ptr >& AbstractPlatformElement::getSource()
{
    return *m_source;
}

const ::ecorecpp::mapping::EList<
        ::kdm::platform::AbstractPlatformRelationship_ptr >& AbstractPlatformElement::getRelation() const
{
    return *m_relation;
}

::ecorecpp::mapping::EList< ::kdm::platform::AbstractPlatformRelationship_ptr >& AbstractPlatformElement::getRelation()
{
    return *m_relation;
}

const ::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& AbstractPlatformElement::getAbstraction() const
{
    return *m_abstraction;
}

::ecorecpp::mapping::EList< ::kdm::action::ActionElement_ptr >& AbstractPlatformElement::getAbstraction()
{
    return *m_abstraction;
}

const ::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement_ptr >& AbstractPlatformElement::getImplementation() const
{
    return *m_implementation;
}

::ecorecpp::mapping::EList< ::kdm::code::AbstractCodeElement_ptr >& AbstractPlatformElement::getImplementation()
{
    return *m_implementation;
}

