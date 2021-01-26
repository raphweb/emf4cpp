
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -Wdouble-promotion -fshort-enums")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -DNDEBUG -s")
set(CMAKE_CXX_FLAGS_MINSIZEREL     "${CMAKE_CXX_FLAGS_MINSIZEREL} -Os -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -O2 -g")

include(GNUInstallDirs)

set(ecorecpp_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/ItemProvider.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/MetaModelRepository.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/print.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/escape_html.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/handler.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/serializer.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/json/serializer.cpp
	#util
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/EcoreUtil.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/Copier.cpp
	)
# notify
set(ecorecpp_notify_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Adapter.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notification.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notifier.cpp
	)
	# resource
set(ecorecpp_resource_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/Resource.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/ResourceSet.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/URIConverter.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/URIHandler.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/XMLResource.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/XMLHandler.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/XMLSerializer.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/CrossReferencer.cpp
	)

set(ecorecpp_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/json/json_serializer.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/json/serializer.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/any.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/any_traits.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/EList.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/EListImpl.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/FeatureEListImpl.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping_forward.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/list.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/set_traits.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/string_traits.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/type_definitions.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/ItemProvider.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/MetaModelRepository.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/PackageDeleter.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/handler.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/handler-xerces.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/localstr.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser_common.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser-xerces.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/reference_parser.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/simple_xml_parser.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/unresolved_reference.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/externalstr.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/greedy_serializer.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/serializer.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/serializer-xerces.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/debug.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/print.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/escape_html.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/TreeIterator.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/EcoreUtil.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/Copier.hpp
   )
set(ecorecpp_notify_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Adapter.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify_forward.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notification.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notifier.hpp
	)
set(ecorecpp_resource_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource_forward.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/Resource.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/ResourceSet.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/URIConverter.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/URIHandler.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/XMLResource.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/XMLHandler.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/XMLSerializer.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/CrossReferencer.hpp
	)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp.hpp DESTINATION include/emf4cpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/json/json_serializer.hpp DESTINATION include/emf4cpp/ecorecpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/json/serializer.hpp DESTINATION include/emf4cpp/ecorecpp/json)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/any.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/any_traits.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/EDate.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/EList.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/EListImpl.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/FeatureEListImpl.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping_forward.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/list.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/set_traits.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/string_traits.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/type_definitions.hpp DESTINATION include/emf4cpp/ecorecpp/mapping)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/ItemProvider.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/MetaModelRepository.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/PackageDeleter.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/dllEcorecpp.hpp DESTINATION include/emf4cpp/ecorecpp)
if(EMF4CPP_NOTIFICATION_API)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Adapter.hpp DESTINATION include/emf4cpp/ecorecpp/notify)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify_forward.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notification.hpp DESTINATION include/emf4cpp/ecorecpp/notify)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/notify/Notifier.hpp DESTINATION include/emf4cpp/ecorecpp/notify)
endif(EMF4CPP_NOTIFICATION_API)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/handler.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/handler-xerces.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/localstr.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser_common.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/parser-xerces.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/reference_parser.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/simple_xml_parser.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/unresolved_reference.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/externalstr.hpp DESTINATION include/emf4cpp/ecorecpp/serializer)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/greedy_serializer.hpp DESTINATION include/emf4cpp/ecorecpp/serializer)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/serializer.hpp DESTINATION include/emf4cpp/ecorecpp/serializer)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/serializer-xerces.hpp DESTINATION include/emf4cpp/ecorecpp/serializer)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/debug.hpp DESTINATION include/emf4cpp/ecorecpp/util)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/print.hpp DESTINATION include/emf4cpp/ecorecpp/util)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/escape_html.hpp DESTINATION include/emf4cpp/ecorecpp/util)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/TreeIterator.hpp DESTINATION include/emf4cpp/ecorecpp/util)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/EcoreUtil.hpp DESTINATION include/emf4cpp/ecorecpp/util)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/Copier.hpp DESTINATION include/emf4cpp/ecorecpp/util)
if(EMF4CPP_RESOURCE_API)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/parser/XMLHandler.hpp DESTINATION include/emf4cpp/ecorecpp/parser)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource_forward.hpp DESTINATION include/emf4cpp/ecorecpp)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/Resource.hpp DESTINATION include/emf4cpp/ecorecpp/resource)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/ResourceSet.hpp DESTINATION include/emf4cpp/ecorecpp/resource)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/URIConverter.hpp DESTINATION include/emf4cpp/ecorecpp/resource)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/URIHandler.hpp DESTINATION include/emf4cpp/ecorecpp/resource)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/resource/XMLResource.hpp DESTINATION include/emf4cpp/ecorecpp/resource)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/serializer/XMLSerializer.hpp DESTINATION include/emf4cpp/ecorecpp/serializer)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/util/CrossReferencer.hpp DESTINATION include/emf4cpp/ecorecpp/util)
endif(EMF4CPP_RESOURCE_API)

