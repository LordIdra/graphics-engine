#pragma once

namespace Geometry {
    const int r = 0.5;
    float vertices[] = {
        -r, -r, -r,  0.0f, 0.0f,
        r, -r, -r,  1.0f, 0.0f,
        r,  r, -r,  1.0f, 1.0f,
        r,  r, -r,  1.0f, 1.0f,
        -r,  r, -r,  0.0f, 1.0f,
        -r, -r, -r,  0.0f, 0.0f,

        -r, -r,  r,  0.0f, 0.0f,
        r, -r,  r,  1.0f, 0.0f,
        r,  r,  r,  1.0f, 1.0f,
        r,  r,  r,  1.0f, 1.0f,
        -r,  r,  r,  0.0f, 1.0f,
        -r, -r,  r,  0.0f, 0.0f,

        -r,  r,  r,  1.0f, 0.0f,
        -r,  r, -r,  1.0f, 1.0f,
        -r, -r, -r,  0.0f, 1.0f,
        -r, -r, -r,  0.0f, 1.0f,
        -r, -r,  r,  0.0f, 0.0f,
        -r,  r,  r,  1.0f, 0.0f,

        r,  r,  r,  1.0f, 0.0f,
        r,  r, -r,  1.0f, 1.0f,
        r, -r, -r,  0.0f, 1.0f,
        r, -r, -r,  0.0f, 1.0f,
        r, -r,  r,  0.0f, 0.0f,
        r,  r,  r,  1.0f, 0.0f,

        -r, -r, -r,  0.0f, 1.0f,
        r, -r, -r,  1.0f, 1.0f,
        r, -r,  r,  1.0f, 0.0f,
        r, -r,  r,  1.0f, 0.0f,
        -r, -r,  r,  0.0f, 0.0f,
        -r, -r, -r,  0.0f, 1.0f,

        -r,  r, -r,  0.0f, 1.0f,
        r,  r, -r,  1.0f, 1.0f,
        r,  r,  r,  1.0f, 0.0f,
        r,  r,  r,  1.0f, 0.0f,
        -r,  r,  r,  0.0f, 0.0f,
        -r,  r, -r,  0.0f, 1.0f
    };
    const int vertex_count = 36;
    const int vertex_size = 6;
}