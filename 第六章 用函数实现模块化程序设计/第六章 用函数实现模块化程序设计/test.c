#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/***********************************************/
//���㲢���500���ڵ�����10���ܱ�13��17��������Ȼ��֮��
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
		while(mcount<10)//һ��ֻ��ʮ����
	    {
			/**/
			if(k%13==0||k%17==0)
		    {
			    m+=k;
			    mcount++;
		    }
		    k--;//һ��һ���Ҵ�500�ҵ�2
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
//ɾ��һ���ַ����е����������ַ�
/***********************************************/
void deletenumber(char s[])
{
	int i=0;
	int j=0;
	for(i=0,j=0;s[i];i++)
	{
		/**/
		if(s[i]<'0'||s[i]>'9')//�������ַ��ģ��������г�����
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
//ͨ�������ĵݹ���ü���׳�
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
//��100-999֮���ˮ�ɻ�����
//˵��ˮ�ɻ�����ָһ����λ���ĸ�λ���ֵ������������������
/***********************************************/
int fun(int n)
{
	int i=0;
	int j=0;
	/**/
	int k=0;
	int m=n;
	
	for(i=1;i<4;i++)//ѭ������
	{
		/**/
		j=m%10;//ȥ�����λ����ʣ�µĲ���
		m=(m-j)/10;//ֻ�����λ���������ٳ���10
		k=k+j*j*j;//���ε�j����֮��
	}
	if(k==n)
		/**/
		return 1;

}

int main()
{
	int i=0;
	for(i=100;i<1000;i++)//����100��999
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
//�������a,b�������������Լ������С������
/***********************************************/
int main()
{
	int a,b;
	printf("����a,b");
	scanf("%d%d",&a,&b);
	/**/
	printf("a=%d,b=%d�����Լ��=%d\n",a,b,gcd(a,b));//���Լ��
	/**/
	printf("a=%d,b=%d����С������=%d\n",a,b,lcm(a,b));//��С������

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
//��������Ϊ������������ƽ���ɼ�
/***********************************************/
float aver(float a[])    //������ƽ��ֵ�������β�Ϊ������������
{
	int i=0;
	float av=0;
	float s=0;//s

	for(i=0;i<5;i++)//��������a֮�͸�ֵ��s
	{
		/**/
		s+=a[i];
	}
	av=s/5;//��ƽ��ֵ

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
//���溯��Ϊ���ַ�����keyֵ��
//������Ԫ���ѵ�������
//���ҵ�key�򷵻ض�Ӧ�±꣬���򷵻�-1��
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
//�������ַ�������Ϊһ���ַ�������ʹ�ÿ⺯��strcat
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
//�������е�ǰn��Ԫ�ش�С��������
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
//�����ά�����е����Ԫ��ֵ
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
//��str�ַ������������ַ�����ch����ͬ���ַ�ȥ����������str�ַ���
/***********************************************/
#include <string.h>
void fun(char [],char );
int main()
{
	char str[100]={0};
	char ch=0;
	printf("�����ַ�����");
	gets(str);
	printf("������Ҫɾ�����ַ���");
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
			str[j++]=str[i];//���ֱ�﷽ʽ��ʡ��
		}
	}
	/**/
	str[j]=0;//�����ַ�����б����
}

/***********************************************/
//�ҳ�һ�����ڸ�������m�ҽ���m������������Ϊ��������ֵ
/***********************************************/
#include <conio.h>
int fun(int m)
{
	/**/
	int i=0;
	int k=0;
	for(i=m+1;;i++)//i���ڸ�������m�ҽ���m (m>1)
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
//����ʵ��n�����ƽ��ֵ����ͳ����ƽ��ֵ���£���ƽ��ֵ����ʵ������
/***********************************************/
int fun(double x[],int n)
{
	int j=0;
	int c=0;
	/**/
	float xa=0;
	/**/
	for(j=0;j<n;j++)//����Ԫ��ͳ���ܺ�
	{
		xa+=x[j];
	}
	xa/=n;//��ƽ��ֵ
	printf("average=%f\n",xa);
	/**/
	for(j=0;j<n;j++)//���С��ƽ��ֵ��Ԫ�ظ���
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
//��1��20�Ľ׳�֮�ͣ���1!+2!+3!+...+20!��
/***********************************************/
void fun()
{
	int n=0;
	int j=0;
	float s=0;
	float t=0;

	for(n=1;n<=20;n++)//��ʮ��������n
	{
		/**/
		t=1;//ÿ��ѭ����ʼt����ʼ��Ϊ1
		for(j=1;j<=n;j++)//ÿһ�����Ľ׳�
		{
			/**/
			t*=j;
		}
		/**/
		s+=t;//��ʮ���ۼ�����
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
//���������β�m���������¹�ʽ��ֵ��
//y=1/2+1/8+1/18+...+1/2m*m��
/***********************************************/
double fun(int m)
{
	/**/
	double y=0;
	int i=0;
	/**/
	for(i=1;i<=m;i++)//������1��m
	{
		/**/
		y+=1.0/(2*i*i);//�ۼ�m��
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
//��10��������С��������
/***********************************************/
/**/
void sort(int* x,int n)
{
	int i=0;
	int j=0;
	int t=0;

	for(i=0;i<n-1;i++)//ֻ����n-1����
	{
		for(j=0;j<n-i-1;j++)//ÿ���ַ����n-i-1��
		{
			/**/
			if(x[j]>x[j+1])//�û�һ��
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
	scanf("%d\n",&n);//�������ж����ַ�

	printf("please input the array\n");
	for(i=0;i<n;i++)//���������Ԫ��
	{
		scanf("%d",&a[i]);
	}

	/**/
	sort(a,n);

	printf("output the sorted array:\n");
	for(i=0;i<=n-1;i++)//���������ɵ�����
	{
		printf("%5d",a[i]);
	}
	printf("\n");

return 0;
}

/***********************************************/
//����������num�ĸ�λ�ϵ�����֮��
//���磺����252�������Ӧ����20��
/***********************************************/
long fun(long num)
{
	/**/
	long k=0;
	do
	{
		k*=num%10;//�ó�ĩλ�����۳�
		/**/
		num/=10;//ȥ��ĩβ��
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
//��s��ָ���ַ����ķ����������������γ�һ���µ��ַ�������t��ָ�������С�
//���磺��s��ָ���ַ���������Ϊ"ABCD"�ģ�t��ָ�������е�����Ϊ"DCBAABCD";
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
		t[i]=s[d-1-i];//�ȷ������һ��   t[i]=s[3-i]                            
	}
	for(i=0;i<d;i++)
	{
		t[d+i]=t[i];//���������һ��     t[4+i]=s[i]
	}
	t[2*d]=0;//����ٲ���б����
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
//���������������ʹ��������
//�����������a[0]�����Ե������������a[1]�е����Ե�
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
//�ȴӼ���������һ��3��3�о���ĸ���Ԫ�ص�ֵ,
//Ȼ��������Խ����ϵ�Ԫ��֮��sum��
/***********************************************/
void fun()
{
	int a[3][3]={0};
	/**/
	int sum=0;
	int i=0;
	int j=0;
	for(i=0;i<3;i++)//���������ά����
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)//�ۼ����Խ��ߵ�Ԫ��֮��
	{
		/**/
		sum+=a[i][i]+a[i][3-1-i];//�����Խ���
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
//���û�����ľ���10�����ݵ�����a���ɴ�С���򣬲��������������
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
	printf("����������a�е�ʮ������\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,10);
	printf("�ɴ�С���������ǣ�\n");
	for(i=0;i<10;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");

return 0;
}

/***********************************************/
//��һ�������е�ֵ�������ţ�
//�����������������
//���磺ԭ����˳��Ϊ8,6,5,4,1,�ְ�Ҫ���Ϊ1,4,5,6,8
/***********************************************/
#define N 5
void fun(int arr[],int n)
{
	/*****progarm*****/
	int i=0;
	int t=0;
	for(i=0;i<n/2;i++)//������a[i]����a[n-1-i],��ǰ��ߵ�
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
//�ҳ�һ��������������ż����
/***********************************************/
int fun(int a[],int n)
{
	/*****progarm*****/
	int i=0;
	int amax=-1;//�ȱ�֤amaxΪ��Сֵ-1
	for(i=0;i<n;i++)//��������Ԫ��
	{
		if(a[i]%2==0)//����Ϊż��
		{
			if(a[i]>amax)//������ֵ
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
//��һ��������2/1,3/2,5/3,8/5,13/8...��ǰn���
/***********************************************/
float fun(int n)
{
	/*****progarm*****/
	int i=0;

	float f1=1;//��һ���ĸ
	float f2=2;//��һ�����

	float f3=0;//�ڶ������

	float s=0;//�ۼ�ֵ

	for(i=1;i<=n;i++)//�Ϲ�ش�1��ʼ����������Ԫ�أ���n��
	{
		f3=f1+f2;//�ȼ�����
		f1=f2;//��һ��ķ�ĸ��ǰһ��ķ���
		f2=f3;//��һ��ķ�����ǰһ����ӷ�ĸ֮��
		s+=f2/f1;//�ۼӳ����
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
//�Ӽ���������һ�����������ú���fun�ж����Ƿ�Ϊ������
//Ȼ�����������������Ӧ�Ľ�����Ϣ��
/***********************************************/
int fun(int n)
{
	/*****progarm*****/
	int i=0;

	if(n<2)
		return 0;//û��С��2������

	for(i=2;i<=n/2;i++)//û�г�1����Ĺ�����
	{
		if(n%i==0)
			return 0;
	}

	return 1;//����֮�ⶼ������
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
//�Ӽ�����Ϊһά������������10������������fun�����ҵ�������С������
//���������������
/***********************************************/
int fun(int x[],int n)
{
	/*****progarm*****/
	int min=x[0];
	int i=0;
	
	for(i=1;i<n;i++)//��һ��Ԫ�ز��ñȽ�
	{
		if(x[i]<min)
			min=x[i];//����С
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
//��һ��һά����sorce�ڷֱ���10��ѧ���ĳɼ�����һ����������ƽ���ɼ�
//���磺���10��ѧ���ĳɼ��ֱ�Ϊ92,87,68,56,92,84,70,65,90,60,��ƽ���ɼ�Ϊ��76.400000
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
//�ֱ�ͳ���ַ�������ĸ�����֡��ո�������ַ����ֵĴ�����
/***********************************************/
/*-ȫ�ֱ�����
a���ڱ�����ĸ������num���ڱ������ָ���
b���ڱ���ո������other ���ڱ��������ַ�����*/
    int a=0;
    int num=0;
	int b=0;
	int other=0;
//������Ϊ����Щȫ�ֱ�������ʹ�ú������÷���ֵ
//ȫ�ֱ���ȫ������
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
//�ж�һ������w�ĸ�λ����ƽ��֮���ܷ�5���������Ա�5�����򷵻�1�����򷵻�0��
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
//��1-100֮���ż��֮����
/***********************************************/
double fun(int m)
{
	/*****progarm*****/
	double y=1;//��ʼ��һ��Ϊ1
	int i=0;
	for(i=1;i<=m;i++)//�Ϲ�أ���1��ʼ��m����
	{
		if(i%2==0)//ż��
			y*=i;//�۳�
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
//ʵ�ִ��ַ���s��ɾ��ָ�����ַ�c��
/***********************************************/
void fun(char s[],char c)
{
	/*****progarm*****/
	int i=0;
	int k=0;
	for(i=0;s[i];i++)//��������Ԫ��
	{
		if(s[i]!=c)//������c
			s[k++]=s[i];//�滻���±�
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
//�����k��������10���ܱ�13��17��������Ȼ��֮�͡�
/***********************************************/
int fun(int k)
{
	/*****progarm*****/
	int a=0;
	int b=0;
	while((k>2)&&(b<10))//����10��
	{
		if((k%13==0)||(k%17==0))
		{
			a+=k;//a���ۼ�֮��
			b++;//����
		}
		k--;//������3��k
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
//�����������n���ڵ�����֮����
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
			if(i%k==0)//ֻҪ����i%k==0,Ȼ��break��kҲ�Ͳ������i,�Ͳ���������ֱ�ӽ���i����һ��ѭ��	
				break;//ֻҪһֱ������i%k==0,����k==i����������
		}
		if(k==i)//k=i=����
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
//���һ������void fun(int tt[M][N],int pp[N])��
//ttָ��һ��M��N�еĶ�ά���飬�����ά����ÿ������СԪ�أ������η���pp��ָһά�����С�
//��ά�������ֵ�����������и��衣
/***********************************************/
#define M 3
#define N 4
void fun(int tt[M][N],int pp[N])
{
	/*****progarm*****/
	int i=0;
	int j=0;
	for(j=0;j<N;j++)//ÿ�е���СԪ��
	{
		pp[j]=tt[0][j];//ÿ�ο�ʼ��ѭ��ǰ��pp�����ڵ�1�е���
		for(i=1;i<M;i++)//�±��1��ʼ��2������ÿ�еıȽ�
		{
			if(tt[i][j]<pp[j])//tt[1][j]��tt[2][j] С�� pp[j]=tt[0][j]
				pp[j]=tt[i][j];//�͸�ֵ
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
//�ú�����һ��N�׾�����������Ԫ�صĺͣ��������Խ���'\'��
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
		for(j=N-1-i;j<N;j++)//[i][N-1-i]���������Ǹ��Խ��ߣ�
		{                   //����Ϊѭ������j<N�����Ը��Խ������¶�����
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
			//a[i][j]=random(10)+10; ��������÷���ʵ�����ˣ��Ժ�Ҫ������������������
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("===========================\n");
	printf("sum=%5d\n",sum(a));

return 0;
}

/***********************************************/
//��д��������ʽ1-1/2+1/3-1/4+1/5+...+1/n�ĺ�
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
//�ж�һ�������Ƿ�Ϊ�����������������1000���ڵ�����������
//һ��������ֵ������������֮�ͣ���ô�������������
//���硰6������Ϊ1��2��3����6=1+2+3������6����������
/***********************************************/
int fun(int n)
{
	/*****progarm*****/
	int flag=0;
	int sum=0;
	int i=0;

	for(i=1;i<n;i++)//��1��ʼ������n
	{
		if(n%i==0)//������
			sum++;//������
	}
	if(sum==n)//������������֮��
		flag=1;
return flag;//�Ƿ�1����0
	/*******end*******/
}

int main()
{
	int i=0;
	for(i=1;i<1000;i++)
	{
		if(fun(i))
			printf("%d\n",i);//i���൱��fun������n�����������������ѭ����ӡ���к���
	}

return 0;
}

/***********************************************/
//��������e��ֵ�������
//���㹫ʽΪ��e=1+1/1!+1/2!+1/3!+1/4!+...+1/n!;
/***********************************************/
int main()
{
	float fun();
	printf("������e��ֵΪ:%f\n",fun());

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

	while(jc>=0.00001)//ÿһ���ֵ���ޱƽ�0
	{
		e+=jc;//�ۼ�
		for(k=1,j=1;k<=i;k++)//��׳�
		{
			j=j*k;
		}
		jc=1.0/j;//��
		i++;//���ĸ+1
	}
return e;
	/*******end*******/
}