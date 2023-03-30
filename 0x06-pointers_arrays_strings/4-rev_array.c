#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverse a string
 *
 * @a: parameter a
 * @n: parameter n
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
