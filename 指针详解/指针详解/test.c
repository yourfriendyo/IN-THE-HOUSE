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
	char* p="abcdef";//�����ַ���
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
	
	if(arr1==arr2)//arr1��arr2��ʾ��������ͬ������׵�ַ
		printf("arr1==arr2\n");
	else
		printf("arr1!=arr2\n");
	if(p1==p2)//p1��p2ֻ����һ��
		printf("p1==p2\n");
	else
		printf("p1!=p2\n");
    
	if(*p1==*p2)
		printf("*p1==*p2\n");
	else
		printf("*p1!=*p2\n");

}

/*ָ������*/
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


/*����ָ��*/
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int (*parr)[10]=&arr;//����ָ��
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

/*���鴫��*/
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

/*ָ�봫��*/
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
	test1(&a);//����ַ
	test1(pa);//��ָ�����

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
	test(&pch);//��һ��ָ��ĵ�ַ
	char** ppch=&pch;
	test(ppch);//������ָ��
    int* arr[10];
    test(arr);//��ָ������ı�����
return 0;
}

/*����ָ��*/
//ָ������ָ�� - ��ź�����ַ��ָ��

//����ʱ  �������� ��*ָ���������������ͣ��������ͣ�=��������
//ʹ��ʱ  ��*ָ����������������������

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
	//printf("%p\n",Add);//&�������ͺ��������Ǻ�����ַ

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

/*����ָ������*/
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
	//��ź���ָ���ָ������
	int (*p[4])(int,int)={Add,Sub,Mul,Div};
	for(i=0;i<4;i++)
		printf("%d\n",(*p[i])(2,3));
return 0;
}

//char* my_strcpy(char* dest,char* src)
//��дһ������ָ��pf���ܹ�ָ��my_strcpy��
//��дһ������ָ������pfarr���ܹ����4��my_strcpy�ĵ�ַ��

char* my_strcpy(char* dest,char* src)
{}

int main()
{
	char* (*pf)(char*,char*)=my_strcpy;//��
	void (*pfarr[4])={my_strcpy,my_strcpy,my_strcpy,my_strcpy};//��
return 0;
}

/*����ָ����;��������*/
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

//ʹ�ú���ָ�������Ż�
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d\n", &input);
		if (input >= 1 && input <= 4)
		{
			int ret = pfArr[input](x, y);
			printf("�����������:>");
			scanf("%d%d", &x, &y);
			printf("%d\n", ret);
		}

		else if (input == 0)
			printf("�˳�\n");

		else
			printf("������ѡ��\n");

	} while (input);

	return 0;
}

//���ܼ���������
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d\n", &input);
		if (input != 0)
		{
			printf("������������:>");
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
			printf("�˳�\n");
			break;
		default:
			printf("������ѡ��");
			break;
		}
	} while (input);

	return 0;
}





