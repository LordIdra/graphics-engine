#pragma once

#include <vector>
#include <map>
#include <string>

#include <glm/glm.hpp>

#include "Shader.h"
#include "Camera.h"

using namespace std;
using namespace glm;



struct PointLight {
    vec3 position;
    vec3 colour;
    float strength;
};

struct DirectionalLight {
    vec3 direction;
    vec3 colour;
    float strength;
};



class Lighting {

private:
    static vec3 ambient;

    static map<int, PointLight> point_lights;
    static map<int, DirectionalLight> directional_lights;

    static int point_light_count;
    static int point_light_ID;

    static int directional_light_count;
    static int directional_light_ID;


public:
    static Shader ObjectShader;
    static Shader ShadowShader;

    static void Init();

    static int AddPointLight(vec3 position, vec3 colour, float strength);
    static int AddDirectionalLight(vec3 direction, vec3 colour, float strength);

    static void RemovePointLight(int ID);
    static void RemoveDirectionalLight(int ID);

    static void Update();
};