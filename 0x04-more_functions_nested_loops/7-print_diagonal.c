#include "main.h"

/**
 * print_diagonal - prints diagonal line n times
 * @n: times diagonal line is printed.
 * Return: no return
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; i++)
	{
		for (b = 0; b < i; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
