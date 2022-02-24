#version 450

layout(location = 0) in vec2 inPosition; //vertex attributes
layout(location = 1) in vec3 inColor; 

layout(location = 0) out vec3 fragColor;


// Executed once per each vertex we have
void main() {
    gl_Position  = vec4(inPosition, 0.0, 1.0);
    fragColor = inColor;
}