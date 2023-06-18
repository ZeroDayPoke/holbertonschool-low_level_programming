# 0x0F - Function Pointers

## Synopsis

This project taught us function pointers, and gave a practical problem to illustrate their use, in preparation for the printf project.

## File Descriptions

### Mandatory

- `0-print_name.c`: This file contains a function that prints a name. The function takes a string (the name to be printed) and a function pointer (the function to be used to print the name). If the name is `NULL` or the function pointer is `NULL`, the function does nothing.

- `1-array_iterator.c`: This file contains a function that executes a function given as a parameter on each element of an array. The function takes a pointer to an array, the size of the array, and a function pointer (the function to be executed on each element of the array). If the array is `NULL` or the function pointer is `NULL`, the function does nothing.

- `2-int_index.c`: This file contains a function that searches for an integer. The function takes a pointer to an array, the size of the array, and a function pointer (the function to be used to compare the elements of the array). If the array is `NULL` or the function pointer is `NULL`, the function returns `-1`. If no element matches, the function returns `-1`. Otherwise, the function returns the index of the first element for which the `cmp` function does not return `0`.

- `3-main.c`: This file contains the main function for a program that performs simple operations. The program takes an operator and two numbers as input, performs the operation, and prints the result. The program assumes that the numbers and operator are valid, and that the result of the operation can be stored in an integer. If the program is not given three arguments, it prints an error message and exits with a status of 98. If the operator is none of the above, the program prints an error message and exits with a status of 99. If the user tries to divide (`/` or `%`) by 0, the program prints an error message and exits with a status of 100.

- `3-op_functions.c`: This file contains the functions that perform the operations. Each function takes two integers as input and returns the result of the operation.

- `3-op_function_pointers.c`: This file contains an array of operator structures, each containing a string of the operator and the corresponding function.

- `3-get_op_func.c`: This file contains a function that selects the correct function to perform the operation asked by the user. The function takes a string argument (the operator), and returns a pointer to the function that corresponds to the operator given as a parameter. If no operator matches the input, the function returns `NULL`.

- `3-calc.h`: This file contains all the function prototypes and data structures used by the program.

### Advanced

- `100-main_opcodes.c`: This file contains a program that prints the opcodes of its own main function. The program takes an input number of bytes to print. If the number of arguments is not exactly 2, the program prints an error message and exits with a status of 1. If the number of bytes is negative, the program prints an error message and exits with a status of 2.

## Author

Chris Stamper - [ZeroDayPoke](https://github.com/ZeroDayPoke)
