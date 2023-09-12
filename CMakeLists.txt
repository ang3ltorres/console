cmake_minimum_required(VERSION 3.27)
project(main LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_compile_options(-Wall -pedantic -Wextra)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(main ${SOURCES})
target_include_directories(main PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")

