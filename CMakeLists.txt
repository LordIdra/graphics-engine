cmake_minimum_required(VERSION 3.0.0)
project(GraphicsEngine)

set(src_files
        src/main.cpp
        src/window/Window.h
        src/window/Window.cpp
)

set(CMAKE_TOOLCHAIN_FILE "C:\\vcpkg\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")
include("C:\\vcpkg\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")
set(VCPKG_TARGET_TRIPLET "x64-mingw-static")

find_package(glad CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)

add_executable(GraphicsEngine ${src_files})
link_libraries(GraphicsEngine ${src_files})

target_link_libraries (${PROJECT_NAME} PRIVATE glad::glad)
target_link_libraries (${PROJECT_NAME} PRIVATE glfw)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})