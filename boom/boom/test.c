#define _CRT_SECURE_NO_WARNINGS 1
#include"boom.h"


void menu()
{
	printf("1,进入游戏\n");
	printf("0.退出游戏\n");
}


void game()
{
	char board[ROWS][COLS] = {0};//该数组用于存放雷，不打印
	char show[ROWS][COLS] = {0};//该数组用于展示
	Ini(board, ROWS, COLS, '0');//数组初始化
	Ini(show, ROWS, COLS, '*');//数组初始化
	Print(show, ROWS, COLS);//打印用于展示的数组
	Place(board, ROW, COL);
	Print(board, ROWS, COLS);
	Judge(board, show, ROWS, COLS);


}

void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		 case 1:
			//printf("游戏开始\n");
			 game();
			 break;
		 case 0:
			printf("退出游戏\n");
			break;
		 default:
		 
			printf("请重新输入\n");
			break;
		 
		}
	} while (input);

}
int main()
{
	test();
	
	return 0;

}