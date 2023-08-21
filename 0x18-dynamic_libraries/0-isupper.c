#include "main.h"

/**
 * _isupper - function that prints uppercase
 *
 * @c: parameter c
 *
 * Return: 1 and 0
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
