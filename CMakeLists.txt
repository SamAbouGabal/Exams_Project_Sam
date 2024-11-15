cmake_minimum_required(VERSION 3.10)
project(Exams_Project_Sam)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the main source file
add_executable(Exams_Project_Sam Main.cpp)

# Set GLFW include and library paths
set(GLFW_INCLUDE_DIR "C:/Projects/Libraries/glfw-3.4/glfw-3.4/include")
set(GLFW_LIBRARY "C:/Projects/Libraries/glfw-3.4/glfw-3.4/build/src/Debug/glfw3.lib")

# Include GLFW
include_directories(${GLFW_INCLUDE_DIR})
target_link_libraries(Exams_Project_Sam ${GLFW_LIBRARY})

# Link OpenGL
find_package(OpenGL REQUIRED)
target_link_libraries(Exams_Project_Sam OpenGL::GL)

# Include GLM
set(GLM_INCLUDE_DIR "C:/Projects/Libraries/glm")
include_directories(${GLM_INCLUDE_DIR})

