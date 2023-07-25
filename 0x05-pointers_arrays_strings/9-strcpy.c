#include "main.h"

/**
 * *_strcpy - a function that copies string pointer
 * @dest: copy to
 * @src: copy from
 * Return: the string
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}
