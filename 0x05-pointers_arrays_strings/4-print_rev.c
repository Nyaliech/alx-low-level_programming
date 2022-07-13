#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * followed by a new line
 * @s: input string
 * Return: no return
 */

void print_rev(char *s)
{
	int kwan = 0;

	while (kwan >= 0)
	{
		if (s[kwan] == '\0')
			break;
		kwan++;
	}
	for (kwan--; kwan >= 0; kwan--)
		_putchar(s[kwan]);
	_putchar('\n');
}
