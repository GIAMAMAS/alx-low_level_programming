#include "main.h"

/**
 *print_sign - prints the sign of a nummber
 *@n: the number to be checked
 *Return: for n, 1 when > 0, 0 when = 0 and
 *-1 when < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
