#include <stdio.h>
#include "vector.h"

void print_vector(const char *name, Vector v) {
    printf("%s: (%.2f, %.2f, %.2f)\n",
           name, v.x, v.y, v.z);
}

int main(void) {
    Vector a = {3.0f, 11.0f, 23.0f};
    Vector b = {41.0f, 54.0f, 8.0f};

    print_vector("A + B", vector_add(a, b));
    print_vector("A - B", vector_sub(a, b));

    printf("A dot B: %.2f\n", vector_dot(a, b));

    print_vector("A cross B", vector_cross(a, b));

    return 0;
}
