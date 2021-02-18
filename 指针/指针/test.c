#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//printf("%d\n",sizeof(char*));//4
	//printf("%d\n",sizeof(short*));//4
	//printf("%d\n",sizeof(int*));//4
	//printf("%d\n",sizeof(double*));//4
	int a = 0x11223344;
	int* pa = &a;
	//char* pc=&a;
	//printf("%p\n",pa);
	//printf("%p\n",pa);

	return 0;
}

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		*p = i;
		p++;
	}
	for (i = 0; i < 10; i++)
		printf("arr[%d]=%d\n", i, arr[i]);
	return 0;
}

/*指针加减整数*/
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *p++);

	}
	return 0;
}

/*指针减指针*/
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "yourfriendyo";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

/*指针关系运算*/
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;//二级指针
	int*** pppa = &ppa;
	printf("%d\n", *pa);
	printf("%d\n", **ppa);
	printf("%d\n", ***pppa);


	return 0;
}

/*指针数组*/
int main()
{
	int i = 0;
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[] = { &a,&b,&c };
	for (i = 0; i < 3; i++)
	{
		printf("&arr[%d]=%d\n", i, arr[i]);
		printf(" arr[%d]=%d\n", i, *arr[i]);
	}

	return 0;
}