#include <stdio.h>

/**
 * main - print alphabets in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		++alph;
	}

	putchar('\n');

	return (0);
}
