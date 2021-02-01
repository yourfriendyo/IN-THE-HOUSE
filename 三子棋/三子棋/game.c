#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		board[i][j]=' ';
		}
	}
}
void DispayBoard(char board[ROW][COL],int row,int col)
{
	int i;
	for(i=0;i<row;i++)
	{
		//打印数据行
		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
		//打印分割线
		if(i<3)
		printf("---|---|---\n");
	}





}