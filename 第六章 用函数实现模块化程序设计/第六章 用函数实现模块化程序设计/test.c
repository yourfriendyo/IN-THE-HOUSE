#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/***********************************************/
//计算并输出500以内的最大的10个能被13或17整除的自然数之和
/***********************************************/
/**/
int fun(int k)
{
	int m=0;
	int mcount=0;
	/**/
	if(k<2)
	{
		printf("please input again.");
	    return 0;
	}
	else
	{
		while(mcount<10)//一共只找十个数
	    {
			/**/
			if(k%13==0||k%17==0)
		    {
			    m+=k;
			    mcount++;
		    }
		    k--;//一个一个找从500找到2
		}
	    /**/
		return m;
	}	
}
int main()
{
	int n=0;
	printf("please input a number:>");
	scanf("%d",&n);
	printf("%d\n",fun(n));

return 0;
}

/***********************************************/
//删除一个字符串中的所有数字字符
/***********************************************/
void deletenumber(char s[])
{
	int i=0;
	int j=0;
	for(i=0,j=0;s[i];i++)
	{
		/**/
		if(s[i]<'0'||s[i]>'9')//非数字字符的，重新排列成数组
		{
			/**/
			s[j]=s[i];
			j++;
		}
		s[j]=0;
	}
}

int main()
{
	char item[80]={0};
	printf("Input a string:\n");
	gets(item);
	/**/
	deletenumber(item);
	printf("%s\n",item);

return 0;
}

/***********************************************/
//通过函数的递归调用计算阶乘
/***********************************************/
long power(int n)
{
	long f=0;
	if(n>1)
		/**/
		f=power(n-1)*n;//f(n)*f(n-1)*f(n-2)*...1
	else
		f=1;
	return f;
}

int main()
{
	int n=0;
	long y=0;
	printf("input a inteager number:\n");
	/**/
	scanf("%d",&n);
	y=power(n);
	/**/
	printf("%d!=%ld\n",n,power(n));

return 0;
}

/***********************************************/
//求100-999之间的水仙花数。
//说明水仙花数是指一个三位数的各位数字的立方和是这个数本身
/***********************************************/
int fun(int n)
{
	int i=0;
	int j=0;
	/**/
	int k=0;
	int m=n;
	
	for(i=1;i<4;i++)//循环三次
	{
		/**/
		j=m%10;//去掉最高位数后剩下的部分
		m=(m-j)/10;//只留最高位其他补零再除以10
		k=k+j*j*j;//三次的j三方之和
	}
	if(k==n)
		/**/
		return 1;

}

int main()
{
	int i=0;
	for(i=100;i<1000;i++)//遍历100到999
	{
		/**/
		if(fun(i)==1)
		{
			printf("%d is OK!\n",i);
		}
	}

return 0;
}

/***********************************************/
//程序计算a,b两个整数的最大公约数和最小公倍数
/***********************************************/
int main()
{
	int a,b;
	printf("输入a,b");
	scanf("%d%d",&a,&b);
	/**/
	printf("a=%d,b=%d的最大公约数=%d\n",a,b,gcd(a,b));//最大公约数
	/**/
	printf("a=%d,b=%d的最小公倍数=%d\n",a,b,lcm(a,b));//最小公倍数

return 0;
}

int lcm(int a,int b)
{
	int i=0;
	int c=0;
	for(i=c= a>b?a:b; i%a!=0||i%b!=0; i+=c)
	{}
	return i;
}
int gcd(int a,int b)
{
	int i=0;
	for(i= a<b?a:b; a%i!=0||b%i!=0; i--)
	{}
	return i;
}

/***********************************************/
//数组名作为函数参数，求平均成绩
/***********************************************/
float aver(float a[])    //定义求平均值函数，形参为浮点型数组名
{
	int i=0;
	float av=0;
	float s=0;//s

	for(i=0;i<5;i++)//遍历数组a之和赋值给s
	{
		/**/
		s+=a[i];
	}
	av=s/5;//求平均值

return av;
}

int main()
{
	float score[5]={0};
	float av=0;
	int i=0;
	printf("input 5scores:\n");
	for(i=0;i<5;i++)
	{
		/**/
		scanf("%f",&score[i]);
	}
	/**/
	av=aver(score);
	printf("average score is %5.2f\n",av);
	
return 0;
}

