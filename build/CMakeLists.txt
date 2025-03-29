cmake_minimum_required(VERSION 3.10)

project(TUTORIAL VERSION 1.0)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/../src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/../include)
set(LIB_DIR /opt/homebrew/lib)

add_executable(Tutorial ${SRC_DIR}/tutorial.c ${SRC_DIR}/json_handler.c)

target_include_directories(Tutorial PRIVATE ${INCLUDE_DIR}
                                            /opt/homebrew/include)

target_link_directories(Tutorial PRIVATE ${LIB_DIR})
target_link_libraries(Tutorial cJSON curl)
