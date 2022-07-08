#include "main.h"

/**
 * _isdigit -checks if digit (0 and 9)
 * @c: capture digit data
 * Return: 1 if digit falls from 0 to 9 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
