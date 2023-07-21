#include "main.h"

/**
 * _isdigit - check the charater is whether a digit
 * @c: the character to be checked
 * Return: 1 if it is digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
