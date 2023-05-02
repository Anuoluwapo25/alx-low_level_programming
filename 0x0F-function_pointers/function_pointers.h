#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER
#include <stdio.h>

int int_index(int *array, int size, int (*cmp)(int))
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
