#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    //Inititate GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW3" << std::endl;
        return -1;
    }

    //Set GLFW window properties (OpenGL version, profile, etc.)
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    //Create a windowed mode window and its OpneGL context
    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window) {
        std::cerr << "Failed to open GLFW window." << std::endl;
        glfwTerminate();
        return -1;
    }

    //Make the window's cintext current
    glfwMakeContextCurrent(window);

    //Main loop: keep the window open until the user closes it
    while (!glfwWindowShouldClose(window)) {
        //Clear the window with a color
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        //Swap front and back buffers
        glfwSwapBuffers(window);

        //Poll and process events
        glfwPollEvents();
    }

    //Clean up and close the window
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
