// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * URIConverter.cpp
 * Copyright (C) INCHRON GmbH 2018 <soeren.henning@inchron.com>
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

#include "URIConverter.hpp"

#include <iostream>

#ifdef QT5_SUPPORT
#include <QUrl>
#else
#include <cpprest/uri.h>
#endif

namespace ecorecpp {
namespace resource {

URIConverter::URIConverter()
	: URIConverter(URIHandler::DEFAULT_HANDLERS) {
}

URIConverter::URIConverter(const URIHandler::URIHandlerList& uhl)
	: _handlers(uhl) {
}

URIConverter::~URIConverter() = default;

#ifdef QT5_SUPPORT
std::shared_ptr<std::istream> URIConverter::createInputStream(const QUrl& url) const {
	QUrl normalizedUrl = normalize(url);
	return getURIHandler(normalizedUrl)->createInputStream(normalizedUrl);
}


std::shared_ptr<std::ostream> URIConverter::createOutputStream(const QUrl& url) const {
	QUrl normalizedUrl = normalize(url);
	return getURIHandler(normalizedUrl)->createOutputStream(normalizedUrl);
}

void URIConverter::remove(const QUrl& url) const {
	QUrl normalizedUrl = normalize(url);
	getURIHandler(normalizedUrl)->remove(normalizedUrl);
}

bool URIConverter::exists(const QUrl& url) const {
	QUrl normalizedUrl = normalize(url);
	return getURIHandler(normalizedUrl)->exists(normalizedUrl);
}
#else
std::shared_ptr<std::istream> URIConverter::createInputStream(const web::uri& url) const {
	web::uri normalizedUrl = normalize(url);
	return getURIHandler(normalizedUrl)->createInputStream(normalizedUrl);
}

std::shared_ptr<std::ostream> URIConverter::createOutputStream(const web::uri& url) const {
	web::uri normalizedUrl = normalize(url);
	return getURIHandler(normalizedUrl)->createOutputStream(normalizedUrl);
}

void URIConverter::remove(const web::uri& url) const {
	web::uri normalizedUrl = normalize(url);
	getURIHandler(normalizedUrl)->remove(normalizedUrl);
}

bool URIConverter::exists(const web::uri& url) const {
	web::uri normalizedUrl = normalize(url);
	return getURIHandler(normalizedUrl)->exists(normalizedUrl);
}
#endif

URIConverter::URIMap& URIConverter::getURIMap() {
	return _uriMap;
}

#ifdef QT5_SUPPORT
QUrl URIConverter::normalize(const QUrl& url) const {
	const QUrl trimmedUrl = url.adjusted(QUrl::RemoveQuery | QUrl::RemoveFragment);
	auto it = _uriMap.find(trimmedUrl.toString().toStdString());
	QUrl result = (it != _uriMap.end())
		? QUrl(QString::fromStdString(it->second))
		: trimmedUrl;

	if (result == trimmedUrl)
		return url;

	result.setQuery(url.query());
	result.setFragment(url.fragment());

	return normalize(result);
}

const URIHandler_ptr& URIConverter::getURIHandler(const QUrl& url) const {
	auto it = std::find_if(_handlers.cbegin(), _handlers.cend(),
			[&url] (const URIHandler_ptr& han) { return han->canHandle(url); });

	if (it != _handlers.cend())
		return *it;

	const std::string errorMessage("There is no URIHandler to handle '"
			+ url.toString().toStdString() + "'.");
	throw std::logic_error(errorMessage.c_str());
}
#else
web::uri URIConverter::normalize(const web::uri& url) const {
	// const web::uri trimmedUrl = web::uri::encode_uri(url, web::uri::components::user_info | web::uri::components::host | web::uri::components::path);
	// const web::uri trimmedUrl = url.adjusted(QUrl::RemoveQuery | QUrl::RemoveFragment);
	// FIXME; remove query and fragment then set to trimmedUrl;
	const web::uri trimmedUrl;
	auto it = _uriMap.find(trimmedUrl.to_string());
	web::uri result = (it != _uriMap.end()) ? web::uri(it->second) : trimmedUrl;

	if (result == trimmedUrl)
		return url;
	web::uri_builder uriBuilder = web::uri_builder(result).set_query(url.query()).set_fragment(url.fragment());
	web::uri newResult; // FIXME to_uri() not working = uriBuilder.to_uri();

	return normalize(newResult);
}

const URIHandler_ptr& URIConverter::getURIHandler(const web::uri& url) const {
	auto it = std::find_if(_handlers.cbegin(), _handlers.cend(),
			[&url] (const URIHandler_ptr& han) { return han->canHandle(url); });

	if (it != _handlers.cend())
		return *it;

	const std::string errorMessage("There is no URIHandler to handle '" + url.to_string() + "'.");
	throw std::logic_error(errorMessage.c_str());
}
#endif

URIHandler::URIHandlerList& URIConverter::getURIHandlers() {
	return _handlers;
}

} // resource
} // ecorecpp
