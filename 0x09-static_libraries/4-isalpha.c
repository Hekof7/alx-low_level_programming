#include "main.h"

/**
 * _isalpha - check for alphabet char
 * @c: the char to be checked
 * Return: 1 if a letter , 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
