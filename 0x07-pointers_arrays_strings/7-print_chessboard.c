#include "main.h"
/**
 * print_chessboard - print a chess board
 * @a: dimension
 * Return: void
 */
void print_chessboard(char (*a)[8])
{

	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf(" ");
		}
		printf("\n");
	}

	for (i = 6; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
