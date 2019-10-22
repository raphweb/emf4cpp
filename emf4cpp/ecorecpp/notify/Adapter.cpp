// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecorecpp/notify/Adapter.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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
#include "Adapter.hpp"
#include <ecore/EObject.hpp>

using namespace ::ecorecpp::notify;

Adapter::~Adapter()
{
	if (m_target) {
		auto& adapters = m_target->eAdapters();
		adapters.remove(this);
		if (adapters.size() == 0)
			m_target->eSetDeliver(false);
	}
}

Notifier_ptr Adapter::getTarget()
{
	return m_target;
}

void Adapter::setTarget(Notifier_ptr _notifier)
{
	if (m_target == _notifier)
		return;

	if (m_target) {
		auto& adapters = m_target->eAdapters();
		adapters.remove(this);
		if (adapters.size() == 0)
			m_target->eSetDeliver(false);
	}

	m_target = _notifier;

	if (m_target) {
		m_target->eAdapters().push_back(this);
		m_target->eSetDeliver(true);
	}
}