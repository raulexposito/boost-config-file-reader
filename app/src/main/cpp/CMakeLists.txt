# --------------------------------------------------------------
# 'boost-config-file-reader-app' definition
# --------------------------------------------------------------

# Set the source files
set(BOOST-CONFIG-FILE-READER-MAIN_SOURCES
    app/main.cpp
)

# Sources to be included into the program
add_executable(boost-config-file-reader-app
    ${BOOST-CONFIG-FILE-READER-MAIN_SOURCES}
)

# Libraries this program depends on
target_link_libraries(boost-config-file-reader-app
    boost-config-file-reader-lib
)
