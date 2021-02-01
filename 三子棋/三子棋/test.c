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

//游戏算法实现
void game()
{   
	//定义棋盘数组
	char board[ROW][COL]={0};
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
}
void test()
{
	int input=0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("三子棋\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("无效，请重新选择\n");
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