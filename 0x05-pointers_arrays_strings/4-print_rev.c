#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: the string to be printed
 * Return: always 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
	{
		putchar(*s);
		s--;
		len--;
	}
	putchar('\n');
}
