#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int s, b, mkebe;

	for (s = 0; s < n - 1; s++)
	{
		for (b = s + 1; b > 0; b--)
		{
			mkebe = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = mkebe;
		}
	}
}
