	configure_file(EMF4CPPConfig.cmake.in EMF4CPPConfig.cmake @ONLY)
	
	include(CMakePackageConfigHelpers)
	write_basic_package_version_file(
	    "${CMAKE_CURRENT_BINARY_DIR}/EMF4CPPConfigVersion.cmake"
	    VERSION ${PROJECT_VERSION}
	    COMPATIBILITY SameMajorVersion) # TODO
	
	export(EXPORT EMF4CPP
	    FILE "${CMAKE_CURRENT_BINARY_DIR}/EMF4CPPTargets.cmake"
	    NAMESPACE EMF4CPP::)
	
	install(EXPORT EMF4CPP DESTINATION lib/cmake/EMF4CPP
	    FILE EMF4CPPTargets.cmake
	    NAMESPACE EMF4CPP::)
	
	install(FILES
	    "${CMAKE_CURRENT_BINARY_DIR}/EMF4CPPConfig.cmake"
	    "${CMAKE_CURRENT_BINARY_DIR}/EMF4CPPConfigVersion.cmake"
	    DESTINATION lib/cmake/EMF4CPP)
	