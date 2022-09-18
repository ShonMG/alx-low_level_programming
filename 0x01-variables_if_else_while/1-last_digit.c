#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Check if last digit is greater than 5 or is
 * zero or is less than 6
 *
 * Return : 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf(" %s %d is %d ", "Last digit of", n, n%10);
	if (n % 10 > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);

}
