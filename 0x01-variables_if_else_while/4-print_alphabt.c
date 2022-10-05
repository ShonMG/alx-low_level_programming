#include <stdio.h>
/**
 * main - Print the alphabet except q and e
 *
 * Return: 0 on success
 */
int main(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		if ( start != 'q' && start != 'e')
		{
			putchar(start);
		}
		start++;
	}
	putchar('\n');
	return (0);
}
