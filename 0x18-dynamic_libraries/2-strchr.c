#include "main.h"
  
/**
 * _strchr - function to locate character in a string.
 *
 * @s: par s
 * @c: par c
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
        int i;

        for (i = 0; s[i] != '\0'; i++)
        {
                if (s[i] == c)
                        return (&s[i]);
        }
        return (0);
}

