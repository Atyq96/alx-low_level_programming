#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: rows
 * Return: nothing.
 */

void print_chessboard(char (*a)[8])
{
	int num, nt;

	for (num = 0; num < 8; num++)
	{
		for (nt = 0; nt < 8; nt++)
		{
			_putchar(a[num][nt]);
		}
		_putchar('\n');
	}
}
