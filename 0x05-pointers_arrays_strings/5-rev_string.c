#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: no return
 */

void rev_string(char *s)
{
	int kwan = 0, a, b;
	char *str, jok;

	while (kwan >= 0)
	{
		if (s[kwan] == '\0')
			break;
		kwan++;
	}
	str = s;

	for (a = 0; a < (kwan - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			jok = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = jok;
		}
	}
}
