#include "main.h"

/**
 * _abs - calculate the absolute value of a number
 * @c: the number to be computerd
 * Return: absolute value of the number
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
