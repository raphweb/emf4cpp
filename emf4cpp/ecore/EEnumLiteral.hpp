// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EEnumLiteral.hpp
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

#ifndef ECORE_EENUMLITERAL_HPP
#define ECORE_EENUMLITERAL_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

#include <ecore/ENamedElement.hpp>

/*PROTECTED REGION ID(EEnumLiteral_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EEnumLiteral : public virtual ::ecore::ENamedElement
{
public:
    EEnumLiteral();

    virtual ~EEnumLiteral();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getValue () const;
    virtual void setValue (::ecore::EInt _value);

    virtual ::ecore::EEnumerator getInstance () const;
    virtual void setInstance (::ecore::EEnumerator _instance);

    virtual ::ecore::EString const& getLiteral () const;
    virtual void setLiteral (::ecore::EString const& _literal);

    // References
    virtual ::ecore::EEnum_ptr getEEnum () const;
    virtual void setEEnum (::ecore::EEnum_ptr _eEnum);
    virtual ::ecore::EEnum_ptr basicgetEEnum ();
    virtual void basicsetEEnum (::ecore::EEnum_ptr _eEnum);

    /*PROTECTED REGION ID(EEnumLiteral) START*/
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

    /*PROTECTED REGION ID(EEnumLiteralImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EEnumLiteral_ptr _this()
    {   return EEnumLiteral_ptr(this);}

private:
    // Attributes

    ::ecore::EInt m_value;

    ::ecore::EEnumerator m_instance;

    ::ecore::EString m_literal;

    // References

    ::ecore::EEnum_ptr m_eEnum;

};

}
 // ecore

#endif // ECORE_EENUMLITERAL_HPP

