#include <stdio.h>
#include "../../CLang/src/read_input.h"
#include "../../CLang/src/print_array.h"

char* INPUT_LOCATION = "../input.txt";

int main(void) {
    struct array_with_length* input = load_array_from_file(INPUT_LOCATION);

    print_int_array(input->data, input->length);

    int tmp;
    for (int i = 0; i < input->length; i++) {
        for (int j = 0; j < input->length - i - 1; j++) {
            if (input->data[j] > input->data[j+1]) {
                tmp = input->data[j+1];
                input->data[j+1] = input->data[j];
                input->data[j] = tmp;
                print_int_array(input->data, input->length);
            }
        }
    }
}