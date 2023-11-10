#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds the value of given arguments
 * @n: number of arguments
 * Return: results of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int results = 0;

	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0;  i < n; i++)
		results += va_arg(args, int);
	va_end(args);
	return (results);
}
