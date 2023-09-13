shared_stuff: read_input  print_array

read_input:
	gcc -c $(CFLAGS) -o $(OBJ)read_input.o $(SRC)read_input.c

print_array:
	gcc -c $(CFLAGS) -o $(OBJ)print_array.o $(SRC)print_array.c

test: read_input
	gcc -c $(CFLAGS) -o $(OBJ)test_read_input.o $(SRC)test_read_input.c
	gcc -c $(CFLAGS) -o $(OBJ)print_array.o $(SRC)print_array.c
	gcc -o $(OBJ)test_read_input $(OBJ)test_read_input.o $(OBJ)read_input.o $(OBJ)print_array.o -lm
	./$(OBJ)test_read_input

clean:
	rm -f $(OBJ)/*

CFLAGS=-Wall -Wextra -g
OBJ=obj/
SRC=src/