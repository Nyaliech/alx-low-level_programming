#include <stdio.h>
/**
 * main - prints the 98 numbers of fibonacci
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c;
	int x;

	for (x = 2; x < 98; x++)
{
	c = a + b;
	if (x != 98)
	{
		printf("%lu, ", c);
	}
	else
	{
		printf("%lu\n", c);
	}
	a = b;
	b = c;
}
return (0);
}
