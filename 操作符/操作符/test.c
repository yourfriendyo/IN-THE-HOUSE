#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*算术操作符*/
int main()
{
	int a=5/2;
	int b=5%2;
	printf("5/2=%d\n",a);
	printf("5%2=%d\n",b);
return 0;
}
/*移位操作符*/
int main()
{
	int a=16;
	int b=a>>1;
	int c=b>>1;
	int d=a<<1;
	int f=b<<1;
	printf("%d\n",b);//8
	printf("%d\n",c);//4
	printf("%d\n",d);//32
	printf("%d\n",f);//64
return 0;
}
/*位操作符*/
int main()
{
	a - 00000000000000000000000000000011
	b - 00000000000000000000000000000101
	c - 00000000000000000000000000000001
    int a=3;
	int b=5;
	int c=a&b;
	printf("%d\n",c);//1
	
	a - 00000000000000000000000000000011
	b - 00000000000000000000000000000101
	c - 00000000000000000000000000000111
	int a=3;
	int b=5;
	int c=a|b;
	printf("%d\n",c);//7
	
	a - 00000000000000000000000000000011
	b - 00000000000000000000000000000101
	c - 00000000000000000000000000000110
	int a=3;
	int b=5;
	int c=a^b;
	printf("%d\n",c);//6

return 0;
}

/*单目操作符*/
int main()
{
	int a=1;
	char c='&';
	char* p=&c;
	int arr1[10]={0};
	char arr2[10]={"aalbjkgr"};
	  printf("sizeof(a)=%d\n",sizeof a);//4
    printf("sizeof(c)=%d\n",sizeof c);//1
    printf("sizeof(p)=%d\n",sizeof p);//4

    printf("sizeof(int)=%d\n",sizeof(int));//4
    printf("sizeof(char)=%d\n",sizeof(char));//1
    printf("sizeof(char*)=%d\n",sizeof(char*));//4

    printf("sizeof(arr1)=%d\n",sizeof arr1);//40
    printf("sizeof(arr2)=%d\n",sizeof arr2);//10
	
return 0;
}

int main()
{ 
	//~ - 按（二进制）位取反
	// a - 00000000000000000000000000000000 a的原码
	//   - 11111111111111111111111111111111 a的补码
	//   - 11111111111111111111111111111110 ~a的反码
	//   - 10000000000000000000000000000001 ~a的原码
	//int a=0;
	//printf("%d\n",~a);

	//案例
	//00000000000000000000000000001011 - 11
	//00000000000000000000000000000100 - 4
	//00000000000000000000000000001111 - 15
	//11111111111111111111111111111011 - ~4=~1<<2
	//15&(~4)=11
	//int a=11;
	//int b=0;
	//a=a|1<<2;
	//printf("%d\n",a);
	//b=( ~(1<<2) ) & a;
	//printf("最初的a就被我用15&上这么一个~4就又&回来了=%d",b);
	
	//(类型) - 强制类型转换
	//int a=(int)3.14;
	//printf("%d",a);

return 0;
}

//结构成员操作符
struct stu 
{
	//成员变量
	char name[20];
	char age[20];
	char number[20];

};
int main()
{
	struct stu s1={"你的闺蜜吆吆","20","2020313222"};
	struct stu* ps=&s1;
	//.
	printf("%s\n",s1.name);
	printf("%s\n",s1.age);
	printf("%s\n",s1.number);
	printf("\n");
	printf("%s\n",(*ps).name);
	printf("%s\n",(*ps).age);
	printf("%s\n",(*ps).number);
	printf("\n");
	//->
	printf("%s\n",ps->name);
	printf("%s\n",ps->age);
	printf("%s\n",ps->number);

    return 0;
}
  