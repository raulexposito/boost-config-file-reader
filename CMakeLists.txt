# --------------------------------------------------------------
# basic definitions for the 'boost-config-file-reader' project
# --------------------------------------------------------------

cmake_minimum_required (VERSION 2.8)
project (boost-config-file-reader)

# --------------------------------------------------------------
# set testing enabled
# --------------------------------------------------------------

enable_testing ()

# --------------------------------------------------------------
# compiler options
# --------------------------------------------------------------

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_definitions (-Wall)

# --------------------------------------------------------------
# child modules
# --------------------------------------------------------------

add_subdirectory (lib)
add_subdirectory (main)
