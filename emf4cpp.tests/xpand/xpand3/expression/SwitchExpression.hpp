// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/expression/SwitchExpression.hpp
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

#ifndef XPAND3_EXPRESSION_SWITCHEXPRESSION_HPP
#define XPAND3_EXPRESSION_SWITCHEXPRESSION_HPP

#include <xpand3/expression_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <xpand3/dllXpand3.hpp>

#include <ecore_forward.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

/*PROTECTED REGION ID(SwitchExpression_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{
    namespace expression
    {

    class EXPORT_XPAND3_DLL SwitchExpression : public virtual ::xpand3::expression::AbstractExpression
    {
    public:
        SwitchExpression();

        virtual ~SwitchExpression();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        ::xpand3::expression::AbstractExpression_ptr getSwitchExpr ();
        void setSwitchExpr (::xpand3::expression::AbstractExpression_ptr _switchExpr);

        ::xpand3::expression::AbstractExpression_ptr getDefaultExpr ();
        void setDefaultExpr (::xpand3::expression::AbstractExpression_ptr _defaultExpr);

        ::ecorecpp::mapping::EList< ::xpand3::expression::Case >& getCases ();

        /*PROTECTED REGION ID(SwitchExpression) START*/
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

        /*PROTECTED REGION ID(SwitchExpressionImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        // References

        ::xpand3::expression::AbstractExpression_ptr m_switchExpr;

        ::xpand3::expression::AbstractExpression_ptr m_defaultExpr;

        ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::xpand3::expression::Case > > m_cases;

    };

}
 // expression
}// xpand3

#endif // XPAND3_EXPRESSION_SWITCHEXPRESSION_HPP

