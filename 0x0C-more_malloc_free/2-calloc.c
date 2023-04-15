#include "main.h"

/**
 * _calloc - function that allocate memoryfor array
 *
 * @nmemb: element of array
 * @size: size of byte of each element
 *
 * Return: poiter to array , NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pcalloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pcalloc = malloc(nmemb * size);
	if (pcalloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		pcalloc[i] = 0;
	}

	return (pcalloc);
}


