#include "main.h"

/**
 * _strlen - displays the length of strings
 * @s: the string to get the length of
 * Returns: the length of 
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
