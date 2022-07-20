#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqaure root of a number
 * @n: input number
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt_recursion(n, 2));
}
