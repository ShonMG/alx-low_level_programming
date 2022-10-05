#include <stdio.h>
/**
 * main - print numbers using putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
