#include "Render.h"



GLuint Render::vao = 0;
GLuint Render::vbo = 0;


void Render::Init() {
    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &vbo);

    glBindVertexArray(vao);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 10 * sizeof(float), (void*)0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 10 * sizeof(float), (void*)(3*sizeof(float)));
    glVertexAttribPointer(2, 4, GL_FLOAT, GL_FALSE, 10 * sizeof(float), (void*)(6*sizeof(float)));

    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glEnableVertexAttribArray(2);
}


void Render::Update() {
    mat4 view = Camera::GetViewMatrix();
    mat4 projection = perspective(radians(45.0f), 800.0f / 600.0f, 0.1f, 100.0f);
    mat4 space_matrix = projection * view;

    Lighting::ObjectShader.Use();
    Lighting::ObjectShader.SetMat4("space_matrix", 1, value_ptr(space_matrix));
    Lighting::Update();

    glBindVertexArray(vao);
}


void Render::RenderObject(float vertices[], int vertex_count, int vertex_size) {
    glBindBuffer(GL_ARRAY_BUFFER, vao);
    glBufferData(GL_ARRAY_BUFFER, vertex_count * vertex_size * sizeof(float), vertices, GL_DYNAMIC_DRAW);
    glDrawArrays(GL_TRIANGLES, 0, vertex_count);
}
