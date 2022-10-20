#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_

/*
 * libraries - to be included
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * prototypes - function protos below
 */
void print_name(char *name, void (*f)(char *));

#endif
