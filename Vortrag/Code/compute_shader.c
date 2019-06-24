// Workgroup size
layout(local_size_x = 16, local_size_y = 16) in; 
shared float foo[256];// Shared Memory
uniform image2D data;

void main() {
    //warte bis jeder Thread an dieser Stelle 
    //angekommen ist
    barrier();
    ivec2 storePos = ivec2(gl_GlobalInvocationID.xy);
    //berechne farbe oder sonstige Daten
    vec4 color;
    imageStore(data,storePos,color);
}