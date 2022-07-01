#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * main - Assign a rnadom number to the variables n each time
 * it is executed and prints out based conditon
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is negative\n", n);
}
return (0);
}
