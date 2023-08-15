#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets
 * @str: the string
 * Return: length
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		lenght++;
	return (length);
}

/**
 * _strcopy - returns @dest
 * @src: source
 * @dest: destination
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: dog owner
 * Return: point dog of NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dot_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if ((*dog).name == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
