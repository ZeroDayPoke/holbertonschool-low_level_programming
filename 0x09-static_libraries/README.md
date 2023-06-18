# 0x09 - Static Libraries

## Synopsis

In this project, we combined our custom C functions into a static library.

## File Descriptions

### Mandatory Task Object Files

- `0-isupper.o`: This is an object file generated from the `0-isupper.c` source file. It contains the compiled code for a function that checks for uppercase characters.
- `0-memset.o`: This is an object file generated from the `0-memset.c` source file. It contains the compiled code for a function that fills memory with a constant byte.
- `0-strcat.o`: This is an object file generated from the `0-strcat.c` source file. It contains the compiled code for a function that concatenates two strings.
- `1-isdigit.o`: This is an object file generated from the `1-isdigit.c` source file. It contains the compiled code for a function that checks for a digit (0 through 9).
- `1-memcpy.o`: This is an object file generated from the `1-memcpy.c` source file. It contains the compiled code for a function that copies memory area.
- `1-strncat.o`: This is an object file generated from the `1-strncat.c` source file. It contains the compiled code for a function that concatenates two strings.
- `2-strncpy.o`: This is an object file generated from the `2-strncpy.c` source file. It contains the compiled code for a function that copies a string.
- `3-strcmp.o`: This is an object file generated from the `3-strcmp.c` source file. It contains the compiled code for a function that compares two strings.
- `4-strpbrk.o`: This is an object file generated from the `4-strpbrk.c` source file. It contains the compiled code for a function that searches a string for any of a set of bytes.
- `5-strstr.o`: This is an object file generated from the `5-strstr.c` source file. It contains the compiled code for a function that locates a substring.
- `6-abs.o`: This is an object file generated from the `6-abs.c` source file. It contains the compiled code for a function that computes the absolute value of an integer.
- `7-islower.o`: This is an object file generated from the `7-islower.c` source file. It contains the compiled code for a function that checks for lowercase character.
- `8-isalpha.o`: This is an object file generated from the `8-isalpha.c` source file. It contains the compiled code for a function that checks for alphabetic character.
- `9-strcpy.o`: This is an object file generated from the `9-strcpy.c` source file. It contains the compiled code for a function that copies the string pointed to by src, including the terminating null byte, to the buffer pointed to by dest.

### Advanced Task Object File

- `100-atoi.o`: This is an object file generated from the `100-atoi.c` source file. It contains the compiled code for a function that converts a string to an integer.

### Static Library Shell Script

- `create_static_lib.sh`: This is a shell script that automates the process of creating a static library. Itcompiles all the `.c` files in the current directory to object files and then archives them into a static library named `liball.a`.

## Author

Chris Stamper - [ZeroDayPoke](https://github.com/ZeroDayPoke)
