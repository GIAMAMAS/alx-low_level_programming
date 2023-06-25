#include <unistd.h>
/**
 * _putchar - prints the character c to stdout
 * @c: The character to print
 *
 * Return: 1 when successful, -1 when error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
