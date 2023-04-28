#include "tests.h"
#include <stdio.h>

/**
 * first - print a mesage before main function
 *
 * Return: 0
 */

void __attribute__ ((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

