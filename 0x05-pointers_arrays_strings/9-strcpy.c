#include "main.h"

/**
 * *_strcpy - a function that copies string pointer
 * @dest: copy to
 * @src: copy from
 * Return: the string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
