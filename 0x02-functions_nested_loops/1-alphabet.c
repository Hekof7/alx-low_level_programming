#include "main.h"

/**
 * main - display characters from a to z in lower case
 *
 * Return: always 0
 */

int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
