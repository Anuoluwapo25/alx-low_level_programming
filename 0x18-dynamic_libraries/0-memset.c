#include "main.h"
  
/**
 * _memset - function that fill memory with constant byte
 *
 * @s: parameter s
 * @b: parameter b
 * @n: parameter n
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                *(s + i) = b;
        }

        return (s);
}

