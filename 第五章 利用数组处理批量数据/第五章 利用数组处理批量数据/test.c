#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/**************************************************/
//对10个整数按升序排序（选择法）
/**************************************************/
#define N 10

int main()
{
	int i=0;
	int j=0;
	int k=0;
	int t=0;

	int a[10]={0};

	for(i=0;i<N;i++)//输入a[N]
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<N-1;i++)//第一遍循环结束后最后一个已经是最小值，所以只用循环N-1次即可
	{
		/**/
		k=i;
		/**/
		for(j=i+1;j<N;j++)//从第i+1个开始和前面比大小（因为i+1要和i比）
		{
			if(a[j] < a[k]) //先比较找到，即交换下标
				k=j;//变换最小值的下标
		}
	    if(k!=i)//如果x!=i，说明x的值已经改变，找到了比a[i]还小的数的下标
		{
			t=a[i];//进行a[i]和a[x]的交换
			a[i]=a[k];
			a[k]=t;
		}
	}

	printf("output the sorted array:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

return 0;
}

/**************************************************/
//二分法查找key值。数组中元素已递增排序。
//例如：输入 5，输出结果为 position 3；
//      输入19，输出结果为 position 9；
//      输入15，输出结果为 not found 。
/**************************************************/
int main()
{
	int a[10]={1,3,5,6,8,9,10,16,19,25};

	int n=10;
	int low=0;//最小下标
	int high=n-1;//最大下标
	int mid=0;

	int c=0;//判断条件
	
	int key=0;
	scanf("%d",&key);
	/**/
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key<a[mid])//在左边
			high=mid-1;
		else if(key>a[mid])//在右边
			/**/
			low=mid+1;
		else
		{
			c=1;
			break;
	    }
	}

	if(c==1)
		printf("position is %d\n",mid+1);//位置不是下标
	else
		printf("not found\n");

return 0;
}

/**************************************************/
//输入Fibonacci数列的前15项，要求每行输出5项。
//Fibonacci数列：1，1，2，3，5，8，13...
/**************************************************/
int main()
{
	int fib[15];
	int i=0;

	fib[0]=1;
	fib[1]=1;//初始化数组

	/**/
	for(i=2;;i++)
	{
		/**/
		fib[i]=fib[i-1]+fib[i-2];//定义数组
	}
	for(i=0;i<15;i++)//循环输出
	{
		printf("%d\t",fib[i]);
		/**/
		if(i%5==0)//每五个换一行
			printf("\n");
	}

return 0;
}

/**************************************************/
//生成并打印输出一个7行7列的矩阵，
//左右对角线全为1，其他元素为0；
//1  0  0  0  0  0  1
//0  1  0  0  0  1  0
//0  0  1  0  1  0  0
//0  0  0  1  0  0  0
//0  0  1  0  1  0  0
//0  1  0  0  0  1  0
//1  0  0  0  0  0  1
/**************************************************/
int main()
{
	/**/
	int a[7][7]={0};
	int i=0;
	int j=0;
	for(i=0;i<7;i++)
	{
		/**/
		a[i][i]=1;//'\'对角线
		a[i][6-i]=1;//'/'对角线
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}

return 0;

}

/**************************************************/
//删除字符串中的指定字符，字符串以及需要删除的字符均由键盘输入
/**************************************************/
#include <string.h>
int main()
{
	char str[80];
	char ch=0;
	int i=0;
	int k=0;

	puts("please input a character string:");
	//puts函数声明
	//int puts(const char *s);
	//使用puts()输出更简洁,而且使用puts()函数系统会自动在其后添加一个换行符
	//只能输出字符串

	gets(str);
	//gets函数声明
	//char *gets(char *str);
	//gets()函数:从输入缓冲区中读取一个字符串存储到字符指针变量str所指向的内存空间。
	//gets()函数不仅比 scanf 简洁，
	//可以直接输入带空格的字符串。

	puts("the character need to be deleted is: ");

	ch=getchar();
	//从缓冲区读走一个字符，相当于清除缓冲区(包括空格、回车和Tab) 
	//scanf()在读取输入时会在缓冲区中留下一个字符'\n'（输入完s[i]的值后按回车键所致）
	//它的作用是从stdin流中读入一个字符,
	//如果stdin有数据的话不用输入它就可以直接读取
    //第一次getchar()时，需要人工的输入，但是输了多个字符，以后的getchar()再执行时就会直接从缓冲区中读取

	/**/
    for(i=0;str[i];i++)//循环找字符
	{
		if(str[i]!=ch)//把剩余的字符往前挪一个位置
		{
			/**/
			str[k]=str[i];
			k++;
		}
	}

	/**/
	str[k]=0;
	//有了它，就能把字符串里要删去的重复出现的字符都删去

	puts("destinated answer is ");
	puts(str);

return 0;
}

