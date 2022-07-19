#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 *  @a: input pointer
 *   @size: size of the matrix
 *
 *   Return: no return
 */                                                                                                                        
void print_diagsums(int *a, int size)
{
	int z, medo = 0, kendo = 0;

	for (z = 0; z < (size * size); z++)
	{
		if (z % (size + 1) == 0)
			medo += *(a + z);
		if (z % (size - 1) == 0 && z != 0 && z < size * size - 1)
			kendo += *(a + z);
	}
	printf("%d, %d\n", medo, kendo);
}
