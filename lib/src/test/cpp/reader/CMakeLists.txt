# --------------------------------------------------------------
# unit testing module for 'boost-config-file-reader-lib' library
# --------------------------------------------------------------

add_executable (configreader-test
	main.cpp
	configreaderTest.cpp)

target_link_libraries (configreader-test
	boost-config-file-reader-lib
    libgtest
    libgmock
)

add_test (NAME configreader-test
          COMMAND configreader-test)
