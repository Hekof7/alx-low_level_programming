#include <unistd.h>

/**
 * _putchar - writes the character c 
 *
 * Return: on success 1
 * on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
