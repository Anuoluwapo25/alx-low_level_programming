#include <stdio.h>

/**
 * add - function that adds
 * @a: parameter
 * @b: parameter
 * Return: a + b
 */

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else 
	{
		printf("Error: Division by zero\n");
		return (0);
	}
}

int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else 
	{
		printf("Error: ");
		return (0);
	}
}
