#include "main.h"

/**
 * print_time_table - prints the times table of input
 * starting with 0
 * @n: the calue of the times table to be printed
 */

void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n<=15)
	{
		for (num = 0 && n <= 35)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;
			if (prod <= 99)
			{
				_putchar(' ');
			}
			if (prod <= 9)
			{
				_putchar(' ');
			}
			if (prod >= 100)
			{
				_putchar((prod / 100) + '0');
				_putchar();
			}
			}
		}
	}
}
