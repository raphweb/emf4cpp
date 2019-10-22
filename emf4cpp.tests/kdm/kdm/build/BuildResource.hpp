// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/build/BuildResource.hpp
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

#ifndef KDM_BUILD_BUILDRESOURCE_HPP
#define KDM_BUILD_BUILDRESOURCE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <kdm/dllKdm.hpp>
#include <kdm/build_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/build/AbstractBuildElement.hpp>

#include "BuildPackage.hpp"

/*PROTECTED REGION ID(BuildResource_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace build
    {

    class EXPORT_KDM_DLL BuildResource : public virtual ::kdm::build::AbstractBuildElement
    {
    public:
        BuildResource();

        virtual ~BuildResource();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        virtual const ::ecorecpp::mapping::EList< ::kdm::core::KDMEntity_ptr >& getImplementation () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::core::KDMEntity_ptr >& getImplementation ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildElement_ptr >& getGroupedBuild () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildElement_ptr >& getGroupedBuild ();

        virtual const ::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildElement_ptr >& getBuildElement () const;
        virtual ::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildElement_ptr >& getBuildElement ();

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = BuildPackage::BUILDRESOURCE;

        /*PROTECTED REGION ID(BuildResource) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
        virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
        virtual void eUnset ( ::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass ();
        virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
        virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

        /*PROTECTED REGION ID(BuildResourceImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        BuildResource_ptr _this()
        {   return BuildResource_ptr(this);}

        // Attributes

        // References

        std::shared_ptr<::ecorecpp::mapping::EList< ::kdm::core::KDMEntity_ptr >> m_implementation;

        std::shared_ptr<::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildElement_ptr >> m_groupedBuild;

        std::shared_ptr<::ecorecpp::mapping::EList< ::kdm::build::AbstractBuildElement_ptr >> m_buildElement;

    };

}
 // build
}// kdm

#endif // KDM_BUILD_BUILDRESOURCE_HPP
