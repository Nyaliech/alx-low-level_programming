#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **neno;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);
	neno = malloc(height * sizeof(int *));
	if (neno == NULL)
	{
		free(neno);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		neno[a] = malloc(width * sizeof(int));
		if (neno[a] == NULL)
	{
		for (a--; a >= 0; a--)
			free(neno[a]);
		free(neno);
		return (NULL);
	}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			neno[a][b] = 0;
	return (neno);
}
