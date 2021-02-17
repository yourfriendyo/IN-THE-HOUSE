#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/***************************************************/
//输入三个整数x,y,z，把这三个数由小到大排列
/***************************************************/
//int main()
//{
//	int x=0;
//	int y=0;
//	int z=0;
//	int t=0;
//	scanf("%d,%d,%d",&x,&y,&z);
//	if(x>y)
//	/**/
//	{
//		t=x;
//		x=y;
//		y=t;
//	}
//	if(x>z)
//	{
//		/**/
//		t=x;
//		x=z;
//		z=t;
//	}
//	if(y>z)
//	{
//		t=y;
//		y=z;
//		z=t;
//	}
//	printf("small to big:%d,%d,%d\n",x,y,z);
//return 0;
//}
//不管怎么样，都把x当作最小的，z当作最大的。
/***************************************************/
//把ch中的大写字母转换成字母序列的下一个大写字母，
//字母Z转换成字母A，
//其他字符不变，
//返回转换后的字符。
/***************************************************/
//int main ()
//{
//	char ch=0;
//	scanf("%c",&ch);
//	
//	if(ch=='Z')
//		/**/ch='A';
//	else if(ch>='A'/**/&&ch<='Y')
//		ch=/**/ch+1;
//	printf("%c\n",ch);
//return 0;
//}
/***************************************************/
//计算一元二次方程的根
/***************************************************/
//#include <math.h>
//int main()
//{
//	double x1=0;
//	double x2=0;
//	double imagpart=0;
//	
//	float a=0;
//	float b=0;
//	float c=0;
//	float disc=0;
//	float realpart=0;
//	scanf("%f%f%f",&a,&b,&c);
//	printf("the equation");
//	/**/
//	if(a<=1e-6)//a<0 无根
//		printf("is not quadratic\n");
//	else//计算逮他
//		disc=b*b-4*a*c;
//	if(fabs(disc)<=1e-6)//绝对值逮塌等于零：等根
//		printf("has two equal roots:%-8.4f\n",-b/2/a);
//	/**/
//	else if(fabs(a))//a大于零：异根
//	{
//		x1=(-b+sqrt(disc)/(2*a));
//		x2=(-b-sqrt(disc)/(2*a));
//		printf("has distinct real roots:%8.4f and %.4f\n",x1,x2);
//	}
//	else//复数根
//	{
//		realpart=-b/(2*a);
//		imagpart=sqrt(-disc)/(2*a);
//		printf("has complex roots \n");
//		printf("%8.4f+%.4fi",realpart,imagpart);
//		printf("%8.4f-%.4fi",realpart,imagpart);
//	}
//return 0;
//}
/***************************************************/
//企业发放的奖金根据利润提成；
//利润(i)低于或等于10万元时，奖金可提10%；
//利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10元的部分，可提成7.5%；
//20万到40万之间时，高于20万元的部分，可提成5%；
//40万到60万高于万元时,高于40万元的部分，可提成3%；
//60万到100万之间时，高于60万元的部分，可提成1.5%；
//高于100万时，超过100万元的部分，可提成1%；
//从键盘输入当月利润i，求应发放奖金总数。
/***************************************************/
//int main()
//{
//	long int i=0;
//
//	double bonus1=0;
//	double bonus2=0;
//	double bonus4=0;
//	double bonus6=0;
//	double bonus10=0;
//	double bonus=0;
//
//	scanf("%ld",&i);
//	bonus1=100000*0.1;
//	bonus2=bonus1+100000*0.75; 
//	bonus4=bonus2+200000*0.5;
//	bonus6=bonus4+200000*0.3;
//	bonus10=bonus6+400000*0.15;
//	if(i<=100000)
//		bonus=i*0.1;
//	/**/
//	else if(1<200000)
//		bonus=bonus1+(i-100000)*0.075;
//	/**/
//	else if(i<400000)
//		bonus=bonus2+(i-200000)*0.05;
//	/**/
//	else if(i<=600000)
//		bonus=bonus4+(i-400000)*0.03;
//	/**/
//	else if(i<=1000000)
//		bonus=bonus6+(i-600000)*0.015;
//	else
//	    bonus=bonus10+(i-1000000)*0.01;
//	/**/
//	printf("bonus=%f",bonus);
//	
//return 0;
//}
/***************************************************/
//输入某年某月某日，判断这一天是这一年的第几天
/***************************************************/
//int main()
//{
//	int day=0;
//	int month=0;
//	int year=0;
//	int sum=0;
//	int leap=0;
//	printf("please input year month and day\n");
//	scanf("%d,%d,%d",&year,&month,&day);
//	switch(month)
//	
//		case 1:sum=0;
//			break;
//		case 2:sum=31;
//			break;
//		case 3:sum=59;
//			break;
//		case 4:sum=90;
//			break;
//		case 5:sum=120;
//			break;
//		case 6:sum=151;
//			break;
//		case 7:sum=181;
//			break;
//		case 8:sum=212;
//			break;
//		case 9:sum=243;
//			break;
//		case 10:sum=273;
//			break;
//		case 11:sum=304;
//			break;
//		case 12:sum=334;
//			break;
//		default:
//			printf("date error");
//			break;
//	}
//	/**/
//	sum=sum+day;
//	/**/
//	if(year%400==0||(year%4==0&&year%100==0))
//		leap=1;
//	else 
//		leap=0;
//	/**/
//	if(leap&&month>2)
//		sum++;
//	printf("it is the %dth day.",sum);
//return 0;
//}
/***************************************************/
//给一个不多于5位的正整数，
//求出它的位数，
//逆序打印各位数字。
/***************************************************/
//int main()
//{
//	/**/
//	long a=0;//万
//	long b=0;//千
//	long c=0;//百
//	long d=0;//十
//	long e=0;//个
//	long x=0;//全部
//
//	scanf("%ld",&x);
//	//取出各位数字
//	a=x/10000;//万位
//	/**/
//	b=x%10000/1000;//千位
//	c=x%1000/100;//百位
//	d=x%100/10;//十位
//	e=x%10;//个位
//	//
//	/**/
//	if(a!=0)//5位数
//	    printf("there are 5,  %ld %ld %ld %ld %ld",e,d,c,b,a);
//	else if(b!=0)//4位数
//		printf("there are 4,  %ld %ld %ld %ld",d,c,b,a);
//	else if(c!=0)//3位数
//		printf("there are 3,  %ld %ld %ld",c,b,a);
//	else if(d!=0)//2位数
//		printf("there are 2,  %ld %ld",b,a);
//	else if(e!=0)//1位数
//		printf("there are 1,  %ld",a);
//	else//0位数
//		printf("there is none.");
//
//return 0;
//}
/***************************************************/
//输入两个运算数x,y和一个运算符号op,
//然后输出该运算结果的值（不考虑除数为零的情况）
/***************************************************/
//int main()
//{
//	float x=0;
//	float y=0;
//	float r=0;
//	char op=0;
//	/**/
//	scanf("%f%c%f",&x,&op,&y);
//	switch(op)
//	{
//	case '+':r=x+y;
//		break;
//	case '-':r=x-y;
//		break;
//	case '*':r=x*y;
//		break;
//	case '/':r=x/y;
//		break;
//	default:
//		printf("there is none choice,please choose again.\n");
//	}
//	printf("%f",r);
//return 0;
//}
/***************************************************/
//输入一个小写字母，将字母循环后移5个位置后输出。
//例如：'a'变成'f';
/***************************************************/
//int main()
//{
//	char c=0;
//	/**/
//	c=getchar();
//	/**/
//	if(c>='a'&&c<='u')
//		c=c+5;
//	else if(c>='v'&&c<='z')
//		c=c-21;
//	putchar(c);
//	printf("\n");
//
//return 0;
//}
/***************************************************/
//输入x的值，根据下列分段函数求解y的值
//    --
//    |  x  ,-5<=x<0
//    | x-1 ,  x=0
//y =-| x+2 , 0<x<10
//    | 2x+4, x>=10
//    --
/***************************************************/
//int main()
//{
//	int x=0;
//	int y=0;
//	printf("input x:");
//	scanf("%d",&x);
//	/**/
//	if(x>=-5&&x<0)
//		y=x;
//	/**/
//	else if(x==0)
//		y=x-1;
//	else if(x>0&&x<10)
//		y=x+2;
//	/**/
//	else if(x>=10)
//		y=2*x+4;
//	printf("x=%d,y=%d",x,y);
//
//return 0;
//}
/***************************************************/
//输入一个成绩等级，输出相应的分数范围
//。A等输出"85-100";B等输出"70-84";
//C等输出"60-69"D等输出"<60";
//其他情况输出"error"信息。
/***************************************************/
//int main()
//{
//	char grade;
//	scanf("%c",&grade);
//	switch(grade)
//	{
//	/**/
//	case 'A':printf("85-100\n");
//		break;
//	case 'B':printf("70-84\n");
//		break;
//	case 'C':printf("60-69\n");
//		break;
//	case 'D':printf("<60\n");
//		break;
//	default :printf("error\n");
//	}
//
//return 0;
//}