#include <stdio.h>
/**
 * main - prints alphabet in lowercase, and then in uppercase
 *
 * Return: 0 on success
 */
int main(void)
{
	char lowerAlpha = 'a';
	char upperAlpha = 'A';

	while (lowerAlpha <= 'z')
	{
		putchar(lowerAlpha);
		lowerAlpha++;
	}
	while (upperAlpha <= 'Z')
	{
		putchar(upperAlpha);
		upperAlpha++;
	}
	putchar('\n');
	return (0);
}
