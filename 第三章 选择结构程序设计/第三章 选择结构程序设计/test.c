#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/***************************************************/
//������������x,y,z��������������С��������
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
//������ô��������x������С�ģ�z�������ġ�
/***************************************************/
//��ch�еĴ�д��ĸת������ĸ���е���һ����д��ĸ��
//��ĸZת������ĸA��
//�����ַ����䣬
//����ת������ַ���
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
//����һԪ���η��̵ĸ�
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
//	if(a<=1e-6)//a<0 �޸�
//		printf("is not quadratic\n");
//	else//�������
//		disc=b*b-4*a*c;
//	if(fabs(disc)<=1e-6)//����ֵ���������㣺�ȸ�
//		printf("has two equal roots:%-8.4f\n",-b/2/a);
//	/**/
//	else if(fabs(a))//a�����㣺���
//	{
//		x1=(-b+sqrt(disc)/(2*a));
//		x2=(-b-sqrt(disc)/(2*a));
//		printf("has distinct real roots:%8.4f and %.4f\n",x1,x2);
//	}
//	else//������
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
//��ҵ���ŵĽ������������ɣ�
//����(i)���ڻ����10��Ԫʱ���������10%��
//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10Ԫ�Ĳ��֣������7.5%��
//20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
//40��60�������Ԫʱ,����40��Ԫ�Ĳ��֣������3%��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
//����100��ʱ������100��Ԫ�Ĳ��֣������1%��
//�Ӽ������뵱������i����Ӧ���Ž���������
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
//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ���
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
//��һ��������5λ����������
//�������λ����
//�����ӡ��λ���֡�
/***************************************************/
//int main()
//{
//	/**/
//	long a=0;//��
//	long b=0;//ǧ
//	long c=0;//��
//	long d=0;//ʮ
//	long e=0;//��
//	long x=0;//ȫ��
//
//	scanf("%ld",&x);
//	//ȡ����λ����
//	a=x/10000;//��λ
//	/**/
//	b=x%10000/1000;//ǧλ
//	c=x%1000/100;//��λ
//	d=x%100/10;//ʮλ
//	e=x%10;//��λ
//	//
//	/**/
//	if(a!=0)//5λ��
//	    printf("there are 5,  %ld %ld %ld %ld %ld",e,d,c,b,a);
//	else if(b!=0)//4λ��
//		printf("there are 4,  %ld %ld %ld %ld",d,c,b,a);
//	else if(c!=0)//3λ��
//		printf("there are 3,  %ld %ld %ld",c,b,a);
//	else if(d!=0)//2λ��
//		printf("there are 2,  %ld %ld",b,a);
//	else if(e!=0)//1λ��
//		printf("there are 1,  %ld",a);
//	else//0λ��
//		printf("there is none.");
//
//return 0;
//}
/***************************************************/
//��������������x,y��һ���������op,
//Ȼ���������������ֵ�������ǳ���Ϊ��������
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
//����һ��Сд��ĸ������ĸѭ������5��λ�ú������
//���磺'a'���'f';
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
//����x��ֵ���������зֶκ������y��ֵ
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
//����һ���ɼ��ȼ��������Ӧ�ķ�����Χ
//��A�����"85-100";B�����"70-84";
//C�����"60-69"D�����"<60";
//����������"error"��Ϣ��
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