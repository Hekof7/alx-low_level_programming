#include "main.h"

/**
 * main - check the alphabets are whether lower or upper letter
 * _isupper - checks upper case characters
 * @c: charatrer to be checked
 * Return: 1 if it is upper and 0 if small
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