/**************************************************/
//在字符串中的每个数字字符之后插上一个*号
/**************************************************/
int main()
{
	char s[80]="2a08s5dafvfdr2da56faf2";

	int i=0;
	int j=0;
	int n=0;
	
	printf("\nThe original string is: %s\n",s);
	
	for(i=0;s[i];i++)
	{
		/**/
		if(s[i]>='0'&&s[i]<='9')
		{
			/**/
			while(s[i+n+1])//while(s[i+n])
			{
				n++;
			}
			for(j=i+n+1;j>i;j--)//for(j=i+n;j>i;j--)
			{
				/**/
				s[j+1]=s[j];
			}
			s[j+1]='*';
			//i++;
		}
	
	}
	printf("\nThe result is %s\n",s);

return 0;
}

/**************************************************/
//有N×N矩阵，根据给定的m（m<=N）值，
//将每行元素中的值均向右移动m个单位，左位置为0
//例如：N=4，m=2，有下列矩阵
// 11   12   13   14
// 15   16   17   18
// 19   20   21   22
// 23   24   25   26
//程序执行结果为：
// 0    0    11   12
// 0    0    15   16
// 0    0    19   20
// 0    0    23   24
/**************************************************/
#define N 4
int main()
{
	int t[][4]={11,12,13,14,
		        15,16,17,18,
				19,20,21,22,
				23,24,25,26};
	int i=0;
	int j=0;
	int m=0;

	printf("\nThe original array:\n");//输出原矩阵
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d  ",t[i][j]);
		}
		printf("\n");
	}

	printf("please input m (m<%d):",N);
	scanf("%d",&m);

	for(i=0;i<N;i++)
	{
		/**/
		for(j=N-m-1;j>=0;j--)//与下标一致 1 0
		{
			/**/
			t[i][j+m]=t[i][j];//3对1 2对0
		}
		/**/
		for(j=0;j<m;i++)//左边全部补零
		{
			t[i][j]=0;
		}
	
	}

	printf("\nThe result is:\n");//输出结果
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d  ",t[i][j]);
		}
		printf("\n");
	}

return 0;
}

/**************************************************/
//依次取出字符串中所有数字字符，形成新的字符串，并取代原字符串。
/**************************************************/
int main()
{
	char s[80]={0};
	int i=0;
	int j=0;

	printf("\nEnter a string:");
	gets(s);

	printf("\n\nThe string is:%s\n",s);
	for(i=0,j=0;s[i];i++)//形成新的字符串
	{
		if(s[i]>='0'&&s[i]<='9')//取出数字字符
		/**/
		s[j++]=s[i];//s[j]=s[i];j++;
	}
	/**/
	s[j]=0;//给字符串末尾添加'\0'
	printf("\n\nThe string of changing is:%s\n",s);

return 0;
}

/**************************************************/
//将一个由八进制数字字符组成的字符串转换成十进制整数。
//规定输入的字符串最多只能包含5位八进制数字字符。(已修改)
//例如，若输入77777，则输出32767
/**************************************************/
#include <conio.h>
#include <string.h>
int main()
{
	char s[50]={0};
	int i=0; 
	int n=0;

	printf("Enter a string (Ocatal digits): ");
	gets(s);
	//if(strlen(s)>5)
	//{
	//	printf("Error:String too longer!\n\n");
	//	exit(0);
	//}
	for(i=0;s[i];i++)
	{
		if(s[i]<'0'||s[i]>'7')//排除1-7以外的一切字符
		{
			printf("Error :%c not is ocataal digits!\n\n",s[i]);
			exit(0);		
		}
		else//转换成十进制
		{
			if(s[i])
				/**/
				n=n*8+s[i];
		}
	}

	printf("\n%s is convered to integer number:%d\n\n",s,n);

return 0;
}

