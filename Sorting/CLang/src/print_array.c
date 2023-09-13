#include <stdio.h>
#include "print_array.h"

void print_int_array(int* arr, int len) {
    printf("[");
    for (int i = 0; i < len; i++) {
        printf("%i%s", arr[i], i != (len - 1) ? ", " : "]\n");
    }
}