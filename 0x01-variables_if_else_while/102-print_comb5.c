#include <stdio.h>
/**
 * main - prints a sequence of four digits
 *
 * return: always 0
 */

int main(void)
{
	int num1, num2, num3, num4;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	num4 = '0';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				while (num4 <= '9')
				{
					if (((num3 + num4) > (num1 + num2)) && (num3 >= num1))
					{
						putchar(num1);
						putchar(num2);
						putchar(' ');
						putchar(num3);
						putchar(num4;
						if (
					}
					num4++;
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}

	return (0);
}
