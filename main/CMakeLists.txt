set(BOOST-CONFIG-FILE-READER-MAIN_SOURCES
    main.cpp
)

add_executable(boost-config-file-reader-main
    ${BOOST-CONFIG-FILE-READER-MAIN_SOURCES}
)

# Specify here the libraries this program depends on
target_link_libraries(boost-config-file-reader-main
    boost-config-file-reader-lib
)
