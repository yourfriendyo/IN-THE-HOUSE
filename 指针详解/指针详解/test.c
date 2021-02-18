#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void test(int arr[])
{
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));
}
int main()
{
	int arr[10]={0};
	test(arr);

return 0;
}

int main()
{
	char ch='w';
	char* pch=&ch;

return 0;
}

int main()
{
	char arr[]="abcdefg";
	char* pa=arr;
	printf("%s\n",arr);
	printf("%s\n",pa);
return 0;
}

int main()
{
	char* p="abcdef";//常量字符串
	printf("%c\n",*p);
	printf("%s\n",p);

return 0;
}

int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcdef";
	const char* p1="abcdef";
	const char* p2="abcdef";
	
	if(arr1[1]==arr2[1])
		printf("arr1[1]==arr2[1]\n");
	else
		printf("arr1[1]!=arr2[1]\n");
	
	if(arr1==arr2)//arr1和arr2表示了两个不同数组的首地址
		printf("arr1==arr2\n");
	else
		printf("arr1!=arr2\n");
	if(p1==p2)//p1和p2只存了一份
		printf("p1==p2\n");
	else
		printf("p1!=p2\n");
    
	if(*p1==*p2)
		printf("*p1==*p2\n");
	else
		printf("*p1!=*p2\n");

}

/*指针数组*/
int main()
{
	//int arr1[10]={0}; 
	//char arr2[5]={0};
	int a=10;
	int b=20;
	int c=30;
	int d=40;
	int i=0;

	int* parr[4]={&a,&b,&c,&d};
	for(i=0;i<4;i++)
		printf("%d  ",*parr[i]);
	for(i=0;i<4;i++)
		printf("%d  ",parr[i]);

return 0;
}

int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={2,3,4,5,6};
	int arr3[]={3,4,5,6,7};
	int* parr[]={arr1,arr2,arr3};
	int i=0;
	int j=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
			printf("%d  ",*(parr[i]+j));
	printf("\n");
	}

return 0;
}


/*数组指针*/
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int (*parr)[10]=&arr;//数组指针
	char* arr[3]={0};
	char* (*parr)[3]=&arr;
return 0;
}

int main()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int i=0;
	//int (*parr)[10]=&arr;
	//for(i=0;i<10;i++)
	//	printf("%d ",(*parr)[i]);
	int* p=arr;
	for(i=0;i<10;i++)
		printf("%d ",*(p+i));

return 0;
}

void print1(int arr[3][5],int x,int y)
{
	int i=0;
	int j=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int (*p)[5],int x,int y)
{
	int i=0;
	int j=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",*(*(p+i)+j));
			printf("%d ",(*(p+i))[j]);
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);
	printf("\n");
	print2(arr,3,5);
return 0;
}

int main()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int* p=arr;
	int i=0;
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<10;i++)
		printf("%d ",p[i]);
	printf("\n");
	for(i=0;i<10;i++)
		printf("%d ",*(p+i));
	printf("\n");
	for(i=0;i<10;i++)
		printf("%d ",*(arr+i));
return 0;
}

/*数组传参*/
void test(int arr[3][5])
{}
void test1(int arr[][5])
{}
//void test2(int arr[3][])//err
{}
void test3(int arr[][])//err
{}
void test4(int* arr)//err
{}
void test5(int (*arr)[5])
int main()
{
	int arr[3][5]={0};
	test(arr);
	test1(arr);
	test2(arr);
	test3(arr);
	test4(arr);
	test5(arr);

return 0;
}

/*指针传参*/
void print1(int* p,int sz)
{
int i=0;
for(i=0;i<sz;i++)
	printf("%d ",*(p+i));
}
void print2(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
		//printf("%d ",arr[i]);
		printf("%d ",*(arr+i));
}
int main()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int* p=arr;
	int sz=sizeof(arr)/sizeof(arr[0]);
	print1(p,sz);
	print2(arr,sz);

return 0;
}

void test1(int* p)
{}
void test2(char* p)
{}
int main()
{
	int a=0;
	int* pa=&a;
	test1(&a);//传地址
	test1(pa);//穿指针变量

	char ch='w';
	char* pch=&ch
	test2(&ch);
	test2(pch);
	
return 0;
}

void test(char** ppch)
{
	printf("%d ",**ppch);
}

int main()
{
	char ch='a';
	char* pch=&ch;
	test(&pch);//传一级指针的地址
	char** ppch=&pch;
	test(ppch);//传二级指针
    int* arr[10];
    test(arr);//传指针数组的变量名
return 0;
}

/*函数指针*/
//指向函数的指针 - 存放函数地址的指针

//定义时  返回类型 （*指针名）（变量类型，变量类型）=函数名；
//使用时  （*指针名）（参数，参数）；

int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}

int main()
{
	//int a=10;
	//int b=20;
	//printf("%d\n",Add(a,b));
	//printf("%p\n",&Add);
	//printf("%p\n",Add);//&函数名和函数名都是函数地址

    int (*pa)(int,int)=Add;
    printf("%d\n",pa(2,3));
    printf("%d\n",(*pa)(2,3));

return 0;
}

void print(char* str)
{
	printf("%s\n",str);
}

int main()
{
	void (*p)(char*)=print;
	(*p)("hello bitch!");
return 0;
}

/*函数指针数组*/
int Add(int x,int y)
{
return x+y;
}
int Sub(int x,int y)
{
return x-y;
}
int Mul(int x,int y)
{
return x*y;
}
int Div(int x,int y)
{
return x/y;
}

int main()
{
	int i=0;
	int* arr[5];
	int (*pa)(int,int)=Add;
	//存放函数指针的指针数组
	int (*p[4])(int,int)={Add,Sub,Mul,Div};
	for(i=0;i<4;i++)
		printf("%d\n",(*p[i])(2,3));
return 0;
}

//char* my_strcpy(char* dest,char* src)
//①写一个函数指针pf，能够指向my_strcpy；
//②写一个函数指针数组pfarr，能够存放4个my_strcpy的地址；

char* my_strcpy(char* dest,char* src)
{}

int main()
{
	char* (*pf)(char*,char*)=my_strcpy;//①
	void (*pfarr[4])={my_strcpy,my_strcpy,my_strcpy,my_strcpy};//②
return 0;
}

/*函数指针用途：计算器*/
void menu()
{
	printf("***************************************\n");
	printf("******* 1.ADD  *********  2.SUB *******\n");
	printf("******* 3.MUL  *********  4.DIV *******\n");
	printf("************* * 0. EXIT * *************\n");
}
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

//使用函数指针数组优化
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d\n", &input);
		if (input >= 1 && input <= 4)
		{
			int ret = pfArr[input](x, y);
			printf("请输入操作数:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", ret);
		}

		else if (input == 0)
			printf("退出\n");

		else
			printf("请重新选择\n");

	} while (input);

	return 0;
}

//仅能计算两个数
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d\n", &input);
		if (input != 0)
		{
			printf("请输入两个数:>");
			scanf("%d%d", &x, &y);
		}
		switch (input)
		{
		case 1:
			printf("%d\n", Add(x, y));
			break;
		case 2:
			printf("%d\n", Sub(x, y));
			break;
		case 3:
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("请重新选择");
			break;
		}
	} while (input);

	return 0;
}





