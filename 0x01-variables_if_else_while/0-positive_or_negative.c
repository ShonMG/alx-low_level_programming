#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check whether negative or positive
 *return - success
 *
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d %s\n", n , "is negative");
	}
	else if (n > 0)
	{
		printf("%d %s\n", n, "is positive");
	}
	else
	{
		printf("%d %s\n", n, "is zero");
	}
	
	return (0);
}
