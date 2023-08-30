#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @n: bytes from memory area to be copied
 * @src: memory where it's copied
 * @dest: memory where it's stored
 *
 * Return: copied memory with n changed bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
