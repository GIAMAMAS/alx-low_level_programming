#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("size of a char: %li byte(s)\n", sizeof(char));
	printf("size of an int: %li byte(s)\n", sizeof(int));
	printf("size of a long int: %li byte(s)\n", (long)sizeof(int));
	printf("size of a long long int: %lli byte(s)\n", (long long)sizeof(int));
	printf("size of a float: %li byte(s))", sizeof(float));
	return (0);
}
