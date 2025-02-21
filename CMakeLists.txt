cmake_minimum_required(VERSION 3.30.0)
project(Tetris VERSION 0.1.0 LANGUAGES C CXX)

include(FetchContent)
FetchContent_Declare(raylib URL https://github.com/raysan5/raylib/archive/refs/tags/5.0.zip DOWNLOAD_EXTRACT_TIMESTAMP TRUE)
FetchContent_MakeAvailable(raylib)

find_package(raylib)

file(GLOB_RECURSE TETRIS_SRC_FILES  CONFIGURE_DEPENDS 
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/*.hpp"
)
add_executable(tetris  ${TETRIS_SRC_FILES})



target_link_libraries(tetris raylib)


