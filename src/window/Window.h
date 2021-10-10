#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std;



class Window {
private:
    static const int SAMPLES;
    static GLFWwindow* window;
    static double delta_time;
    static double cursor_x;
    static double cursor_y;
    static double previous_cursor_x;
    static double previous_cursor_y;

    static void InitializeGLFW();
    static void InitializeHints(const GLFWvidmode* mode);
    static void InitializeWindow(GLFWmonitor* monitor, const GLFWvidmode* mode, const char* title);


public:
    static float width;
    static float height;

    static void Initialize(const char* title);
    static void Close();
    static int ShouldClose();
    static void Clear();
    static void SetColor(float r, float g, float b, float a);
    static void SetDepthTesting(bool enabled);
    static void Update();
    static bool KeyPressed(unsigned int key);
    static void SetCursorState(bool status);
};