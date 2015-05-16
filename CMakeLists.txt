# --------------------------------------------------------------
# Basic definitions for the 'boost-config-file-reader' project
# --------------------------------------------------------------

cmake_minimum_required (VERSION 2.8)
project (boost-config-file-reader)

# --------------------------------------------------------------
# Set testing enabled
# --------------------------------------------------------------

enable_testing ()

# --------------------------------------------------------------
# Compiler options
# --------------------------------------------------------------

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_definitions (-Wall)

# --------------------------------------------------------------
# Child modules
# --------------------------------------------------------------

add_subdirectory (lib)
add_subdirectory (app)
