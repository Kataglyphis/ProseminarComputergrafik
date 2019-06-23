layout (triangles) in;
layout (triangle_strip , max_vertices = 3 )out;
void main() {
    for(int j = 0; j < gl_in.length();i++) {
        gl_Position = MVP * gl_in[j].gl_Position;
        vec3 P = vec3 ( MV * in_position ); 
        //Gourand Shading
        vec3 N = normalize ( vec3 ( matrixNormale 
                        * vec4 ( in_normal , 0.0 ) )
        vec3 L = normalize ( lightSourcePos-P );
        color = vec4 ( max ( 0.0, dot( L, N ) )
        EmitVertex();
    }
    EndPrimitive();
}