/***********************************************/
//下面函数为二分法查找key值。
//数组中元素已递曾排序；
//若找到key则返回对应下标，否则返回-1；
/***********************************************/
#define key 4
int fun(int a[],int n,int kei)
{
	int low=0;
	int high=n-1;
	int mid=0;

	while(low<=high)
	{
		mid=(low+high)/2;
		if(kei<a[mid])
			/**/
			high=mid-1;
		else if(kei>a[mid])
			/**/
			low=mid+1;
		else 
			/**/
			return mid;
	}

return -1;
}

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(a)/sizeof(a[0]);
    int c=0;

	c=fun(a,sz,key);

	if(c==1)
		printf("not found");
	else 
		printf("position %d\n",c);

return 0;
}

/***********************************************/
//将两个字符串连接为一个字符串，不使用库函数strcat
/***********************************************/
#include <string.h>
void JOIN(char s1[80],char s2[40])
{
	int i=0;
	int j=0;
	/**/
	j=strlen(s1);
	for(i=0;s2[i];i++)
	{
		s1[i+j]=s2[i];
	}
	s1[i+j]=0;

}
int main()
{
	char str1[80]={0};
	char str2[40]={0};

	gets(str1);
	gets(str2);

	puts(str1);
	puts(str2);
	/**/
	JOIN(str1,str2);
	puts(str1);

return 0;
}

/***********************************************/
//对数组中的前n个元素从小到大排序
/***********************************************/
int main()
{
	
	int a[10];
	int i=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	/**/	
	sort(a,8);
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);		
	}
	
return 0;
}
void sort(int array[],int n)
{
	int i=0;
	int j=0;
	int k=0;
	int t=0;
	/**/
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(array[j]<array[k])
				k=j;
		}
			t=array[i];
			array[i]=array[k];
			array[k]=t;
	}
}

/***********************************************/
//求出二维数组中的最大元素值
/***********************************************/
int max_value(m,n,array)
{
	int m=0;
	int n=0;
	int array[3][4]={0};
	int i=0;
	int j=0;
	int max=0;
	max=array[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<array[i][j])
				max=array[i][j];
		}
	}
	return max;
}
int main()
{
	int a[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};
	/**/
	printf("max value is %d\n",max_value(3,4,a));

return 0;
}

/***********************************************/
//将str字符串中所有与字符变量ch中相同的字符去掉，最后输出str字符串
/***********************************************/
#include <string.h>
void fun(char [],char );
int main()
{
	char str[100]={0};
	char ch=0;
	printf("输入字符串：");
	gets(str);
	printf("输入想要删除的字符：");
	scanf("%c",&ch);
	/**/
	fun(str,ch);
	printf("%s\n",str);
	
return 0;
}

void fun(char str[],char ch)
{
	int i=0;
	int j=0;
	for(;str[i];i++)
	{
		if(str[i]!=ch)
		{
			/**/
			str[j++]=str[i];//这种表达方式更省事
		}
	}
	/**/
	str[j]=0;//最后给字符串补斜杠零
}

/***********************************************/
//找出一个大于给定整数m且紧随m的素数，并作为函数返回值
/***********************************************/
#include <conio.h>
int fun(int m)
{
	/**/
	int i=0;
	int k=0;
	for(i=m+1;;i++)//i大于给定整数m且紧随m (m>1)
	{
		for(k=2;k<i;k++)
		{		
			/**/
		    if(i%k==0)
			    break;
		    /**/
		    if(k==i)
			    return i;
		}
	}
}

int main()
{
	int n=0;
	printf("please enter n(n>1):>");
	scanf("%d\n",&n);
	printf("%d\n",fun(n));

return 0;
}

/***********************************************/
//给定实数n，输出平均值，并统计在平均值以下（含平均值）的实数个数
/***********************************************/
int fun(double x[],int n)
{
	int j=0;
	int c=0;
	/**/
	float xa=0;
	/**/
	for(j=0;j<n;j++)//遍历元素统计总和
	{
		xa+=x[j];
	}
	xa/=n;//求平均值
	printf("average=%f\n",xa);
	/**/
	for(j=0;j<n;j++)//求出小于平均值的元素个数
	{
		if(x[j]<=xa)
			c++;
	}
	/**/
	return c;
}
int main()
{
	double x[]={23.5,45.67,12.1,6.4,58.9,98.4};
	int sz=sizeof(x)/sizeof(x[0]);
	printf("%d\n",fun(x,sz));

return 0;
}

