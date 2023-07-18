#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet on a single line.
 *
 * Return: void
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
