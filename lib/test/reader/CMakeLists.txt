# --------------------------------------------------------------
# unit testing module for 'boost-config-file-reader-src' library
# --------------------------------------------------------------

add_executable (filereader-test
	main.cpp
	configreaderTest.cpp)


TARGET_LINK_LIBRARIES(filereader-test
	boost-config-file-reader-lib
    libgtest
    libgmock
)

add_test (NAME filereader-test
          COMMAND filereader-test)
