#include "main.h"

/**
 * _print_rev_recursion - fucntion like puts();
 * @s: input
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
