#define _CRT_SECURE_NO_WARNINGS 1
#include"boom.h"


void menu()
{
	printf("1,������Ϸ\n");
	printf("0.�˳���Ϸ\n");
}


void game()
{
	char board[ROWS][COLS] = {0};//���������ڴ���ף�����ӡ
	char show[ROWS][COLS] = {0};//����������չʾ
	Ini(board, ROWS, COLS, '0');//�����ʼ��
	Ini(show, ROWS, COLS, '*');//�����ʼ��
	Print(show, ROWS, COLS);//��ӡ����չʾ������
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
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
		 case 1:
			//printf("��Ϸ��ʼ\n");
			 game();
			 break;
		 case 0:
			printf("�˳���Ϸ\n");
			break;
		 default:
		 
			printf("����������\n");
			break;
		 
		}
	} while (input);

}
int main()
{
	test();
	
	return 0;

}