#include "main.h"

/**
 * _isdigit - function that print 0-9
 *
 * @c: par c
 *
 * Return: 1
 */

int _isdigit(int c)
{
        if (c >= 0 && c <= 9)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
