#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*************************************\n");
	printf("******* 1:play  *****  2:exit *******\n");
	printf("*************************************\n");
}

//    |   |   
// ---|---|---
//    |   |   
// ---|---|---
//    |   |   

//��Ϸ�㷨ʵ��
void game()
{   
	//������������
	char board[ROW][COL]={0};
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
}
void test()
{
	int input=0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("������\n");
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("��Ч��������ѡ��\n");
				break;
		}
	}
	while(input);
}
int main()
{
	test();

return 0;
}