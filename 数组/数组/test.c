#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr[] = { 'a','b','c','d' };
	//int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	char arr2[10] = { 'a','b','c' };
	//printf("%s\n",arr2);
	//printf("%c\n",arr2[1]);
	printf("%d", sz);
	return 0;
}

//打印出每个数组元素的地址
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}
	return 0;
}

//打印二维数组arr
int main()
{
	int arr[3][4] = { {1,2,3},4,5 };   //1       2       3       0       
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)            //4       5       0       0
	{
		for (j = 0; j < 4; j++)        //0       0       0       0
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n"); printf("\n"); printf("\n");
	}
	return 0;
}
//打印二维数组arr的地址
int main()
{
	int arr[3][4] = { {1,2,3},4,5 };      //arr[0][0]=008FFB94      arr[0][1]=008FFB94      arr[0][2]=008FFB94      arr[0][3]=008FFB94
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)               //arr[1][0]=008FFB94      arr[1][1]=008FFB94      arr[1][2]=008FFB94      arr[1][3]=008FFB94
	{
		for (j = 0; j < 4; j++)           //arr[2][0]=008FFB94      arr[2][1]=008FFB94      arr[2][2]=008FFB94      arr[2][3]=008FFB94
		{
			printf("arr[%d][%d]=%p\t", i, j, &arr);
		}
	}
	return 0;
}

//对arr数组进行冒泡排序
void bubble_sort(int arr[], int size)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
		printf("%d  ", arr[i]);
	printf("\n");
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
		printf("%d  ", arr[i]);
	return 0;
}
