void main() {
    //gl_in.length() Anzahl Elemente pro Primitiv 
    //gl_in[] struct Gebilde
    for(int j = 0; j < gl_in.length();++j) {
        gl_Position = MVP * gl_in[j].gl_Position;
        vec3 P = vec3 (MV * gl_in[j].gl_Position); 
        //Gourand Shading
        vec3 N = normalize(vec3(matrixNormale 
                        * vec4 (normal[j], 0.0))
        vec3 L = normalize(lightSourcePos - P);
        colorGeometry = vec4(max(0.0, dot(L, N));
        EmitVertex();
    }
    EndPrimitive();
}