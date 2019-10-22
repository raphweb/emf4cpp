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

cmake_minimum_required(VERSION 3.5)

set(LIB_MAJOR_VERSION "2")
set(LIB_MINOR_VERSION "0")
set(LIB_PATCH_VERSION "0")
set(LIB_VERSION_STRING "${LIB_MAJOR_VERSION}.${LIB_MINOR_VERSION}.${LIB_PATCH_VERSION}")

if (CMAKE_VERSION VERSION_LESS 3.0)
  PROJECT(emf4cpp CXX C)
  set(PROJECT_VERSION_MAJOR "${LIB_MAJOR_VERSION}")
  set(PROJECT_VERSION_MINOR "${LIB_MINOR_VERSION}")
  set(PROJECT_VERSION_PATCH"${LIB_PATCH_VERSION}")
  set(PROJECT_VERSION "${LIB_VERSION_STRING}")
else()
  #cmake_policy(SET CMP0048 NEW)
  PROJECT("emf4cpp" VERSION "${LIB_VERSION_STRING}" LANGUAGES CXX C)
endif()

# --- System Libraries ---

include(GNUInstallDirs)

FIND_PACKAGE (Boost 1.58 REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

find_package(Qt5Core REQUIRED)
add_definitions(-DQT_NO_VERSION_TAGGING)

add_subdirectory(emf4cpp)
#add_subdirectory(org.csu.emf4cpp.generator)
#add_subdirectory(emf4cpp.tests)

