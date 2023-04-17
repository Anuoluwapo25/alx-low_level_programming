#include "main.h"

/**
 * init_dog - function that initializes a variable
 *
 * @d: structure variable
 * @name: variable
 * @age: variable
 * @owner: variable
 *
 * Return: always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(sizeof(char) * strlen(name) + 1);
	d->owner = malloc(sizeof(char) * strlen(name) + 1);
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}

