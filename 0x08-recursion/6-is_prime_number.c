#include "main.h"

int is_prime_helper(int n, int div);

/**
 * is_prime_number - prime numbers
 * @n: number
 * Return: prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - function for prime number
 * @n: the number
 * @div:  divisor to test
 * Return: 0 and 1
 */

int is_prime_helper(int n, int div)
{
	if (div >= n)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_helper(n, div + 1));
}
