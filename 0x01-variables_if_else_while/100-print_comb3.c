#include <stdio.h>
/**
 * main - Prints the possible compination of two number
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 8; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			if (n != m)
			{
				putchar(n);
				putchar(m);
				if (n == 8 && m == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
