# --------------------------------------------------------------
# unit testing module for 'boost-config-file-reader-src' library
# --------------------------------------------------------------

enable_testing ()

include_directories (${boost-config-file-reader_SOURCE_DIR}/src)
include_directories (${Boost_INCLUDE_DIR})

link_directories (${Boost_LIBRARY_DIRS})

add_executable (unit-tests
	reader/configreaderTest.cpp)

target_link_libraries (unit-tests
	boost-config-file-reader-src
	${Boost_LIBRARIES}
	${boost-config-file-reader_LIBRARIES})

add_test (UnitTests
	unit-tests)
