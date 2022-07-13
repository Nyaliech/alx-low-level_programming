#include "main.h"

/**
 * puts2 - printsevery other character of a string
 * starting with the 1 character
 * followed by a new line
 * @str: input string
 * Return: no return
 */

void puts2(char *str)
{
	int kwan = 0;

	while (kwan >= 0)
	{
		if (str[kwan] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (kwan % 2 == 0)
			_putchar(str[kwan]);
		kwan++;
	}
}
