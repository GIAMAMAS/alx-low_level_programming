#include "main.h"

/**
 * print_last_digit - print the last digit of a num
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar('0' + ld);
	return (ld);
}
