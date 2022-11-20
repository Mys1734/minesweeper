 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT_1 10


void Ini(char Board[ROWS][COLS], int rows, int cols, char set);
void Print(char Board[ROWS][COLS], int rows, int cols);
void Place(char Board[ROWS][COLS], int rows, int cols);
void Judge(char Board[ROWS][COLS], char arr[ROWS][COLS], int rows, int cols);
int count2(char Board[ROWS][COLS], int rows, int cols);