/***********************************************/
//求1到20的阶乘之和，即1!+2!+3!+...+20!。
/***********************************************/
void fun()
{
	int n=0;
	int j=0;
	float s=0;
	float t=0;

	for(n=1;n<=20;n++)//二十次正好用n
	{
		/**/
		t=1;//每次循环开始t都初始化为1
		for(j=1;j<=n;j++)//每一个数的阶乘
		{
			/**/
			t*=j;
		}
		/**/
		s+=t;//二十次累加起来
	}
	/**/
	printf("jiecheng=%f\n",s);
}

int main()
{
	fun();

return 0;
}

/***********************************************/
//根据整型形参m，计算如下公式的值：
//y=1/2+1/8+1/18+...+1/2m*m。
/***********************************************/
double fun(int m)
{
	/**/
	double y=0;
	int i=0;
	/**/
	for(i=1;i<=m;i++)//遍历从1到m
	{
		/**/
		y+=1.0/(2*i*i);//累加m次
	}

return y;
}

int main()
{
	int n=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("\nThe result is %lf\n",fun(n));

return 0;
}

/***********************************************/
//对10个整数从小到大排序
/***********************************************/
/**/
void sort(int* x,int n)
{
	int i=0;
	int j=0;
	int t=0;

	for(i=0;i<n-1;i++)//只用排n-1次序
	{
		for(j=0;j<n-i-1;j++)//每个字符检查n-i-1次
		{
			/**/
			if(x[j]>x[j+1])//置换一下
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
}

int main()
{
	int i=0;
	int n=0;
	int a[100]={0};

	printf("please input the length of the array:>");
	scanf("%d\n",&n);//数组中有多少字符

	printf("please input the array\n");
	for(i=0;i<n;i++)//给数组添加元素
	{
		scanf("%d",&a[i]);
	}

	/**/
	sort(a,n);

	printf("output the sorted array:\n");
	for(i=0;i<=n-1;i++)//输出排序完成的数组
	{
		printf("%5d",a[i]);
	}
	printf("\n");

return 0;
}

/***********************************************/
//计算正整数num的各位上的数字之积
//例如：输入252，则输出应该是20。
/***********************************************/
long fun(long num)
{
	/**/
	long k=0;
	do
	{
		k*=num%10;//拿出末位数并累乘
		/**/
		num/=10;//去掉末尾数
	}
	while(num);

return k;
}
int main()
{
	long n=0;
	printf("\nPlease enter a number\n");
	/**/
	scanf("%ld",&n);
	/**/
	printf("\n%ld\n",fun(n));

return 0;
}

/***********************************************/
//将s所指的字符串的反序和正序进行链接形成一个新的字符串放在t所指的数组中。
//例如：当s所指的字符串的内容为"ABCD"的，t所指的数组中的内容为"DCBAABCD";
/***********************************************/
#include <conio.h>
#include <string.h>
void fun(char s[],char t[])
{
	int i=0;       
	/**/                                            //  i =   0   1   2   3 
	int d=strlen(s);//4                             //s[] = {'A','B','C','D'}
	/**/                                            //  i =   0   1   2   3   4   5   6   7
	for(i=0;i<d;i++)                                //t[] = {'D','C','B','A','A','B','C','D'}
	{
		t[i]=s[d-1-i];//先反着输出一边   t[i]=s[3-i]                            
	}
	for(i=0;i<d;i++)
	{
		t[d+i]=t[i];//再正着输出一边     t[4+i]=s[i]
	}
	t[2*d]=0;//最后再补个斜杠零
}
int main()
{
	char s[100]={0};
	char t[100]={0};

	printf("\nPlease enter a string S\n");
	scanf("%s",s);

	fun(s,t);
	printf("\nThe result is:%s\n",t);

return 0;
}
/***********************************************/
//求出数组中最大数和次最大数，
//并把最大数和a[0]的数对调、次最大数和a[1]中的数对调
/***********************************************/
#define N 20
void fun(int* a,int n)
{
	int i=0;
	int m=0;
	int t=0;
	int k=0;
	for(i=0;i<2;i++)
	{
		/**/
		m=i;
		/**/
		for(k=i;k<n;i++)
		{
			/**/
			if(a[k]>a[m])
			{
				m=k;
			}
			t=a[i];
			a[i]=a[m];
			a[m]=t;
		}
	}
}
int main()
{
	int b[N]={11,5,12,0,3,6,9,7,10,8};
	int n=10;
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	fun(b,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");

return 0;
}

/***********************************************/
//先从键盘上输入一个3行3列矩阵的各个元素的值,
//然后输出主对角线上的元素之和sum。
/***********************************************/
void fun()
{
	int a[3][3]={0};
	/**/
	int sum=0;
	int i=0;
	int j=0;
	for(i=0;i<3;i++)//遍历输入二维数组
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)//累加主对角线的元素之和
	{
		/**/
		sum+=a[i][i]+a[i][3-1-i];//两条对角线
	}
	/**/
	printf("sum=%d\n",sum);
}

int main()
{
	fun();

return 0;
}

/***********************************************/
//对用户输入的具有10个数据的数组a按由大到小排序，并在主程序中输出
/***********************************************/
void fun(int array[],int n)
{
	/*****progarm*****/
	int k=0;
	int j=0;
	int t=0;
	for(k=0;k<n-1;k++)
	{
		for(j=k+1;j<n;j++)
		{
			if(array[k]<array[j])
			{
				t=array[k];
				array[k]=array[j];
				array[j]=t;
			}
		}
	}
	/*******end*******/
}

int main()
{
	int a[10]={0};
	int i=0;
	printf("请输入数组a中的十个数：\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,10);
	printf("由大到小的排序结果是：\n");
	for(i=0;i<10;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");

return 0;
}

/***********************************************/
//将一个数组中的值按逆序存放，
//并在主函数中输出，
//例如：原来存顺序为8,6,5,4,1,现按要求改为1,4,5,6,8
/***********************************************/
#define N 5
void fun(int arr[],int n)
{
	/*****progarm*****/
	int i=0;
	int t=0;
	for(i=0;i<n/2;i++)//遍历把a[i]换成a[n-1-i],即前后颠倒
	{
		t=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=t;
	}
	/*******end*******/
}

int main()
{
	int i=0;
	int a[N]={8,6,5,4,1};
	for(i=0;i<N;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
	fun(a,N);
	for(i=0;i<N;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
return 0;
}

/***********************************************/
//找出一批正整数中最大的偶数。
/***********************************************/
int fun(int a[],int n)
{
	/*****progarm*****/
	int i=0;
	int amax=-1;//先保证amax为最小值-1
	for(i=0;i<n;i++)//遍历数组元素
	{
		if(a[i]%2==0)//首先为偶数
		{
			if(a[i]>amax)//交换数值
				amax=a[i];
		}
	}
	return amax;
	/*******end*******/
}

int main()
{
	int a[]={1,2,9,24,35,18};
	int sz=sizeof(a)/sizeof(a[0]);
	printf("max=%d\n",fun(a,sz));

return 0;
}

/***********************************************/
//求一分数序列2/1,3/2,5/3,8/5,13/8...的前n项和
/***********************************************/
float fun(int n)
{
	/*****progarm*****/
	int i=0;

	float f1=1;//第一项分母
	float f2=2;//第一项分子

	float f3=0;//第二项分子

	float s=0;//累计值

	for(i=1;i<=n;i++)//老规矩从1开始，遍历所有元素（到n）
	{
		f3=f1+f2;//先加起来
		f1=f2;//后一项的分母是前一项的分子
		f2=f3;//后一项的分子是前一项分子分母之和
		s+=f2/f1;//累加出结果
	}
	return s;
	/*******end*******/
}

int main()
{
	float y=0;
	int n=0;
	scanf("%d",&n);
	printf("fun(%d)=%f\n",n,fun(n));
return 0;
}

/***********************************************/
//从键盘上输入一个整数，调用函数fun判断其是否为素数，
//然后在主函数中输出相应的结论信息。
/***********************************************/
int fun(int n)
{
	/*****progarm*****/
	int i=0;

	if(n<2)
		return 0;//没有小于2的素数

	for(i=2;i<=n/2;i++)//没有除1以外的公因数
	{
		if(n%i==0)
			return 0;
	}

	return 1;//除此之外都是素数
	/*******end*******/
}

int main()
{
	int m=0;
	int flag=0;
	printf("input an integer:");
	scanf("%d",&m);
	flag=fun(m);
	if(flag)
		printf("%d is a prime.\n",m);
	else
		printf("%d is not prime.\n",m);

return 0;
}

/***********************************************/
//从键盘上为一维整型数组输入10个整数，调用fun函数找到其中最小的数，
//并在主函数中输出
/***********************************************/
int fun(int x[],int n)
{
	/*****progarm*****/
	int min=x[0];
	int i=0;
	
	for(i=1;i<n;i++)//第一个元素不用比较
	{
		if(x[i]<min)
			min=x[i];//找最小
	}

	return min;
	/*******end*******/
}

int main()
{
	int a[10]={0};
	int i=0;
	int min=0;

	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n");

	printf("min=%d\n",fun(a,10));
}
/***********************************************/
//有一个一维数组sorce内分别存放10个学生的成绩，用一个函数来求平均成绩
//例如：如果10个学生的成绩分别为92,87,68,56,92,84,70,65,90,60,则平均成绩为：76.400000
/***********************************************/
float average(float array[10])
{
	/*****progarm*****/
	int i=0;
	int j=0;
	float aver=0;
	float sum=array[0];
	for(i=1;i<10;i++)
	{
		sum+=array[i];
	}
	aver=sum/10;
	return aver;
	/*******end*******/
}

int mian()
{
	float score[]={92,87,68,56,92,84,70,65,90,60};
	printf("average score is %f\n",average(score));
return 0;
}

/***********************************************/
//分别统计字符串中字母、数字、空格和其他字符出现的次数；
/***********************************************/
/*-全局变量，
a用于保存字母个数、num用于保存数字个数
b用于保存空格个数、other 用于保存其他字符字数*/
    int a=0;
    int num=0;
	int b=0;
	int other=0;
//正是因为有这些全局变量，才使得函数不用返回值
//全局变量全局适用
void count(char c[])
{
	/*****progarm*****/
	int i=0;
	for(i=0;c[i];i++)
	{
		if((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z'))
			a++;
		else if(c[i]>='0'&&c[i]<='9')
			num++;
		else if(c[i]=' ')
			b++;
		else 
			other++;
	}
	/*******end*******/

}

int main()
{
	char ch[80]={0};
	printf("input string:>");
	gets(ch);
	count(ch);
	printf("a=%d num=%d b=%d other=%d\n",a,num,b,other);

return 0;
}

/***********************************************/
//判断一个整数w的各位数字平方之和能否被5整除，可以被5整除则返回1，否则返回0。
/***********************************************/
int fun(int w)
{
	/*****progarm*****/
	int k=0;
	int s=0;
	do
	{
		s+=(w%10)*(w%10);
		w/=10;
	}
	while(w);

	if(s%5==0)
		k=1;
	else 
		k=0;
return k;
	/*******end*******/
}

int main()
{
	int m=0;
	printf("Enter m:>");
	scanf("%d",&m);
	printf("\nThe result is %d\n",fun(m));

return 0;
}

/***********************************************/
//求1-100之间的偶数之积。
/***********************************************/
double fun(int m)
{
	/*****progarm*****/
	double y=1;//初始化一定为1
	int i=0;
	for(i=1;i<=m;i++)//老规矩，从1开始到m遍历
	{
		if(i%2==0)//偶数
			y*=i;//累乘
	}
return y;
	/*******end*******/

}

int main()
{
	printf("ji=%f\n",fun(100));
return 0;
}

/***********************************************/
//实现从字符串s中删除指定的字符c。
/***********************************************/
void fun(char s[],char c)
{
	/*****progarm*****/
	int i=0;
	int k=0;
	for(i=0;s[i];i++)//遍历所有元素
	{
		if(s[i]!=c)//不等于c
			s[k++]=s[i];//替换新下标
	}
	s[k]=0;
	/*******end*******/
}

int main()
{
	char str[]="turbo c and borland c++";
	char c='a';
	fun(str,c);
	printf("str=%s\n",str);

return 0;
}

/***********************************************/
//计算出k以内最大的10个能被13或17整除的自然数之和。
/***********************************************/
int fun(int k)
{
	/*****progarm*****/
	int a=0;
	int b=0;
	while((k>2)&&(b<10))//不超10个
	{
		if((k%13==0)||(k%17==0))
		{
			a+=k;//a是累加之和
			b++;//计数
		}
		k--;//遍历从3到k
	}

return a;
	/*******end*******/
}

int main()
{
	int m=0;
	printf("Enter m:>");
	scanf("%d",&m);
	printf("\nThe result is%d\n",fun(m));

return 0;
//}
/***********************************************/
//求给定正整数n以内的素数之积。
/***********************************************/
long fun(int n)
{
	/*****progarm*****/
	long i=0;
	long k=0;
	long s=1;
	for(i=2;i<n;i++)
	{
		for(k=2;k<i;k++)
		{
			if(i%k==0)//只要满足i%k==0,然后break，k也就不会等于i,就不是素数，直接进入i的下一轮循环	
				break;//只要一直不满足i%k==0,就有k==i，就是素数
		}
		if(k==i)//k=i=素数
			s*=i;
	}
return s;
	/*******end*******/

}

int main()
{
	int m=0;
	printf("Enter m:>");
	scanf("%d",&m);
	printf("\nThe result is %ld\n",fun(m));

return 0;
}

/***********************************************/
//编出一个函数void fun(int tt[M][N],int pp[N])。
//tt指向一个M行N列的二维数组，求出二维数组每列中最小元素，并依次放入pp所指一维数组中。
//二维数组的数值已在主函数中赋予。
/***********************************************/
#define M 3
#define N 4
void fun(int tt[M][N],int pp[N])
{
	/*****progarm*****/
	int i=0;
	int j=0;
	for(j=0;j<N;j++)//每列的最小元素
	{
		pp[j]=tt[0][j];//每次开始次循环前把pp都等于第1行的数
		for(i=1;i<M;i++)//下标从1开始到2，进行每列的比较
		{
			if(tt[i][j]<pp[j])//tt[1][j]或tt[2][j] 小于 pp[j]=tt[0][j]
				pp[j]=tt[i][j];//就赋值
		}
	}
	/*******end*******/
}
int main()
{
	int t[M][N]={{22,45,56,30},{19,33,45,38},{20,22,66,40}};
	int p[N]={0};
	int i=0;
	int j=0;
	int k=0;
	printf("The origial data is:\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%6d",t[i][j]);
		}
		printf("\n");
	}
	fun(t,p);
	printf("\nThe result is:\n");
	for(k=0;k<N;k++)
	{
		printf("%4d",p[k]);
	}
	printf("\n");

return 0;
}

/***********************************************/
//用函数求一个N阶矩阵右下三角元素的和（包括副对角线'\'）
/***********************************************/
#include <stdlib.h>
#include <time.h>
#define N 3
int sum(int a[][N])
{
	/*****progarm*****/
	int i=0;
	int j=0;
	int k=0;

	for(i=0;i<N;i++)
	{
		for(j=N-1-i;j<N;j++)//[i][N-1-i]连起来就是副对角线，
		{                   //又因为循环条件j<N，所以副对角线以下都算上
			k+=a[i][j];
		}
	}

return k;
    /*******end*******/
}

int main()
{
	int i=0;
	int j=0;
	int a[N][N]={0};
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			//a[i][j]=random(10)+10; 随机数的用法我实在忘了，以后要是能想起来，就来改
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("===========================\n");
	printf("sum=%5d\n",sum(a));

return 0;
}

/***********************************************/
//编写函数求表达式1-1/2+1/3-1/4+1/5+...+1/n的和
/***********************************************/
double sum(int n)
{
	/*****progarm*****/
	float s=0;
	int i=0;
	int k=1;
	for(i=1;i<=n;i++)
	{
		s+=k*1.0/i;
		k=-k;
	}
return s;
	/*******end*******/
}

int main()
{
	int n=0;
	scanf("%d",&n);
	printf("sum=%f\n",sum(n));

return 0;
}

/***********************************************/
//判断一个整数是否为完数。主函数中输出1000以内的所有完数。
//一个整数的值等于它的因子之和，那么这个数是完数。
//例如“6的因子为1、2、3，而6=1+2+3，所以6是完数”。
/***********************************************/
int fun(int n)
{
	/*****progarm*****/
	int flag=0;
	int sum=0;
	int i=0;

	for(i=1;i<n;i++)//从1开始遍历到n
	{
		if(n%i==0)//找因数
			sum++;//计数器
	}
	if(sum==n)//整数等于因数之和
		flag=1;
return flag;//是返1，否返0
	/*******end*******/
}

int main()
{
	int i=0;
	for(i=1;i<1000;i++)
	{
		if(fun(i))
			printf("%d\n",i);//i就相当于fun函数的n，就是输入的整数，循环打印所有函数
	}

return 0;
}

/***********************************************/
//求无理数e的值并输出。
//计算公式为：e=1+1/1!+1/2!+1/3!+1/4!+...+1/n!;
/***********************************************/
int main()
{
	float fun();
	printf("无理数e的值为:%f\n",fun());

return 0;
}
float fun()
{
	/*****progarm*****/
	long int j=0;
	long i=1;
	long k=0;
	double e=0.0;
	double jc=1.0;

	while(jc>=0.00001)//每一项的值无限逼近0
	{
		e+=jc;//累加
		for(k=1,j=1;k<=i;k++)//算阶乘
		{
			j=j*k;
		}
		jc=1.0/j;//项
		i++;//项分母+1
	}
return e;
	/*******end*******/
}