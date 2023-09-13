#include <stdio.h>
#include <stdlib.h>
#include "read_input.h"

const int MAX_INT_LENGTH = 10;

struct array_with_length* load_array_from_file(char* array_location) {
    FILE *fil;
    // 10 should be sufficient
    char number_as_text[MAX_INT_LENGTH];
    int int_to_store;
    struct array_with_length *result = malloc(sizeof(struct array_with_length));
    //(*result).length = 0;
    result->length = 10;
    result->data = malloc(10 * sizeof(int));
    int current_length = 0;
    void *temp;

    fil = fopen(array_location, "r");

    while(fgets(number_as_text, MAX_INT_LENGTH, fil)) {
        int_to_store = atoi(number_as_text);
        if (++current_length > result->length) {            
            result->length *= 2;
            temp = realloc(result->data, result->length * sizeof(int));            
            result->data = temp;
        }
        result->data[current_length - 1] = int_to_store;
    }
    fclose(fil);
    result->length = current_length;
    temp = realloc(result->data, result->length * sizeof(int));
    return result;
}