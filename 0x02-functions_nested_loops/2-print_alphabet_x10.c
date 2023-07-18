#include "main.h"

/**
 * print_alphabet_x10 - display alphabets x10
 *
 * Return: always void
 */

int print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
