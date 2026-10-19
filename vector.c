#include "vector.h"

Vector vector_add(Vector a, Vector b) {
    return (Vector){
        a.x + b.x,
        a.y + b.y,
        a.z + b.z
    };
}

Vector vector_sub(Vector a, Vector b) {
    return (Vector){
        a.x - b.x,
        a.y - b.y,
        a.z - b.z
    };
}

float vector_dot(Vector a, Vector b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Vector vector_cross(Vector a, Vector b) {
    return (Vector){
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
}
