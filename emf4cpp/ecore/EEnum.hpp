// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EEnum.hpp
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

#ifndef ECORE_EENUM_HPP
#define ECORE_EENUM_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

#include <ecore/EDataType.hpp>

/*PROTECTED REGION ID(EEnum_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EEnum : public virtual ::ecore::EDataType
{
public:
    EEnum();

    virtual ~EEnum();

    virtual void _initialize();

    // Operations

    virtual ::ecore::EEnumLiteral_ptr getEEnumLiteral ( ::ecore::EString const& _name);

    virtual ::ecore::EEnumLiteral_ptr getEEnumLiteral ( ::ecore::EInt _value);

    virtual ::ecore::EEnumLiteral_ptr getEEnumLiteralByLiteral ( ::ecore::EString const& _literal);

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::ecore::EEnumLiteral_ptr >& getELiterals () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EEnumLiteral_ptr >& getELiterals ();

    /*PROTECTED REGION ID(EEnum) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve) override;
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID) override;
    virtual void eUnset ( ::ecore::EInt _featureID) override;
    virtual ::ecore::EClass_ptr _eClass () override;
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue) override;

    /*PROTECTED REGION ID(EEnumImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EEnum_ptr _this()
    {   return EEnum_ptr(this);}

private:
    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EEnumLiteral_ptr >> m_eLiterals;

};

}
 // ecore

#endif // ECORE_EENUM_HPP

