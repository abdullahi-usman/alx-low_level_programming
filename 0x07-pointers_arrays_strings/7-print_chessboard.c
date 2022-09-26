#include "putchar.h"
/**
 * print_chessboard - print the chess board
 * @a: the string
 *
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (j = 0; j < (int)sizeof(a); j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
