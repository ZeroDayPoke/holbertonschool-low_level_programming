# 0x14 - Bit Manipulation

## Synopsis

This project is part of the Holberton School curriculum. In this project, you will learn about bit manipulation in C programming.

Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a word. Computer programming tasks that require bit manipulation include low-level device control, error detection and correction algorithms, data compression, encryption algorithms, and optimization.

In this project, you will be dealing with various tasks that will help you understand how to manipulate bits and use bitwise operators.

## File Descriptions

### Mandatory

- `0-binary_to_uint.c`: This file contains a function that converts a binary number to an unsigned int. The function takes a string of 0 and 1 chars and returns the converted number, or 0 if there is one or more chars in the string that is not 0 or 1 or if `b` is `NULL`.
- `1-print_binary.c`: This file contains a function that prints the binary representation of a number. The function takes an unsigned int and prints the binary representation.
- `2-get_bit.c`: This file contains a function that returns the value of a bit at a given index. The function takes an unsigned int and an index, and returns the value of the bit at the index or -1 if an error occurred.
- `3-set_bit.c`: This file contains a function that sets the value of a bit to 1 at a given index. The function takes a pointer to an unsigned int and an index, and returns 1 if it worked, or -1 if an error occurred.
- `4-clear_bit.c`: This file contains a function that sets the value of a bit to 0 at a given index. The function takes a pointer to an unsigned int and an index, and returns 1 if it worked, or -1 if an error occurred.
- `5-flip_bits.c`: This file contains a function that returns the number of bits you would need to flip to get from one number to another. The function takes two unsigned ints and returns the number of bits you would need to flip.

## Author

Chris Stamper - [ZeroDayPoke](https://github.com/ZeroDayPoke)
