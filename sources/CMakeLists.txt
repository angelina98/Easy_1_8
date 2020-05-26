set(SOURCES
        Read.h
        Read.cpp)
add_library(Read ${SOURCES})
target_include_directories(Read PUBLIC ${SRC_ROOT_DIR})
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})
add_subdirectory(tests)