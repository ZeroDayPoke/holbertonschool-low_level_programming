# 0x10 - Variadic Functions in C

## Synopsis

In this project, we learned how to implement variadic functions in C in preparation for the printf project.

## File Descriptions

### Mandatory

- `0-sum_them_all.c`: This file contains a function that returns the sum of all its parameters. The function takes an integer `n` as the number of parameters, followed by all the numbers to be added. If `n` is `0`, the function returns `0`.

- `1-print_numbers.c`: This file contains a function that prints numbers, followed by a new line. The function takes a string `separator` as the delimiter between numbers, an integer `n` as the number of parameters, followed by all the numbers to be printed. If `separator` is `NULL`, it is not printed.

- `2-print_strings.c`: This file contains a function that prints strings, followed by a new line. The function takes a string `separator` as the delimiter between strings, an integer `n` as the number of parameters, followed by all the strings to be printed. If `separator` is `NULL`, it is not printed. If one of the string is `NULL`, this function prints `(nil)` instead.

- `3-print_all.c`: This file contains a function that prints anything. The function takes a list of types of arguments passed to the function. `c`: `char`, `i`: `int`, `f`: `float`, `s`: `char *` (if the string is `NULL`, print `(nil)` instead). If any other type, the function ignores it. The function prints a new line at the end of function.

### Advanced

- `100-hello.h`: This file contains a function-like macro `SIZE` that computes the size of a static array.

## Author

Chris Stamper - [ZeroDayPoke](https://github.com/ZeroDayPoke)
