#include "main.h"

/**
 * _islower - check a charater is whether a lowercase of uppercase
 * @c: the character to be checked
 * Return: always o
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
