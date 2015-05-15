# --------------------------------------------------------------
# 'boost-config-file-reader-src' library
# --------------------------------------------------------------

# Declare the library
add_library (boost-config-file-reader-lib
	reader/configreader.cpp)

include_directories (reader)

# --------------------------------------------------------------
# boost library
# --------------------------------------------------------------

find_package (Boost 1.40 COMPONENTS
	program_options
	REQUIRED)

message ("** Boost ------------------------------------")
message ("**        Include: ${Boost_INCLUDE_DIR}")
message ("** Libraries dirs: ${Boost_LIBRARY_DIRS}")
message ("**      Libraries: ${Boost_LIBRARIES}")
message ("** ------------------------------------------")

# Specify here the include directories exported
# by this library
target_include_directories(boost-config-file-reader-lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
