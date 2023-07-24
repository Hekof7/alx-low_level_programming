#include "main.h"

/**
 * swap_int - Swap the calue of two integers
 * @a: The first integer to be swapped
 * @b: the second integer to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
