
cmake_minimum_required(VERSION 2.8)
project(boost-config-file-reader)

add_definitions (
    -std=c++0x
)

find_package( Boost 1.40 COMPONENTS program_options REQUIRED )
message("** Boost Include: ${Boost_INCLUDE_DIR}")
message("** Boost Libraries: ${Boost_LIBRARY_DIRS}")
message("** Boost Libraries: ${Boost_LIBRARIES}")

include_directories( ${Boost_INCLUDE_DIR} )
include_directories( src )
include_directories( src/reader )
link_directories(${Boost_LIBRARY_DIRS})

add_executable( reader 
	src/main.cpp
	src/reader/ConfigReader.cpp)

target_link_libraries( reader ${Boost_LIBRARIES} )