/**************************************************/
//输入含有10个整型数据元素的一维数组，
//使用冒泡法排序对该数组从大到小排序，
//并打印输出排序后的数组。
/**************************************************/
int main()
{
	int i=0;
	int j=0;
	int a[10]={0};
	int temp=0;
	for(i=0;i<10;i++)
	{
		/**/
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)//每一位（以为最后一个不用排序，所有最大值是9）
	{
		for(j=0;j<9-i;j++)//每一次
		{
			/**/
			if(a[j]<a[j+1])//交换
			{
				temp=a[j];
				a[j+1]=a[j];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++)//输出
	{
		printf("%d ",a[i]);
	}

return 0;
}

/**************************************************/
//在一个已按升序排列的数组中插入一个数，插入后，数组元素亻乃按升序排列
/**************************************************/
#define N 11
int main()
{
	int i=0;
	int number=0;
	int a[N]={1,2,4,6,8,9,12,15,149,156};

	printf("please enter an integer to insert in the array:\n");
	/**/
	scanf("%d",&number);

	printf("The original array:\n");
	for(i=0;i<N-1;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");

	/**/
	for(i=N-1;i>=0;i--)
	{
		if(number<=a[i])
			/**/
			a[i+1]=a[i];
		else 
		{
			a[i+1]=number;
			/**/
			break;
	    }
	    if(number<a[0])
		    a[0]=number;
	}
   
	printf("The result array:\n");
	for(i=0;i<N;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");

return 0;
}

/**************************************************/
//将s所指字符串的正序和倒序进行连接，形成的新串放在t所指的数组中。
/**************************************************/
#include <string.h>
int main()
{
	char s[100]={0};
	char t[100]={0};
	int i=0;
	int sl=0;
	
	printf("\nPlease enter string s:>");
	scanf("%s",s);
	sl=strlen(s);//计算字符串长度

	/**/
	for(i=0;i<sl;i++)//把数组s复制到数组t
	{
		t[i]=s[i];
	}
	for(i=0;i<sl;i++)//数组s反向接入数组t
	{                                        //     0 1 2 3 4 5 6 7 8
		t[sl+i]=s[sl-i-1];                   //t[]="A B C D D C B A \0" 
	}                                        //s[]="A B C D"3 2 1 0
	/**/
	t[2*sl]=0;//给数组t末尾带上'\0'
	printf("The result is:%s\n",t);

return 0;
}

/**************************************************/
//打印出杨辉三角形（要求打印10行）
//  1
//  1    1
//  1    2    1
//  1    3    3    1
//  1    4    6    4    1
//  1    5   10   10    5    1
//  1    6   15   20   15    6    1
//  1    7   21   35   35   21    7    1
//  1    8   28   56   70   56   28    8    1
//  1    9   36   84  126  126   84   36    9    1
/**************************************************/
#define N 5
int main()
{
	int i=0;
	int j=0;
	int a[N][N];

	/**/
	for(i=0;i<N;i++)
	{
		a[i][0]=1;//第一列
		a[i][i]=1;//对角线
	}
	/**/
	for(i=2;i<N;i++)//从第三行开始
	{
		for(j=1;j<i;j++)//从第二列开始，j<i正好作三角形
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];//一个数等于左上数加上上方数
		}
	}
	for(i=0;i<N;i++)//输出二维数组
	{
		for(j=0;j<=i;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}

return 0;
}

/**************************************************/
//求出a所指数组中最大数和次最大数
//（规定最大数和次最大数不在a[0]和a[1]中）
//依次和a[0]和a[1]中的数对调。
//例如数组中原有的数：7，10，12，0，3，6，9，11，5，8
//      输出的结果为：12，11，7，0，3，6，9，10，5，8
/**************************************************/
#include <conio.h>
#define N 20
int main()
{
	int a[N]={7,10,12,0,3,6,9,11,5,8};
	int n=10;
	int i=0;
	int k=0;
	int m1=0;
	int m2=0;
	int max1=-32768;
	int max2=-32768;

	for(i=0;i<n;i++)//先输出原函数
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	for(i=0;i<n;i++)//遍历
	{
		/**/
		if(a[i]>max1)
		{
			max2=max1;
			m2=m1;
			max1=a[i];
			m1=i;
		}
		/**/
		else if(a[i]>max2)
		{
			max2=a[i];
			m2=i;
		}
	}
		a[m1]=a[0];
		a[0]=max1;
		a[m2]=a[1];
		a[1]=max2;

		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	
	
return 0;
}

/**************************************************/
//从键盘上输入十个学生的成绩，统计最高分，最低分和平均分。
//max代表最高分，min代表最低分，avg代表平均分
/**************************************************/
int main()
{
	int i=0;
	/**/
	float a[10]={0};
	float min=0;
	float max=0;
	float avg=0;

	for(i=0;i<10;i++)
	{
		printf("input the score of students:");
		/**/
		scanf("%f",&a[i]);
	}
	
	/**/
	max=min=avg=a[0];//令他们的初始值都为a[0]
	for(i=1;i<10;i++)//不从a[0]开始比较，从a[1]开始
	{
		/**/
		if(min>=a[i])
			min=a[i];//判断最小值

		if(max<a[i])
			max=a[i];//判断最大值

		avg=avg+a[i];//循环后就是avg=所有数组元素之和
	}
	avg=avg/10;
	printf("max:%f\nmin:%f\navg:%f\n",max,min,avg);

return 0;
}
