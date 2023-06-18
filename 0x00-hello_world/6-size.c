#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", (long)sizeof(int));
	printf("Size of a long long int: %lli byte(s)\n", (long long)sizeof(int));
	printf("Size of a float: %i byte(s))", sizeof(float));
	return (0);
}
