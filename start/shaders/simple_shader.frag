#version 450
//layout takes a location value
//out -> to be used as output
//var name (vec 4)
// type (outColor)
layout (location = 0) out vec4 outColor;
//in frag files, main doesn't give a return value by default, hence the var above

layout(location = 0) in vec3 fragColor;

void main() {
    outColor = vec4(fragColor, 1.0);
}