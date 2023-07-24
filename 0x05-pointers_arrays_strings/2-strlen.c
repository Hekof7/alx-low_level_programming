#include "main.h"
#include <stddef.h>

/**
 * _strlen - displays the length of strings
 * @s: the string to get the length of
 * Return: the length of
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