include_directories(../emf4cpp ./ecorecpp)
if(EMF4CPP_USE_QT_5)
set (CMAKE_INCLUDE_CURRENT_DIR ON)
get_target_property(QtCore_location Qt5::Core LOCATION)
include_directories(${Qt5Core_INCLUDE_DIRS})
endif(EMF4CPP_USE_QT_5)

if(EMF4CPP_NOTIFICATION_API)
list(APPEND ecorecpp_HEADERS ${ecorecpp_notify_HEADERS})
list(APPEND ecorecpp_SOURCES ${ecorecpp_notify_SOURCES})
endif(EMF4CPP_NOTIFICATION_API)
if(EMF4CPP_RESOURCE_API)
list(APPEND ecorecpp_HEADERS ${ecorecpp_resource_HEADERS})
list(APPEND ecorecpp_SOURCES ${ecorecpp_resource_SOURCES})
endif(EMF4CPP_RESOURCE_API)

if(EMF4CPP_IS_NOT_SUBPROJECT)
  add_library(emf4cpp-ecorecpp SHARED ${ecorecpp_HEADERS} ${ecorecpp_SOURCES})
  set_target_properties(emf4cpp-ecorecpp PROPERTIES COMPILE_FLAGS "-DMAKE_ECORECPP_DLL" VERSION ${PROJECT_VERSION} SOVERSION ${PROJECT_VERSION_MAJOR})
else()
  add_library(emf4cpp-ecorecpp STATIC ${ecorecpp_HEADERS} ${ecorecpp_SOURCES})
endif(EMF4CPP_IS_NOT_SUBPROJECT)

# Add EDate to emf4cpp-ecore library to not
# have unresolved reference when building windows dlls.
target_sources(emf4cpp-ecore PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/EDate.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/ecorecpp/mapping/EDate.cpp)

target_link_libraries(emf4cpp-ecorecpp emf4cpp-ecore)
if(EMF4CPP_USE_QT_5)
  set_target_properties(emf4cpp-ecorecpp PROPERTIES COMPILE_DEFINITIONS "EMF4CPP_USE_QT_5=1")
  target_link_libraries(emf4cpp-ecorecpp Qt5::Core)
elseif(EMF4CPP_RESOURCE_API AND EMF4CPP_USE_CPPREST)
  set_target_properties(emf4cpp-ecorecpp PROPERTIES COMPILE_DEFINITIONS "EMF4CPP_USE_CPPREST=1")
  target_link_libraries(emf4cpp-ecorecpp cpprestsdk::cpprest)
endif(EMF4CPP_USE_QT_5)

target_include_directories(emf4cpp-ecorecpp PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include/emf4cpp>
    )

add_library(EMF4CPP::${PROJECT_NAME}-ecorecpp ALIAS ${PROJECT_NAME}-ecorecpp)

install(TARGETS emf4cpp-ecorecpp EXPORT EMF4CPP LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
