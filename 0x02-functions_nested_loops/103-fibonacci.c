#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long int e, f, g, h;

	e = 1;
	f = 2;
	h = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (e < 4000000 && (e % 2) == 0)
		{
			h = h + e;
		}
		g = e + f;
		e = f;
		f = g;
	}
		printf("%lu\n", h);
		return (0);
	}
