#include "main.h"

/**
 * _pow_recursion - return the of x raised to power of y
 * @x: base
 * @y: the exponent
 *
 * Return: value the base raise by the power of exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
