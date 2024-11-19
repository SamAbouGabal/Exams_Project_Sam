# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Exams_Project_Sam)

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 17)

# Add the main source file to the project
add_executable(Exams_Project_Sam main.cpp)

# Specify the paths to the GLFW include directory and library
set(GLFW_INCLUDE_DIR "C:/Projects/Libraries/glfw-3.4/glfw-3.4/include")
set(GLFW_LIBRARY "C:/Projects/Libraries/glfw-3.4/glfw-3.4/build/src/Debug/glfw3.lib")

# Include GLFW header files
include_directories(${GLFW_INCLUDE_DIR})

# Link the GLFW library to the project
target_link_libraries(Exams_Project_Sam ${GLFW_LIBRARY})

# Find the OpenGL library and link it to the project
find_package(OpenGL REQUIRED)
target_link_libraries(Exams_Project_Sam OpenGL::GL)

# Link other necessary libraries if needed
# If you are using additional libraries like GLM, you can include them here
# find_package(glm REQUIRED)
# target_link_libraries(Exams_Project_Sam glm::glm)
