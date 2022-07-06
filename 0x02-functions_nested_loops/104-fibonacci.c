#include <stdio.h>
#define LARGEST 1000000000
/**
 * main - finds and prints the first 98 Fibonacci numberst
 * starting with 1 and 2
 * followed by a new line
 * Return: Always0 (Success)
 */
int main(void)
{
	unsigned long int a = 0, b = 1, c = 0, d = 2;
	unsigned long int e, f, g;
	int kwan;

	printf("%lu, %lu, ", b, d);
	for (kwan = 1; kwan < 98; kwan++)
	{
		if (b + d > LARGEST || c > 0 || a > 0)
		{
			e = (b + d) / LARGEST;
			f = (b + d) % LARGEST;
			g = a + c + e;
			a = c, c = g;
			b = d, d = f;
			printf("%lu%010lu", c, d);
					}
					else
					{
					f = b + d;
					b = d, d = f;
					printf("%lu", d);
					}
					if  (kwan != 98)
					printf(", ");
					}
					printf("\n");
					return (0);
					}
