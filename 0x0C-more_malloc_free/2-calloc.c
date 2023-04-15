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
	void *pcalloc;
	unsigned int i;

