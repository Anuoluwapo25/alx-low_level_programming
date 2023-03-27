#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps two integers
 *
 * @a: parameter a
 * @b: parameter b
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
