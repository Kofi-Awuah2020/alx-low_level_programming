#include "main.h"

/**
 * print_chessboard - function prints the 2d array chessboard.
 *
 * @a: 2d array
 *
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
