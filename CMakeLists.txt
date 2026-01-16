cmake_minimum_required(VERSION 3.10)
project(OpenGLDemo)

set(CMAKE_CXX_STANDARD 17)

# 查找OpenGL
find_package(OpenGL REQUIRED)

# GLFW
add_subdirectory(external/glfw)
include_directories(external/glfw/include)

# GLAD
add_library(glad external/glad/src/glad.c)
target_include_directories(glad PUBLIC external/glad/include)

# GLM
include_directories(external/glm)

add_executable(OpenGLDemo main.cpp)

target_link_libraries(OpenGLDemo PRIVATE glfw glad ${OPENGL_gl_LIBRARY})
