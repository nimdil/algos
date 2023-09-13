#include <assert.h>
#include "read_input.h"
#include "print_array.h"

int main(void) {
    char* sample_file = "test_input.txt";
    struct array_with_length *loaded_test = load_array_from_file(sample_file);

    print_int_array(loaded_test->data, loaded_test->length);

    assert(loaded_test->length == 4);
    assert(loaded_test->data[0] == 13);
    assert(loaded_test->data[3] == -77);
}