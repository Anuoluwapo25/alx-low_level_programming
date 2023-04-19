#include "main.h"

/**
 * array_iterator - function that excecute a function
 *
 * @array: array
 * @size: size of array
 * 
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
