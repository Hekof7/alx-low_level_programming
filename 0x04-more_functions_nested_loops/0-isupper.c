#include "main.h"

/**
 * _isupper - upper case characters
 * @c: charatrer to be checked
 * Return: 1 if it is upper and 0 if small
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
