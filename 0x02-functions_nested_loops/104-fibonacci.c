#include <stdio.h>

/**
 * main - prints the first 98 Fibonnacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, hold, hold2;
	long int a, b, c, d, e, f;

	a = 1;
	b = 2;
	hold = hold2 = 1;
	printf("%ld, %ld", a, b);
	for (x = 1; x <= 96; x++)
	{
		if (hold)
		{
			c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	else
	{
		if (hold2)
		{
			e = a % 1000000000;
			f = b % 1000000000;
			a = a / 1000000000;
			b = b / 1000000000;
			hold2 = 0;
		}
		d = (e + f);
		d = a + b + (d / 1000000000);
		printf(", %ld", c);
		printf("%ld", d % 1000000000);
		a = b;
		e = f;
		b = c;
		f = (d % 1000000000);
				}
				if (((a + b) < 0) && hold == 1)
				hold = 0;
				}
				printf("\n");
				return (0);
				}
