cmake_minimum_required(VERSION 3.22)
project(tanks C)

set(CMAKE_C_STANDARD 17)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(tanks main.c)
target_link_libraries(tanks ${CURSES_LIBRARIES})
