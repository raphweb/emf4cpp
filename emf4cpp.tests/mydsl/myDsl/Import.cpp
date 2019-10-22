// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * myDsl/Import.cpp
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

#include "Import.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "myDsl/MyDslPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Import.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::myDsl;

// Default constructor
Import::Import()
{

    /*PROTECTED REGION ID(ImportImpl__ImportImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Import::~Import()
{
}

// Attributes

::ecore::EString const& Import::getImportURI() const
{
    return m_importURI;
}

void Import::setImportURI(::ecore::EString const& _importURI)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_importURI = m_importURI;
#endif
    m_importURI = _importURI;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::myDsl::MyDslPackage::_instance()->getImport__importURI(),
                _old_importURI,
                m_importURI
        );
        eNotify(&notification);
    }
#endif
}

// References
