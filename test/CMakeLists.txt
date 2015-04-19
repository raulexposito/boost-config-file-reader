
ENABLE_TESTING()

include_directories( ${boost-config-file-reader_SOURCE_DIR}/src
					 ${Boost_INCLUDE_DIR} )

link_directories( ${Boost_LIBRARY_DIRS} )

ADD_EXECUTABLE( unit-tests reader/configreaderTest.cpp )

target_link_libraries( unit-tests 
	${Boost_LIBRARIES} 
	${boost-config-file-reader_LIBRARIES})

ADD_TEST( UnitTests unit-tests)
