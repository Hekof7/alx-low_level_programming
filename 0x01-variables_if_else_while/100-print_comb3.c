#include <stdio.h>
/**
 * main - Prints the possible compination of two number
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n = '0';
	int m = '0';

	while (n <= '9')
	{
		m = '0';
		while (m <= '9')
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (n != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;

		}
		n++;
	}
	putchar('\n');
	return (0);
}
