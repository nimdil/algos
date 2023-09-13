struct array_with_length {
    int length;
    int *data;
};

struct array_with_length* load_array_from_file(char* array_location);