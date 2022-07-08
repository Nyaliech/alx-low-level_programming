#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int a, b, kwan;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
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
