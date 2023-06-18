# 0x0C. C - More malloc, free

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

- `0-malloc_checked.c`: This file contains a function that allocates memory using `malloc`. The function takes an input size in bytes and returns a pointer to the allocated memory. If `malloc` fails, the function should cause normal process termination with a status value of `98`.
- `1-string_nconcat.c`: This file contains a function that concatenates two strings, using at most an inputted number of bytes from the second string. If the function fails, it should return `NULL`. If `n` is greater or equal to the length of `s2` then use the entire string `s2`. If `NULL` is passed, treat it as an empty string.
- `2-calloc.c`: This file contains a function that allocates memory for an array, using `malloc`. The function takes two inputs: the number of elements and the size in bytes of each element. The memory is set to zero. If `nmemb` or `size` is `0`, the function should return `NULL`.
- `3-array_range.c`: This file contains a function that creates an array of integers. The function takes two inputs: the minimum and maximum values of the integers to be included in the array. The array should be ordered from `min` to `max`, inclusive. If `min` is greater than `max`, the function should return `NULL`.

### Advanced

- `100-realloc.c`: This file contains a function that reallocates a memory block using `malloc` and `free`. The function takes a pointer to the previously allocated memory block, the old size in bytes, and the new size in bytes. If the new size is greater than the old size, the old content should be copied to the new space. If `new_size` is equal to `zero` and `ptr` is not `NULL`, the call should be equivalent to `free`. If `new_size`is equal to `old_size`, the function should return `ptr`. If `ptr` is `NULL`, the call should be equivalent to `malloc(new_size)` for all valid values of `new_size`.

## Author

Chris Stamper - [ZeroDayPoke](https://github.com/ZeroDayPoke)
