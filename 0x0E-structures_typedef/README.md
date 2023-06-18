# 0x0E. C - Structures, typedef

This project is part of the Holberton School curriculum. In this project, you will learn about structures and typedef in C programming.

## Synopsis

This project covers:

- What are structures, when, why and how to use them
- How to use `typedef`

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`

## File Descriptions

### Mandatory

- `dog.h`: This is the header file where the structure `dog` is defined. The structure `dog` has three elements: `name`, `age`, and `owner`.

- `1-init_dog.c`: This file contains a function that initializes a variable of type `struct dog`. The function takes a pointer to a `dog` structure, and the name, age, and owner of the dog as inputs.

- `2-print_dog.c`: This file contains a function that prints a `struct dog`. The function takes a pointer to a `dog` structure as an input. If an element of `dog` is `NULL`, the function prints `(nil)` instead of this element. If the structure is `NULL`, the function does nothing.

- `4-new_dog.c`: This file contains a function that creates a new dog. The function takes the name, age, and owner of the dog as inputs and returns a pointer to the new dog. If the function fails, it returns `NULL`.

- `5-free_dog.c`: This file contains a function that frees dogs. The function takes a pointer to a dog structure and frees the memory allocated for the name, owner, and the structure itself.

## Author

Chris Stamper - [ZeroDayPoke](https://github.com/ZeroDayPoke)
