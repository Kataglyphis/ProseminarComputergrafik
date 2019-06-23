uniform mat4 MVP , MV , Normale;
uniform vec3 lightSourcePosition;
in vec4 position;
in vec3 normal;
out vec3 L, N;
void main ()
    gl_Position = MVP * position;
    vec3 P = vec3(matrixMV * position);
    N = vec3(Normale * vec4(in_normal,0.0));
    L = vec3(lightSourcePos) - P;
}