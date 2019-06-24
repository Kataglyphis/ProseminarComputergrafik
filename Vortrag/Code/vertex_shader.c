uniform mat4 MVP , MV , Normale;
uniform vec3 lightSourcePosition;
in vec4 position;
in vec3 normal;
//Gourand Shading
out vec4 color;
//nur falls kein Gourand Shading
out vec3 L, N;
void main ()
    gl_Position = MVP * position;
    vec3 P = vec3(matrixMV * position);
    N = normalize(vec3(Normale * vec4(in_normal,0.0)));
    L = vec3((lightSourcePos) - P);
    //nur falls Gourand Shading
    color = vec4(max(0.0, dot(L,N)));
}