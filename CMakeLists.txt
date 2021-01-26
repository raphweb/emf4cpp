#
# CMakeLists.txt
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
#
# EMF4CPP is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published
# by the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# EMF4CPP is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
#

cmake_minimum_required(VERSION 3.7)

if(NOT DEFINED PROJECT_NAME)
  set(EMF4CPP_IS_NOT_SUBPROJECT ON)
endif()

set(LIB_MAJOR_VERSION "2")
set(LIB_MINOR_VERSION "1")
set(LIB_PATCH_VERSION "0")
set(LIB_VERSION_STRING "${LIB_MAJOR_VERSION}.${LIB_MINOR_VERSION}.${LIB_PATCH_VERSION}")

if (CMAKE_VERSION VERSION_LESS 3.0)
  PROJECT(emf4cpp CXX)
  set(PROJECT_VERSION_MAJOR "${LIB_MAJOR_VERSION}")
  set(PROJECT_VERSION_MINOR "${LIB_MINOR_VERSION}")
  set(PROJECT_VERSION_PATCH"${LIB_PATCH_VERSION}")
  set(PROJECT_VERSION "${LIB_VERSION_STRING}")
else()
  #cmake_policy(SET CMP0048 NEW)
  PROJECT("emf4cpp" VERSION "${LIB_VERSION_STRING}" LANGUAGES CXX)
endif()

# --- System Libraries ---

include(GNUInstallDirs)


# provide option for disallow generator and test execution.
option(EMF4CPP_GENERATOR "Build emf4cpp generator" OFF)
option(EMF4CPP_TESTS "Build test programs" OFF)
option(EMF4CPP_NOTIFICATION_API "Enable notification API" OFF)
option(EMF4CPP_RESOURCE_API "Enable resource API" OFF)
option(EMF4CPP_USE_QT_5 "Use QT 5 as a dependency" OFF)

FIND_PACKAGE(Boost 1.65.1 REQUIRED)
if (NOT Boost_FOUND)
  message(FATAL_ERROR "Fatal error: Boost (version >= 1.65.1) required.")
else()
  message(STATUS "Setting up BOOST")
  message(STATUS " Includes - ${Boost_INCLUDE_DIRS}")
  message(STATUS " Library  - ${Boost_LIBRARY_DIRS}")
  include_directories(${Boost_INCLUDE_DIRS})
  link_directories(${Boost_LIBRARY_DIRS})
endif (NOT Boost_FOUND)

# EMF4CPP_RESOURCE_API
if(EMF4CPP_RESOURCE_API)
	# provide option to use QT5 / cpprestsdk as a dependency
	option(EMF4CPP_USE_CPPREST "Use CPPREST SDK as a dependency" OFF)
	add_definitions(-DECORECPP_RESOURCE_API)
else()
	SET(EMF4CPP_USE_CPPREST OFF)
	remove_definitions(-DECORECPP_RESOURCE_API)
endif(EMF4CPP_RESOURCE_API)

#set(cpprestsdk_DIR /usr/lib/${CMAKE_LIBRARY_ARCHITECTURE}/cmake/)
if(EMF4CPP_USE_QT_5)
	find_package(Qt5 COMPONENTS Core REQUIRED)
	add_definitions(-DQT_NO_VERSION_TAGGING)
	add_definitions(-DQT5_SUPPORT)
elseif(EMF4CPP_RESOURCE_API AND EMF4CPP_USE_CPPREST)
	FIND_PACKAGE(cpprestsdk REQUIRED)
else()
	if(EMF4CPP_RESOURCE_API)
		message(FATAL_ERROR "Use QT / CPPRESTSDK")
	endif(EMF4CPP_RESOURCE_API)
endif(EMF4CPP_USE_QT_5)

# ECORECPP NOTIFICATION API
if(EMF4CPP_NOTIFICATION_API)
add_definitions(-DECORECPP_NOTIFICATION_API)
else()
remove_definitions(-DECORECPP_NOTIFICATION_API)
endif(EMF4CPP_NOTIFICATION_API)


add_subdirectory(emf4cpp)

if(EMF4CPP_GENERATOR)
	add_subdirectory(org.csu.emf4cpp.generator)
endif(EMF4CPP_GENERATOR)

if(EMF4CPP_TESTS)
	add_subdirectory(emf4cpp.tests)
endif(EMF4CPP_TESTS)
