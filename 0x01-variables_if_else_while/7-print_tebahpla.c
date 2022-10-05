#include <stdio.h>
/**
 * main - print alphabet in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	char start = 'z';

	while (start >= 'a')
	{
		putchar(start);
		start--;
	}
	putchar('\n');
	return (0);
}
