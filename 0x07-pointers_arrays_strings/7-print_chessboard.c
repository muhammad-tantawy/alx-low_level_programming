#include "main.h"

/**
 *print_chessboard - prints chessboard
 *@a:array for the chess board
 *
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int ascii;
	char c = a[i][j];
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			ascii = (int)c;
			if (ascii == 32 || ascii == 9)
			{
				printf(". ");
			}
			else
			{
				printf("%c ", c);
			}
		}
		printf("\n");
	}
}
