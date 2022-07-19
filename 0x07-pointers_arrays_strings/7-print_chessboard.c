#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer
 *
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	unsigned int y, z = 0;

	for (y = 0; y < 64; y++)
	{
		if (y % 8 == 0 && y != 0)
		{
			z = y;
			_putchar('\n');
		}
		_putchar(a[y / 8][y - z]);
	}
	_putchar('\n');
}
