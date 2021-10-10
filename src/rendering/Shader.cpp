#include "Shader.h"



Shader::Shader(string vertex_path, string fragment_path) {

    ifstream vertex_source_file(vertex_path);
    ifstream fragment_source_file(fragment_path);

    stringstream vertex_source_buffer;
    stringstream fragment_source_buffer;

    vertex_source_buffer << vertex_source_file.rdbuf();
    fragment_source_buffer << fragment_source_file.rdbuf();

    vertex_source_file.close();
    fragment_source_file.close();

    const string vertex_source_string = (vertex_source_buffer.str());
    const string fragment_source_string = (fragment_source_buffer.str());

    const char *vertex_source = vertex_source_string.c_str();
    const char *fragment_source = fragment_source_string.c_str();

    unsigned int vertex_shader = glCreateShader(GL_VERTEX_SHADER);
    unsigned int fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);

    glShaderSource(vertex_shader, 1, &vertex_source, NULL);
    glShaderSource(fragment_shader, 1, &fragment_source, NULL);

    int  shader_compile_success;
    char shader_compile_log[512];

    glCompileShader(vertex_shader);
    glGetShaderiv(vertex_shader, GL_COMPILE_STATUS, &shader_compile_success);

    if (!shader_compile_success) {
        glGetShaderInfoLog(vertex_shader, 512, NULL, shader_compile_log);
        cerr << "Error while compiling vertex shader at " << vertex_path << ":\n" << shader_compile_log << endl;
    }

    glCompileShader(fragment_shader);
    glGetShaderiv(fragment_shader, GL_COMPILE_STATUS, &shader_compile_success);

    if (!shader_compile_success) {
        glGetShaderInfoLog(fragment_shader, 512, NULL, shader_compile_log);
        cerr << "Error while compiling fragment shader at " << fragment_path << ":\n " << shader_compile_log << endl;
    }

    int  shader_init_success;
    char shader_init_log[512];

    unsigned int program = glCreateProgram();
    glAttachShader(program, vertex_shader);
    glAttachShader(program, fragment_shader);
    glLinkProgram(program);

    glGetProgramiv(program, GL_LINK_STATUS, &shader_init_success);

    if(!shader_init_success) {
        glGetProgramInfoLog(program, 512, NULL, shader_init_log);
        cerr << "Error while compiling shader program:\n " << shader_compile_log << endl;
    }

    glDeleteShader(vertex_shader);
    glDeleteShader(fragment_shader);

    ID = program;
}


void Shader::Use() {
    glUseProgram(ID);
}


unsigned int Shader::UniformLocation(const char* name){
    return glGetUniformLocation(ID, name);
}


void Shader::SetInt(const char* location, int value){
    glUniform1i(UniformLocation(location), value);
}


void Shader::SetFloat(const char* location, float value){
    glUniform1f(UniformLocation(location), value);
}

void Shader::SetVec2(const char* location, float value1, float value2){
    glUniform2f(UniformLocation(location), value1, value2);
}


void Shader::SetVec3(const char* location, float value1, float value2, float value3){
    glUniform3f(UniformLocation(location), value1, value2,value3);
}


void Shader::SetVec4(const char* location, float value1, float value2, float value3, float value4){
    glUniform4f(UniformLocation(location), value1, value2, value3, value4);
}


void Shader::SetMat2(const char* location, unsigned int count, float *matrix_pointer){
    glUniformMatrix2fv(UniformLocation(location), count, GL_FALSE, matrix_pointer);
}


void Shader::SetMat3(const char* location, unsigned int count, float *matrix_pointer){
    glUniformMatrix3fv(UniformLocation(location), count, GL_FALSE, matrix_pointer);
}


void Shader::SetMat4(const char* location, unsigned int count, float *matrix_pointer){
    glUseProgram(ID);
    glUniformMatrix4fv(UniformLocation(location), count, GL_FALSE, matrix_pointer);
}