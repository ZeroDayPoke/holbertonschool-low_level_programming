#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_

/*
 * libraries - to be included
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct bypass_if_limit - struct to bypass if limit on 3
 * @fun: pointer to fun to print associated type
 *
 * Description: ... really tho? almost seems intentional
 */
struct bypass_if_limit
{
	void (*fun)(va_list varArg);
};
typedef struct bypass_if_limit bypass;

/*
 * prototypes - function protos below
 */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_all_char(va_list chrArg);
void p_all_int(va_list intArg);
void p_all_float(va_list fltArg);
void p_all_str(va_list strArg);

#endif
