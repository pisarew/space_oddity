cmake_minimum_required(VERSION 3.22)
project(space_oddity C)

set(CMAKE_C_STANDARD 17)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(space_oddity main.c space_objects.c space_objects.h)
target_link_libraries(space_oddity ${CURSES_LIBRARIES})
