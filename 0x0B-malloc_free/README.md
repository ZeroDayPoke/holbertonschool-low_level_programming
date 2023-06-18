# 0x0B. C - Malloc, Free

This project is part of the Holberton School curriculum. In this project, you will learn about dynamic memory allocation in C programming.

## Synopsis

This project covers:

- What is the difference between automatic and dynamic allocation
- What is `malloc` and `free` and how to use them
- Why and when use `malloc`
- How to use `valgrind` to check for memory leak

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`

## File Descriptions

### Mandatory

- `0-create_array.c`: This file contains a function that creates an array of chars, and initializes it with a specific char.
- `1-strdup.c`: This file contains a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- `2-str_concat.c`: This file contains a function that concatenates two strings.
- `3-alloc_grid.c`: This file contains a function that returns a pointer to a 2 dimensional array of integers.
- `4-free_grid.c`: This file contains a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.

### Advanced

- `100-argstostr.c`: This file contains a function that concatenates all the arguments of your program. The function takes the number of arguments and the argument vector as inputs. It returns a pointer to the new string, or `NULL` if it fails.
- `101-strtow.c`: This file contains a function that splits a string into words. The function takes a string as an input. It returns a pointer to an array of words (i.e., a two-dimensional array of characters). If a failure occurs, it returns `NULL`.

## Author

Chris Stamper - [ZeroDayPoke](https://github.com/ZeroDayPoke)
