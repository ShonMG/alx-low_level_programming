#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int a, b, ans;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			ans = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (ans >= 10)
			{
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
			else if (ans < 10 && b != 0)
			{
				_putchar(' ');
				_putchar((ans % 10) + '0');
			}
			else
				_putchar((ans % 10) + '0');
		}
		_putchar('\n');
	}
}
