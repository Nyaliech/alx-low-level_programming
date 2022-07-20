#include "main.h"

/**
 * operator_power - returns sqaure root
 * @n: input number
 * @a: iterator
 *
 * Return: sqaure root -1
 */
int operator_power(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + operator_power(n, a + 1)):
}

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
	return (operator_power(n, 2));
}
