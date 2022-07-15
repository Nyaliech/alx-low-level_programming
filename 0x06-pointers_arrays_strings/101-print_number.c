#include "main.h"

/**
 * print_number - prints an integer
 * @z: input integer
 *
 * Return: no return
 */

void print_number(int z)
{
	unsigned int a, b, kwan;

	if (z < 0)
	{
		_putchar(45);
		a = z * -1;
	}
	else
	{
	       a = z;
	}

	b = a;
	kwan = 1;

	while (b > 9)
	{
		b /= 10;
		kwan *= 10;
	}
	for (; kwan >= 1; kwan /= 10)
	{
		_putchar(((a / kwan) % 10) + 48);
	}
}
