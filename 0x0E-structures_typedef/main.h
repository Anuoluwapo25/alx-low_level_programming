#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include "dog.h"
#include "string.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
