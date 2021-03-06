// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/AbstractStructureElement.cpp
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

#include "AbstractStructureElement.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>
#include <kdm/structure/AbstractStructureRelationship.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/structure/StructurePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractStructureElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::structure;

// Default constructor
AbstractStructureElement::AbstractStructureElement()
{

    m_aggregated.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::core::AggregatedRelationship_ptr, -1, true, false >(
                    this,
                    ::kdm::structure::StructurePackage::_instance()->getAbstractStructureElement__aggregated()));
    m_implementation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::core::KDMEntity_ptr, -1, false, false >(this,
                    ::kdm::structure::StructurePackage::_instance()->getAbstractStructureElement__implementation()));
    m_structureElement.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::structure::AbstractStructureElement_ptr, -1, true,
                    false >(this,
                    ::kdm::structure::StructurePackage::_instance()->getAbstractStructureElement__structureElement()));
    m_structureRelationship.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::kdm::structure::AbstractStructureRelationship_ptr, -1,
                    true, false >(this,
                    ::kdm::structure::StructurePackage::_instance()->getAbstractStructureElement__structureRelationship()));

    /*PROTECTED REGION ID(AbstractStructureElementImpl__AbstractStructureElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractStructureElement::~AbstractStructureElement()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::kdm::core::AggregatedRelationship_ptr >& AbstractStructureElement::getAggregated() const
{
    return *m_aggregated;
}

::ecorecpp::mapping::EList< ::kdm::core::AggregatedRelationship_ptr >& AbstractStructureElement::getAggregated()
{
    return *m_aggregated;
}

const ::ecorecpp::mapping::EList< ::kdm::core::KDMEntity_ptr >& AbstractStructureElement::getImplementation() const
{
    return *m_implementation;
}

::ecorecpp::mapping::EList< ::kdm::core::KDMEntity_ptr >& AbstractStructureElement::getImplementation()
{
    return *m_implementation;
}

const ::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureElement_ptr >& AbstractStructureElement::getStructureElement() const
{
    return *m_structureElement;
}

::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureElement_ptr >& AbstractStructureElement::getStructureElement()
{
    return *m_structureElement;
}

const ::ecorecpp::mapping::EList<
        ::kdm::structure::AbstractStructureRelationship_ptr >& AbstractStructureElement::getStructureRelationship() const
{
    return *m_structureRelationship;
}

::ecorecpp::mapping::EList< ::kdm::structure::AbstractStructureRelationship_ptr >& AbstractStructureElement::getStructureRelationship()
{
    return *m_structureRelationship;
}

