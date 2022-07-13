#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: input string
 *
 * Return: no return
 */

void puts_half(char *str)
{
	int kwan = 0, a;

	while (kwan >= 0)
	{
		if (str[kwan] == '\0')
			break;
		kwan++;
	}
	if (kwan % 2 == 1)
		a = kwan / 2;
	else
		a = (kwan - 1) / 2;
	for (a++; a < kwan; a++)
		_putchar(str[a]);
	_putchar('\n');
}
