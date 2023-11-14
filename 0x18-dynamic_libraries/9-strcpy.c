#include "main.h"
  
/**
 * _strcpy - function that copies string
 *
 * @dest: par dest
 * @src: parameter src
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
        int len = 0;

        while (*(src + len) != '\0')
        {
                *(dest + len) = *(src + len);
                len++;
        }

        *(dest + len) = '\0';
        return (dest);
}
