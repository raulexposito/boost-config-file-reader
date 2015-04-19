
cmake_minimum_required(VERSION 2.8)
project(boost-config-file-reader)


# --------------------------------------------------------------
# compiler options
# --------------------------------------------------------------

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
	message(FATAL "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. C++11 support is required")
endif()

add_definitions (-Wall)

# --------------------------------------------------------------
# boost library
# --------------------------------------------------------------

find_package( Boost 1.40 COMPONENTS program_options unit_test_framework REQUIRED )
message("** Boost Include: ${Boost_INCLUDE_DIR}")
message("** Boost Libraries: ${Boost_LIBRARY_DIRS}")
message("** Boost Libraries: ${Boost_LIBRARIES}")


add_subdirectory (src) 
add_subdirectory (test)

