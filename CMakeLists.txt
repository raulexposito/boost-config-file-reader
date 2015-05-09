# --------------------------------------------------------------
# 'boost-config-file-reader' project
# --------------------------------------------------------------

cmake_minimum_required (VERSION 2.8)
project (boost-config-file-reader)

# --------------------------------------------------------------
# compiler options
# --------------------------------------------------------------

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_definitions (-Wall)

# --------------------------------------------------------------
# boost library
# --------------------------------------------------------------

find_package (Boost 1.40 COMPONENTS
	program_options
	unit_test_framework
	REQUIRED)

message ("** Boost ------------------------------------")
message ("**        Include: ${Boost_INCLUDE_DIR}")
message ("** Libraries dirs: ${Boost_LIBRARY_DIRS}")
message ("**      Libraries: ${Boost_LIBRARIES}")
message ("** ------------------------------------------")

# --------------------------------------------------------------
# child modules
# --------------------------------------------------------------

add_subdirectory (src) 
add_subdirectory (test)
