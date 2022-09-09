#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Print data type sizes'
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int integer_type;
	char character_type;
	long int longInt_type;
	long long int longLongInt_type;
	float float_type;

	printf("Size of a char: %zu byte(s)\n", sizeof(character_type));
	printf("Size of an int: %zu byte(s)\n", sizeof(integer_type));
	printf("Size of a long int : %zu byte(s)\n", sizeof(longInt_type));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongInt_type));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));

	return (0);
}
