cmake_minimum_required(VERSION 3.30.0)
project(Tetris VERSION 0.1.0 LANGUAGES C CXX)

include(FetchContent)
FetchContent_Declare(raylib URL https://github.com/raysan5/raylib/archive/refs/tags/5.0.zip DOWNLOAD_EXTRACT_TIMESTAMP TRUE)
FetchContent_MakeAvailable(raylib)

find_package(raylib)


add_executable(tetris)

target_sources(tetris 
PRIVATE
    src/main.cpp
    src/tetris.cpp
    src/grid.cpp


    src/tetris.h
    src/grid.h

)
target_include_directories(tetris
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/src/)

target_link_libraries(tetris raylib)


