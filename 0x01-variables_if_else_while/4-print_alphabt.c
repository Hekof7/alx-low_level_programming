#include <stdio.h>
/**
 * main - Entry Point
 * Prints lower case letter
 * Return:  Always 0 (Success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
