#include "Lighting.h"



Shader Lighting::ObjectShader = Shader();

map<int, PointLight> Lighting::point_lights = map<int, PointLight>();
map<int, DirectionalLight> Lighting::directional_lights = map<int, DirectionalLight>();

int Lighting::point_light_count = 0;
int Lighting::point_light_ID = 0;

int Lighting::directional_light_count = 0;
int Lighting::directional_light_ID = 0;


void Lighting::Init() {
    ObjectShader = Shader("../shaders/Object.vsh", "../shaders/Object.fsh");
    ShadowShader = Shader("../shaders/Shadow.vsh", "../shaders/Shadow.fsh");
}


int Lighting::AddPointLight(vec3 position, vec3 colour, float strength) {
    point_lights.insert({point_light_ID, PointLight {position, colour, strength}});
    point_light_count++;
    return point_light_ID++;
}


int Lighting::AddDirectionalLight(vec3 direction, vec3 colour, float strength) {
    directional_lights.insert({directional_light_ID, DirectionalLight {direction, colour, strength}});
    directional_light_count++;
    return directional_light_ID++;
}


void Lighting::RemovePointLight(int ID) {
    point_lights.erase(ID);
    point_light_count--;
}


void Lighting::RemoveDirectionalLight(int ID) {
    directional_lights.erase(ID);
    directional_light_count--;
}


void Lighting::Update() {

    ObjectShader.SetVec3("camera_position", Camera::GetPosition().x, Camera::GetPosition().y, Camera::GetPosition().z);

    int i = 0;
    
    for(auto id_and_light : point_lights) {
        PointLight light = id_and_light.second;
        ObjectShader.SetVec3(
            (string("point_lights[") + to_string(i) + string("].position")).c_str(), 
            light.position.x, light.position.y, light.position.z);
        ObjectShader.SetVec3(
            (string("point_lights[") + to_string(i) + string("].colour")).c_str(),
            light.colour.x, light.colour.y, light.colour.z);
        ObjectShader.SetFloat(
            (string("point_lights[") + to_string(i) + string("].strength")).c_str(),
            light.strength);
        i++;
    }

    i = 0;

    for(auto id_and_light : directional_lights) {
        DirectionalLight light = id_and_light.second;
        ObjectShader.SetVec3(
            (string("directional_lights[") + to_string(i) + string("].direction")).c_str(), 
            light.direction.x, light.direction.y, light.direction.z);
        ObjectShader.SetVec3(
            (string("directional_lights[") + to_string(i) + string("].colour")).c_str(),
            light.colour.x, light.colour.y, light.colour.z);
        ObjectShader.SetFloat(
            (string("directional_lights[") + to_string(i) + string("].strength")).c_str(),
            light.strength);
        i++;
    }

    ObjectShader.SetInt("point_light_count", point_light_count);
    ObjectShader.SetInt("directional_light_count", directional_light_count);
}