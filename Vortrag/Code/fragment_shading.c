in  vec3 L, N;
out vec4 out_color;
void main (){
    float kd  = max(0.0, dot(normalize(L),
                            normalize(N));
    out_color = vec4(kd);
}