#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a=10;
	char* pa=(char*)&a;
	if(*pa==1)
		printf("С��\n");
	else 
		printf("���\n");
return 0;
}

int check_sys(int pa)
{
	if(pa==1)
		return 1;
	else
		return 0;
}

int check_sys(int pa)
{
	return pa;
}

int main()
{
	int a=1;
	int* pa=&a;
	if(1==check_sys(*pa))
		printf("С��");
	else 
		printf("���");
	return 0;
}

//��
int main()
{
	char a=-1;//-1
	signed char c=-1;//-1
	unsigned char b=-1;//255
	printf("%d,%d,%d",a,b,c);
}
int main()
{
	char a=-128;
	printf("%u\n",a);

return 0;
}

//��
int main()
{
	int i=-20;
	unsigned int j=10;
	printf("%d\n",i+j);
	return 0;
}

//��
int main()
{
	unsigned int i;
	for(i=9;i>=0;i--)
	{
		printf("%u\n",i);
	}

return 0;
}