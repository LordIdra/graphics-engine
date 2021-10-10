#include "Camera.h"



vec3 Camera::position = vec3(0.0f);
vec3 Camera::target = vec3(0.0f);
vec3 Camera::direction = vec3(0.0f);

float Camera::yaw = -90.0f;
float Camera::pitch = 0.0f;

vec3 Camera::up = vec3(0.0f);
vec3 Camera::right = vec3(0.0f);
vec3 Camera::front = vec3(0.0f, 0.0f, -1.0f);
mat4 Camera::view = mat4(1.0f);


void Camera::Init() {
    position = vec3(0.0f, 0.0f, 3.0f);
    direction = normalize(position - target);

    up = vec3(0.0f, 1.0f, 0.0f);
    right = normalize(cross(up, direction));
    up = cross(direction, right);

    view = lookAt(vec3(0.0f, 0.0f, 3.0f), 
  		   vec3(0.0f, 0.0f, 0.0f), 
  		   vec3(0.0f, 1.0f, 0.0f));
}


void Camera::Update() {
    direction.x = cos(radians(yaw)) * cos(radians(pitch));
    direction.y = sin(radians(pitch));
    direction.z = sin(radians(yaw)) * cos(radians(pitch));

    front = normalize(direction);
    right = normalize(cross(up, direction));

    view = lookAt(position, position + front, up);
}


void Camera::Forward(float speed) {
    position += front * speed;
}


void Camera::Up(float speed) {
    position += up * speed;
}


void Camera::Right(float speed) {
    position += right * speed;
}


void Camera::Rotate(float yaw_to_add, float pitch_to_add) {
    yaw += yaw_to_add;
    pitch += pitch_to_add;

    if(pitch > 89.0f)
        pitch =  89.0f;
    if(pitch < -89.0f)
        pitch = -89.0f;
}


mat4 Camera::GetViewMatrix() {
    return view;
}


vec3 Camera::GetPosition() {
    return position;
}