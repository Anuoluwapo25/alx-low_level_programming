#include "main.h"
  
/**
 * _puts - function that prints spring
 *
 * @str: parameter str
 *
 * Return: return 0
 */

void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str++);
        }
        _putchar('\n');
}

