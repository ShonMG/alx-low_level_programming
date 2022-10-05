#include <stdio.h>
/**
 * main - print all combinations of single digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++n;
	}
	putchar('\n');
	return (0);
}
