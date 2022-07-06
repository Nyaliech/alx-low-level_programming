#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, c;
	int y;

	a = 0;
	b = 0;
	c = 0;
	for (y = 0; y < 1024; ++y)
	{
		if ((y % 3) == 0)
		{
			a = a + y;
		} else if ((y % 5) == 0)
		{
			b = b + y;
		}
	}
	c = a + b;
	printf("%lu\n", c);
	return (0);
}
