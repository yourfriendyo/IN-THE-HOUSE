#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*��ͺ���*/
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10, b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
}

/*ȡ���ֵ*/
int get_max(int x, int y)
{
	int z = 0;
	z = x > y ? x : y;
	return z;
}

int main()
{
	int a = 0, b = 0, z = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	z = get_max(a, b);
	printf("%d\n", z);
	return 0;
}

int main()
{
	int a = 3; int b = 4;
	int tmp = 0;
	printf("a=%d,b=%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
//�������ͱ���
void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 3, b = 2;
	Swap1(a, b);   printf("a=%d,b=%d\n", a, b);
	Swap2(&a, &b); printf("a=%d,b=%d\n", a, b);
	return 0;
}

//�ж��Ƿ�Ϊ�������Ƿ���1���Ƿ���0
#include<math.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d  ", i);
	}
	return 0;
}

//�ж��Ƿ�Ϊ����
int is_leap_year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year < 2000; year++)
		if (is_leap_year(year) == 1)
			printf("%d  ", year);

	return 0;
}

//���ַ����ң��з����±��޷���0��
int binary_search(int arr[], int n, int m)
{
	int low = 0;
	int high = m - 1;
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] < n)
		{
			low = mid + 1;
		}
		else if (arr[mid] > n)
		{
			high = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int k = 0;

	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
	return 0;
}

//���ú���ʹnum����1
void Add(int* n)
{
	(*n)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);//1
	Add(&num);
	printf("%d\n", num);//2
	Add(&num);
	printf("%d\n", num);//3
	return 0;
}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}

//��ӡ��num��ÿ���ַ�
void print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d  ", n % 10);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}

//ͳ���ַ����ַ�����
int my_strlen(char* n)
{
	int count = 0;
	while (*n != '\0')
	{
		count++;
		n++;
	}
	return count;
}

//ͳ���ַ����ַ��ĸ��������������βΣ��ݹ���ã�
int my_strlen(char* n)
{
	if (*n != 0)
		return 1 + my_strlen(++n);
	else
		return 0;
}

int main()
{
	char arr[] = "wdnmd";
	int num = my_strlen(arr);
	printf("length=%d\n", num);
	return 0;
}

//��n�Ľ׳�
int fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}

//��n�Ľ׳�(�ݹ����)
int fac2(int n)
{
	int i = 0;
	if (n > 1)
		return n * fac2(n - 1);
	else return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", fac1(n));
	return 0;
}

//��쳲���������
int Fib(int n)
{
	if (n > 2)
		return Fib(n - 1) + Fib(n - 2);
	else
		return 1;
}

//��쳲��������У����õݹ飩
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("Fib(n)=%d", Fib(n));
	return 0;
}

