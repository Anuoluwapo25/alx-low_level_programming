#include "main.h"

/**
 * _strlen - function that find's the length of string
 *
 * @s: par s
 *
 * Return: the length of string
 */

int _strlen(char *s)
{
        int len = 0;

        while (*s != '\0')
        {
                len++;
                s++;
        }
        return (len);
}
