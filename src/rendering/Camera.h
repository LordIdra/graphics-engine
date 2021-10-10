#pragma once

#include <iostream>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/string_cast.hpp>

using namespace glm;



class Camera {

private:
    static glm::vec3 position;
    static glm::vec3 target;
    static glm::vec3 direction;

    static float yaw;
    static float pitch;

    static glm::vec3 up;
    static glm::vec3 right;
    static glm::vec3 front;
    static glm::mat4 view;


public:
    static void Init();
    static void Update();

    static void Forward(float speed);
    static void Up(float speed);
    static void Right(float speed);

    static void Rotate(float yaw_to_add, float pitch_to_add);

    static glm::mat4 GetViewMatrix();
    static glm::vec3 GetPosition();
};