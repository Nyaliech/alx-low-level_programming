#include "main.h"

/**
 * _isupper - checks if it is an uppercase character
 * @c: print 1 if c is uppercase
 * Return: 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
