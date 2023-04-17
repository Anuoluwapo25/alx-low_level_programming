#include "main.h"

/**
 * new_dog - function for a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * strlen(name) + 1);
	new_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);

		return (NULL);
	}

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
