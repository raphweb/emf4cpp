// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/ETypedElement.hpp
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

#ifndef ECORE_ETYPEDELEMENT_HPP
#define ECORE_ETYPEDELEMENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

#include <ecore/ENamedElement.hpp>

/*PROTECTED REGION ID(ETypedElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL ETypedElement : public virtual ::ecore::ENamedElement
{
public:
    ETypedElement();

    virtual ~ETypedElement();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isOrdered () const;
    virtual void setOrdered (::ecore::EBoolean _ordered);

    virtual ::ecore::EBoolean isUnique () const;
    virtual void setUnique (::ecore::EBoolean _unique);

    virtual ::ecore::EInt getLowerBound () const;
    virtual void setLowerBound (::ecore::EInt _lowerBound);

    virtual ::ecore::EInt getUpperBound () const;
    virtual void setUpperBound (::ecore::EInt _upperBound);

    virtual ::ecore::EBoolean isMany () const;
    virtual void setMany (::ecore::EBoolean _many);

    virtual ::ecore::EBoolean isRequired () const;
    virtual void setRequired (::ecore::EBoolean _required);

    // References
    virtual ::ecore::EClassifier_ptr getEType () const;
    virtual void setEType (::ecore::EClassifier_ptr _eType);

    virtual ::ecore::EGenericType_ptr getEGenericType () const;
    virtual void setEGenericType (::ecore::EGenericType_ptr _eGenericType);

    /*PROTECTED REGION ID(ETypedElement) START*/
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

    /*PROTECTED REGION ID(ETypedElementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ETypedElement_ptr _this()
    {   return ETypedElement_ptr(this);}

private:
    // Attributes

    ::ecore::EBoolean m_ordered;

    ::ecore::EBoolean m_unique;

    ::ecore::EInt m_lowerBound;

    ::ecore::EInt m_upperBound;

    ::ecore::EBoolean m_many;

    ::ecore::EBoolean m_required;

    // References

    ::ecore::EClassifier_ptr m_eType;

    ::ecore::EGenericType_ptr m_eGenericType;

};

}
 // ecore

#endif // ECORE_ETYPEDELEMENT_HPP

