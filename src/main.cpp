#include <iostream>
#include "window/Window.h"


int main(int, char**) {
    Window::Initialize("Sky is scary");
    while (!Window::ShouldClose()) {
        Window::Update();
    }
}