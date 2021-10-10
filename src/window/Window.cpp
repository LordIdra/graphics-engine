#include "Window.h"



const int Window::SAMPLES = 4;
GLFWwindow* Window::window = NULL;
double Window::cursor_x = 0.0;
double Window::cursor_y = 0.0;
double Window::previous_cursor_x = 0.0;
double Window::previous_cursor_y = 0.0;
double Window::delta_time = 0.0;

float Window::width = 0.0;
float Window::height = 0.0;


void Window::InitializeGLFW() {
    if (!glfwInit()) {
        cerr << "Failed to initialize GLFW." << endl;
    }
}

void Window::InitializeHints(const GLFWvidmode* mode) {
    glfwWindowHint(GLFW_RED_BITS, mode->redBits);
    glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
    glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
    glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);
    glfwWindowHint(GLFW_SAMPLES, SAMPLES);
}

void Window::InitializeWindow(GLFWmonitor* monitor, const GLFWvidmode* mode, const char* title) {
    window = glfwCreateWindow(mode->width, mode->height, title, monitor, NULL);
    if (window == NULL) {
        cerr << "Failed to create window." << endl;
        glfwTerminate();
    }
    width = mode->width;
    height = mode->height;
    glfwMakeContextCurrent(window);
}

void Window::Initialize(const char* title) {
    InitializeGLFW();
    GLFWmonitor* monitor = glfwGetPrimaryMonitor();
    const GLFWvidmode* mode = glfwGetVideoMode(monitor);
    InitializeHints(mode);
    InitializeWindow(monitor, mode, title);
}

void Window::Close() {
    glfwSetWindowShouldClose(window, true);
}

int Window::ShouldClose(){
    return glfwWindowShouldClose(window);
}

void Window::Clear() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Window::SetColor(float r, float g, float b, float a) {
    glClearColor(r, g, b, a);
}

void Window::SetDepthTesting(bool enabled) {
    if (enabled) glEnable(GL_DEPTH_TEST);
    else glEnable(GL_DEPTH_TEST);
}

void Window::Update() {
    glfwSwapBuffers(window);
    glfwPollEvents();
    delta_time = glfwGetTime() - delta_time;
    previous_cursor_x = cursor_x;
    previous_cursor_y = cursor_y;    
    glfwGetCursorPos(window, &cursor_x, &cursor_y);
}

bool Window::KeyPressed(unsigned int key) {
    if (glfwGetKey(window, key) == GLFW_PRESS) return true;
    else return false;
}

void Window::SetCursorState(bool status) {
    if (status) glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);  
    else glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);  
}