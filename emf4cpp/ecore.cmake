
#
# ecore.cmake
# Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
# Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
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


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -Wdouble-promotion -fshort-enums")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -DNDEBUG -s")
set(CMAKE_CXX_FLAGS_MINSIZEREL     "${CMAKE_CXX_FLAGS_MINSIZEREL} -Os -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -O2 -g")

include(GNUInstallDirs)

set(ecore_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcorePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcoreFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcorePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcoreFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAttribute.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAttributeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAnnotation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAnnotationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClass.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClassImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClassifier.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClassifierImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EDataType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EDataTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnum.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnumImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnumLiteral.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnumLiteralImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EModelElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EModelElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ENamedElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ENamedElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EOperation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EOperationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EParameter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EParameterImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EReference.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EReferenceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStructuralFeature.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStructuralFeatureImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypedElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypedElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStringToStringMapEntry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStringToStringMapEntryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EGenericType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EGenericTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypeParameter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypeParameterImpl.cpp
)

set(ecore_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/ecore.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcorePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcoreFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAttribute.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAnnotation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClass.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClassifier.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EDataType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnum.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnumLiteral.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EModelElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ENamedElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EOperation.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EParameter.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EReference.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStructuralFeature.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypedElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStringToStringMapEntry.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EGenericType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypeParameter.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcoreFactory.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EcorePackage.hpp DESTINATION include/emf4cpp/ecore)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAttribute.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EAnnotation.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClass.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EClassifier.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EDataType.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnum.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EEnumLiteral.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EFactory.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EModelElement.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ENamedElement.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EObject.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EOperation.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EPackage.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EParameter.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EReference.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStructuralFeature.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypedElement.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EStringToStringMapEntry.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/EGenericType.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/ETypeParameter.hpp DESTINATION include/emf4cpp/ecore)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecore/dllEcore.hpp DESTINATION include/emf4cpp/ecore)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
# include_directories(${CMAKE_CURRENT_SOURCE_DIR} ./include/emf4cpp ./include/emf4cpp)

if(EMF4CPP_IS_NOT_SUBPROJECT)
  # build shared lib if not used as subproject
  add_library(${PROJECT_NAME}-ecore SHARED ${ecore_HEADERS} ${ecore_SOURCES})
  set_target_properties(${PROJECT_NAME}-ecore PROPERTIES COMPILE_FLAGS "-DMAKE_ECORE_DLL" VERSION ${PROJECT_VERSION} SOVERSION ${PROJECT_VERSION_MAJOR})
else()
  # provide static library otherwise
  add_library(${PROJECT_NAME}-ecore STATIC ${ecore_HEADERS} ${ecore_SOURCES})
  set_target_properties(${PROJECT_NAME}-ecore PROPERTIES COMPILE_FLAGS "-fPIC")
endif(EMF4CPP_IS_NOT_SUBPROJECT)

target_include_directories(${PROJECT_NAME}-ecore PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include/emf4cpp>
    )

if(EMF4CPP_USE_QT_5)
  set_target_properties(${PROJECT_NAME}-ecore PROPERTIES COMPILE_DEFINITIONS "EMF4CPP_USE_QT_5=1")
  target_link_libraries(${PROJECT_NAME}-ecore Qt5::Core)
elseif(EMF4CPP_RESOURCE_API AND EMF4CPP_USE_CPPREST)
  set_target_properties(${PROJECT_NAME}-ecore PROPERTIES COMPILE_DEFINITIONS "EMF4CPP_USE_CPPREST=1")
  target_link_libraries(${PROJECT_NAME}-ecore cpprestsdk::cpprest)
endif(EMF4CPP_USE_QT_5)
target_link_libraries(${PROJECT_NAME}-ecore ${Boost_LIBRARIES})

add_library(EMF4CPP::${PROJECT_NAME}-ecore ALIAS ${PROJECT_NAME}-ecore)

install(TARGETS ${PROJECT_NAME}-ecore EXPORT EMF4CPP LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

add_subdirectory(cmake)
