#include <iostream>
#include <GLFW/glfw3.h>

typedef struct {
  int sides[6][9]; 
} Cube;

/**
 * Old rendering style using OpenGL < 2
 */ 
void oldRendering() {
    glBegin(GL_TRIANGLES); // Start drawing a triangle primitive
    glVertex3f(-1.0f, 0.0f, 0.0f); // The bottom left point
    glVertex3f(1.0f, 0.0f, 0.0f); // The bottom right point
    glVertex3f(0.0f, 1.0f, 0.0f); // The top point
    glEnd();
}


int main (void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Rubik Cube", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        oldRendering();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}