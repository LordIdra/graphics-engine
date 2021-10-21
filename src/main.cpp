#include <iostream>
#include "window/Window.h"
#include "rendering/Render.h"
#include "geometry/Geometry.h"


int main(int, char**) {
    Window::Initialize("Sky is scary");
    Render::Init();
    Shader shader = Shader("resources/shaders/vertex.glsl", "resources/shaders/fragment.glsl");
    while (!Window::ShouldClose()) {
        Render::RenderObject(Geometry::vertices, Geometry::vertex_count, Geometry::vertex_size);
        Render::Update();
        Window::Update();
    }
}