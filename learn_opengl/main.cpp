#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>

using namespace std;


void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    cout << "framebuffer resized to " << width << " x " << height << endl;
}


void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_E && action == GLFW_PRESS)
        cout << "key 'E' pressed" << endl;
}


void cursor_position_callback(GLFWwindow* window, double xpos, double ypos)
{
    cout << "cursor moved to " << xpos << " x " << ypos << endl;
}


void mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
{
    if (button == GLFW_MOUSE_BUTTON_RIGHT && action == GLFW_PRESS)
        cout << "right clicked" << endl;
}


void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{
    cout << "scrolled" << endl;
}


void joystick_callback(int joy, int event)
{
    if (event == GLFW_CONNECTED)
    {
        cout << "joystick connected" << endl;
    }
    else if (event == GLFW_DISCONNECTED)
    {
        cout << "joystick disconnected" << endl;
    }
}


int main(int argc, char* argv[])
{
    /* Initialize GLFW */
    if (!glfwInit())
        return -1;

    /* Create a window and its OpenGL context */
    bool fullscreen = false;
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    GLFWmonitor* monitor = fullscreen ? glfwGetPrimaryMonitor() : NULL;
    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL", monitor, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Set callback functions */
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    glfwSetKeyCallback(window, key_callback);
    glfwSetCursorPosCallback(window, cursor_position_callback);
    glfwSetMouseButtonCallback(window, mouse_button_callback);
    glfwSetScrollCallback(window, scroll_callback);
    glfwSetJoystickCallback(joystick_callback);

    /* Initialize GLEW */
    if (glewInit() != GLEW_OK)
    {
        glfwTerminate();
        return -2;
    }

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
