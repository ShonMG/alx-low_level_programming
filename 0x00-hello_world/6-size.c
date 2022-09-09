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

	printf("Size of a char: %zu bytes\n", sizeof(character_type));
	printf("Size of an int: %zu bytes\n", sizeof(integer_type));
	printf("Size of a long int : %zu bytes\n", sizeof(longInt_type));
	printf("Size of a long long int: %zu bytes\n", sizeof(longLongInt_type));
	printf("Size of a float: %zu bytes\n", sizeof(float_type));

	return (0);
}
