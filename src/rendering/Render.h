#pragma once

#include <vector>
#include <math.h>
#include <iostream>

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/string_cast.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Lighting.h"
#include "Camera.h"

using namespace std;
using namespace glm;



class Render {

private:
    static GLuint vao;
    static GLuint vbo;
    static GLuint ebo;
    static Shader shader;

    Render();


public:
    static void Init();
    static void Update();
    static void RenderObject(float vertices[], unsigned int indices[]);
};