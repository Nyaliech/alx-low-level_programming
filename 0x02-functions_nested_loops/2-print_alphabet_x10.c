#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int n;
	int m;

		for (m = 0; m < 10; m++)
		{
			{for n = 'a'; n <= 'z'; n++)
			_putchar(n);
		}
	_putchar('\n');
}
}
