#include <stdio.h>

//①
//打印小飞机
int main()
{
    printf("     **     \n");
    printf("     **     \n");
    printf("************\n");
    printf("************\n");
    printf("    *  *    \n");
    printf("    *  *    \n");
 
return 0;
}

//②
//十六进制转换十进制
int main()
{
    printf("%15d",0xABCDEF);
	printf("%#x",0xABCDEF);
    
return 0;
}

//③
//printf的返回值
int main()
{
    int ret=printf("Hello world!");
	printf("\n");
    printf("%d",ret);

	printf("\n%d",printf("hello world!"));
    //先调用第一个printf但是先执行第二个printf

return 0;
}

//Return Value
//Each of these functions returns the number of characters printed,
//or a negative value if an error occurs.

int main()
{
	printf("%d",printf("%d",printf("%d",43)));//4321

return 0;
}

//④
//学生基本信息输入输出
int main()
{
	int id=0;
	float c_score=0.0;
	float math_score=0.0;
	float eng_score=0.0;
	//输入
	scanf("%d;%f,%f,%f",&id,&c_score,&math_score,&eng_score);
	//输出
	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.",id,c_score,math_score,eng_score);
	
    return 0;
}

//⑤
//判断字母
#include<ctype.h>
//isalpha函数专门用来判断字母的
//是则返回非零值
//否返回0
int main()
{
    int ch=0;
	//getchar的返回值类型为整型
	//输入
    while((ch=getchar())!=EOF)
    {
		if(isalpha(ch))
	    {
            printf("YES\n");
        }
        else
		{
		    printf("NO\n");
        }


		//判断并输出
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    getchar();//处理\n
    }

return 0;
}

//⑥
//字符金字塔
int main()
{
    char a=0;
	int i=0;
	int j=0;
    
	scanf("%c",&a);
    printf("    %c\n",a);
    printf("   %c %c\n",a,a);
    printf("  %c %c %c\n",a,a,a);
    printf(" %c %c %c %c\n",a,a,a,a);
    printf("%c %c %c %c %c\n",a,a,a,a,a);
    //输入一个字符
	a=getchar();
	//输出金字塔

	//每循环一次，打印一行
	//每行由两部分组成，空格和字符
	for(i=0;i<5;i++)
	{
		//循环打印空格
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		//循环打印字符
		for(j=0;j<i;j++)
		{
			printf("%d ",a);
		}
		printf("\n");
	}

return 0;
}

//⑦
//ACSII码

int main()
{
    int i=0;
    int arr[]={73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33};
	//计算数组的元素个数
	int sz=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        printf("%c",arr[i]);
    }
    
return 0;
}

//⑧
int main()
{
    int year=0;
    int month=0;
    int date=0;
	//安照格式输入
    scanf("%4d%2d%2d",&year,&month,&date);
	//通过scanf函数的%m格式控制可以指定输入域宽，
	//输入数据域宽，按此宽度截取所需数据
	//按照格式输出
    printf("year=%4d\nmonth=%02d\ndate=%02d\n",year,month,date);
	//printf函数的%0格式控制符，输出数值时可使左边空位自动补0

return 0;
}

//⑨
//2的n次方运算
//不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算
int main()
{	
	int a=1;
	int n=0;

	while((scanf("%d",&n))!=EOF)
	//scanf和wscanf都返回成功转换和分配的字段数
	{
		printf("%d\n",a<<n);		
	}
		
return 0;
}

//⑩
//按格式输入并交换输出
int main()
{
    int a=0;
    int b=0;
    int t=0;
    scanf("a=%d,b=%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("a=%d,b=%d",a,b);
    
return 0;
}

//⑪
//字符转ACSII码值
int main()
{
    char a=0;
    scanf("%c",&a);
    printf("%d",a);

return 0;
}

//⑫
//计算机表达式的值
int main()
{
    int a=40;
    int c=212;
    printf("%d",(-8+22)*a-10+c/2);

return 0;
}

//⑬
//计算带余除法
int main()
{
	int a=0;
	int b=0;
	scanf("%d %d",&a,&b);
	printf("%d %d",a/b,a%b);

return 0;
}