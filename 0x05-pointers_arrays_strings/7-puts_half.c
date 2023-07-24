#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 * Return: always 0
 */

void puts_half(char *str)
{
	int len = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	int half_len = (len + 1) / 2;

	ptr = str + half_len;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}
