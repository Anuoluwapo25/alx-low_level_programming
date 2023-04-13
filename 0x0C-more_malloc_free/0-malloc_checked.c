#include "main.h"

/**
 * malloc_checked - function that checks if the malloc fail
 *
 * @b: the size to be allocated by malloc
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *mcheck;

	mcheck = malloc(b);
	if (mcheck == NULL)
	{
		exit(98);
	}
	return (mcheck);
}
