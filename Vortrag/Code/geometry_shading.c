layout (triangles) in;
layout (triangle_strip, max_vertices = 3) out;
//falls weitergereicht wird
in vec3 colorVertex[];
in vec3 normal[]; 
out vec3 colorGeometry;
