#include "main.h"
/**
 * print_diagonal - prints diagonal lines
 * @n: the character to be checked
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
