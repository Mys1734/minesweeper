#define _CRT_SECURE_NO_WARNINGS 1
#include"boom.h"



void Ini(char Board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			Board[i][j] = set;
		}
	}
}

void Print(char Board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= COL; i++)
	{
		printf(" %d", i);
	}
	printf("\n");
	for (i = 1; i <=ROWS - 2; i++)
	{
		printf("%d", i);
		for (j = 1; j <= COL; j++)
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}
}

void Place(char Board[ROWS][COLS], int rows, int cols)
{
	int count = COUNT_1;
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (Board[x][y] == '0')
		{
			Board[x][y] = '1';
			count--;
		}
	}

}

void Judge(char board[ROWS][COLS],char show [ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (x <= 9 && x >= 1 && y >= 1 && y <= 9)
		{
			if (board[x][y] == '1')
			{
				printf("你被炸死了\n");
				Print(board, row, col);
				break;
			}
			else
			{
				int c = count2(board,x, y);
				show[x][y] = (char)(c + '0');;
				Print(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标无效，请重新输入");
		}
	}
	if (win == ROW * COL - COUNT_1)
	{
		printf("你赢了\n");
		Print(board, ROW, COL);
	}
}

int count2(char board[ROWS][COLS], int x, int y)
{
	int z = 0;
	int a = 0;
	int b = 0;
	for (a = x - 1; a <= x + 1; a++)
	{
		for (b = y - 1; b <= y + 1; b++)
		{
			if (board[a][b] == '1')
				z++;
		}
	}
	return z;
}