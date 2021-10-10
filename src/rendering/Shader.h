#pragma once

#include <iostream>
#include <fstream>
#include <sstream>

#include <glad/glad.h>

using namespace std;


struct Shader {
    
    unsigned int ID = 0;

    Shader() = default;
    Shader(string vertex_path, string fragment_path);

    void Use();

    unsigned int UniformLocation(const char* name);

    void SetInt(const char* location, int value);
    void SetFloat(const char* location, float value);
    void SetVec2(const char* location, float value1, float value2);
    void SetVec3(const char* location, float value1, float value2, float value3);
    void SetVec4(const char* location, float value1, float value2, float value3, float value4);
    void SetMat2(const char* location, unsigned int count, float *matrix_pointer);
    void SetMat3(const char* location, unsigned int count, float *matrix_pointer);
    void SetMat4(const char* location, unsigned int count, float *matrix_pointer);
};