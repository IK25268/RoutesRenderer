cmake_minimum_required(VERSION 3.28)

project(RoutesRenderer)

set(CMAKE_C_STANDARD 23)

set(SDL2_DIR F:/Prog/VS/libs/SDL2-2.30.6/x86_64-w64-mingw32/lib/cmake/SDL2)
set(SDL2_image_DIR F:/Prog/VS/libs/SDL2_image-2.8.2/x86_64-w64-mingw32/lib/cmake/SDL2_image)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output)

add_subdirectory(src)
