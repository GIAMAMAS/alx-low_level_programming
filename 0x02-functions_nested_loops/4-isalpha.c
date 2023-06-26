#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: The character to be checked
 * Return: 1 for alphabetic character, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
