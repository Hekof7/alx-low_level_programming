#include "main.h"

/**
 * _isalpha - check if the character is a lower of upoer case letter
 * @c: the character to be checked
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
