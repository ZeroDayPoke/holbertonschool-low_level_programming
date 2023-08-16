#ifndef SEARCH_H_
#define SEARCH_H_

/*
 * libraries - to be included
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

/*
 * prototypes - function protos below
 */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
