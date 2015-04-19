
include_directories( ${Boost_INCLUDE_DIR} )
include_directories( reader )

link_directories(${Boost_LIBRARY_DIRS})

add_executable( reader 
	main.cpp
	reader/configreader.cpp)

target_link_libraries( reader ${Boost_LIBRARIES} )