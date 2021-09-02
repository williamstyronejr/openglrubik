cmake_minimum_required(VERSION 3.10)
project(rubikcube)

set(CMAKE_CXX_STANDARD 17)

add_executable(main ${PROJECT_SOURCE_DIR}/src/main.cpp)

# OpenGL
find_package(OpenGL REQUIRED)
target_link_libraries(main OpenGL::GL)
include_directories(${OPENGL_INCLUDE_DIRS})

# GLFW
add_subdirectory(vendor/glfw)
include_directories(vendor/glfw/include)
target_link_libraries(main glfw)


if (APPLE)
   target_link_libraries(main "-framework OpenGL")
endif() 