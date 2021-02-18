#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/***********************************************/
//用数学表达式：             
//  pi   1   1   1   1   1    
//  -- = - - - + - - - + - - ...  
//  4    1   3   5   7   9   
//求圆周率pi的近似值。
//直到发现某一项的绝对值小于0.000001为止（该项不累加）
/***********************************************/
#include <math.h>
int main()
{
	int f=1;//分子
	/**/
	double n=1.0;//分母
	double t=1;//项
	double pi=1;//总和（初始值为第一项）
	/**/
	while(fabs(t)>=1e-6)//从第二项开始循环
	{
		n=n+2;//分母每次+2
		/**/
		f=-f;//分子每次换号±
		t=f/n;//合成每次的项
		pi=pi+t;//每次循环加起来
	}

	pi=pi*4;
	printf("pi=%10.6f\n",pi);

return 0;
}
/***********************************************/
//对任意整数n(n≠0),它都可以分解成1(或-1)和一些质数（素数）因子的形式
//例如：当n=150时，可分解成1×2×3×5×5；
/***********************************************/
int main()
{
	int n=0;
	int i=0;
	int r=0;
	scanf("%d",&n);

	if(n==0)
	{
		printf("data error\n");
		exit(0);
		//函数名：exit()
		//所在头文件：stdlib.h
		//功能: 关闭所有文件，终止正在执行的进程。
		//exit(0)：表示正常退出；exit(1):表示异常退出。
		//所以我们在设计程序时，可以在推出前给一些小的提示信息，或者在调试程序的过程中查看出错原因。
		//exit()通常是用在子程序中用来终结程序用的，使用后程序自动结束，跳回操作系统。
	}

	/**/
	else if(n>0)
		printf("n=1");
	   else
		 {
			 printf("n=-1");
			 n=-n;//如果是负数转换成正数来算
	     }
	/**/
	for(i=2;i<=n;i++)
	{
		r=n%i;
		while(r==0)//找到可以整除的数以循环
		{
			printf("*%d",i);
			/**/
			n=n/i;
			r=n%i;
		}
	    printf("\n");
	}
return 0;
}
/***********************************************/
//输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9 
//4*1=4 4*2=8 4*3=12 4*4=16
//5*1=5 5*2=1 5*3=15 5*4=20 5*5=25
//6*1=6 6*2=12 6*3=18 6*4=24 6*5=30 6*6=36
//7*1=7 7*2=14 7*3=21 7*4=28 7*5=35 7*6=42 7*7=49
//8*1=8 8*2=16 8*3=24 8*4=32 8*5=40 8*6=48 8*7=56 8*8=64
//9*1=9 9*2=18 9*3=27 9*4=36 9*5=45 9*6=54 9*7=63 9*8=72 9*9=81
/***********************************************/
int main()
{
	int i=0;
	int j=0;
	int result=0;
	/**/
	for(i=1;i<10;i++)
	{
		/**/
		for(j=1;j<=i;j++)
		{
			result=i*j;
			printf("%d*%d=%-3d",i,j,result);
		}
	printf("\n");
	}
	
return 0;
}
/***********************************************/
//求整数n和m之间的素数，并统计个数。
//main函数输出n和m，并统计n和m之间的素数，输出素数和其个数。
//输出格式：每行10个，每个素数占位宽度为4。
//    2    3    5    7   11   13   17   19   23   29
//   31   37   41   43   47   53   59   61   67   71
//   73   79   83   89   97
//Total:25
/***********************************************/
#include <math.h>
int main()
{
	int i=0;
	int j=0;
	int k=0;
	int n=0;
	int m=0;
	int count=0;

	/**/
	scanf("%d-%d",&m,&n);//最小值和最大值
	if(m<2)
		m=2;
	for(i=m;i<=n;i++)
	{
		for(k=2;k<=sqrt(i);k++)//
		{
			if(i%k==0)
				break;
		}
	    
		if(k>sqrt(i))//输出数字
	    {
		    printf("%4d",i);
		    count++;
		    /**/
		    if(count%10==0)
			printf("\n");
	    }
	}
	printf("\n");
	printf("Total:%d\n",count);

return 0;
}
/***********************************************/
//有以下程序段，且变量已正确定义和赋值
  for(s=1.0;k=1;k<=n;k++)
	    s=s+1.0/(k*(k+1));
  printf("s=s%f\n\n",s);
/***********************************************/
int main()
{
	/**/
    double s=1.0;//初始化条件
	int k=1;
	int n=0;
	/**/
	while(k<=n)//判断条件
	{
		s=s+1.0/(k*(k+1));//循环体
	    /**/
		k++;//调整条件
	}
	printf("s=%f\n\n",s);

return 0;
}
/***********************************************/
//将一个正整数n的各位数字颠倒。
//例如输入257，则输出应该是752。
/***********************************************/
int main()
{
	long n=0;
	long sum=0;
	printf("Please enter a number:\n");
	/**/
	scanf("&ld",&n);
	while(n)
	{
		/**/
		sum=n%10;//找到n的末位数
		/**/
		n/=10;//抹去n的末位数
	}
	printf("%ld\n",sum);

return 0;
}
/***********************************************/
//输出Fabonacci数列的前20项，
//要求变量类型定义成浮点型，
//输出时只输出整数部分。
/***********************************************/
void fun()
{
	int i=0;
	float f1=1;
	float f2=1;
	float sum=0;
	/**/
	printf("%8.0f ",f1);//先输出第一项
	/**/
	for(i=0;i<20;i++)
	{
		sum=f1+f2;//
		/**/
		f1=f2;
		/**/
		f2=sum;//f2=前两项之和
		printf("%8.0f ",f1);
	}
	printf("\n");
}
int main()
{
    fun();

return 0;
}
/***********************************************/
计算正整数num的各位上的数字之积。
/***********************************************/
int main()
{
	int num=0;
	/**/
	int k=1;
	printf("\nplease enter a number\n");
	scanf("%d",&num);
	do
	{
		k*=num%10;//计算每一次的num的末位数的乘积
		num/=10;//每次循环抹去num的末位数
	}
	while(num);
	printf("%d\n",k);
return 0;
}
/***********************************************/
//找出一个大于给定整数m且紧随m的素数。
/***********************************************/
int main()
{
	int i=0;
	int m=0;
	int k=0;
	printf("\nplease enter m:");
	scanf("%d\n",&m);
	for(i=m+1;;i++)
	{
		for(k=2;k<i;k++)
		{
			/**/
		    if(i%k==0)//判断i是否为素数，可整除则立即跳出循环
			    break;
		}   
			/**/
		    if(i==k)//防i=2的时候
			    break;
	}
	printf("%d\n",i);

return 0;
}
/***********************************************/
//用数学表达式：             
//  pi       1   1   1       
//  -- = 1 - - + - - - + ...  
//  4        3   5   7      
//求圆周率pi的近似值。
//直到发现某一项的绝对值小于0.000001为止（该项不累加）
/***********************************************/
#include <math.h>
int main()
{
	int i=1;//初始化为1，因为分母为奇数
	float s=0;
	float t=1;
	float p=1;

	/**/
	while(fabs(t)>1e-6)
	{
		s=s+t;//各项之和，放在循环最后算也行
		p=-p;//分子
		/**/
		i=i+2;//分母
		t=p/i;//项
	}
	/**/
	printf("pi=%f\n",s*4);

return 0;
}