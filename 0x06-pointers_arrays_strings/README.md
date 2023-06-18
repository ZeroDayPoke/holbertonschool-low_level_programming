# 0x06. C - More pointers, arrays and strings

This project is part of the Holberton School curriculum. In this project, you will learn about pointers, arrays, and strings in C programming.

## Synopsis

This project covers:

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`

## File Descriptions

### Mandatory

- `0-strcat.c`: This file contains a function that concatenates two strings.
- `1-strncat.c`: This file contains a function that concatenates two strings, using at most an inputted number of bytes from the second string.
- `2-strncpy.c`: This file contains a function that copies a string, including the null byte, using at most an inputted number of bytes. If the source string is less than the inputted number of bytes, the remainder of the destination string is filled with null bytes.
- `3-strcmp.c`: This file contains a function that compares two strings. The function returns the difference in bytes at the point of divergence.
- `4-rev_array.c`: This file contains a function that reverses the content of an array of integers.
- `5-string_toupper.c`: This file contains a function that changes all lowercase letters of a string to uppercase.
- `6-cap_string.c`: This file contains a function that capitalizes all words of a string.
- `7-leet.c`: This file contains a function that encodes a string into 1337. Letters `a` and `A` should be replaced by `4`. Letters `e` and `E` should be replaced by `3`. Letters `o` and `O` should be replaced by `0`. Letters `t` and `T` should be replaced by `7`. Letters `l` and `L` should be replaced by `1`.

### Advanced

- `100-rot13.c`: This file contains a function that encodes and decodes a string using the ROT13 substitution cipher. The function takes an input string and returns the encoded or decoded string.
- `101-print_number.c`: This file contains a function that prints an integer to the standard output. The function takes an input number and does not return anything.
- `102-magic.c`: This file contains a function that modifies the value of an integer in memory. The function takes no inputs and does not return anything.
- `103-infinite_add.c`: This file contains a function that adds two numbers. The function takes two input strings (representing the numbers to be added), a buffer to store the result, and the size of the buffer. The function returns a pointer to the buffer.
- `104-print_buffer.c`: This file contains a function that prints a buffer. The function takes a pointer to a buffer and the size of the buffer as inputs. The function does not return anything.

## Author

Chris Stamper - [ZeroDayPoke](https://github.com/ZeroDayPoke)
