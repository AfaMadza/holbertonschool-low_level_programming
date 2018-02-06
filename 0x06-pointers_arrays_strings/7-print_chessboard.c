#include "holberton.h"
/**
 * print_chessboard - prints a chess board
 *
 * @a: pointer to a multi-dimensional array.
 * Return: None
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
