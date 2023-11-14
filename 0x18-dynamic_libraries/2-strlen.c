#include "main.h"
#include <string.h>
#include <stdio.h>  // Add this line for printf
#include <stdlib.h> // Add this line for EXIT_SUCCESS

/**
 * _strlen - function that finds the length of a string
 *
 * @s: input string
 *
 * Return: the length of the string
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
