#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct S
{
	char name[20];
	int age;

};

int main()
{
	struct S arr[50];

	return 0;
}


/*动态内存分配*/

//函数：malloc和free
int main()
{
	//向内存申请10个整型的空间
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)//检查返回值
		//打印错误原因
		printf("%s\n", strerror(errno));
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i) = i);
	}
	//归还(释放)空间
	free(p);
	p = NULL;//避免指针p犯错
	return 0;
}

//函数：calloc
int main()
{
	//malloc(10*sizeof(int))
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i) = i);

	}
	free(p);//free函数用于释放动态开辟的空间
	p = NULL;

	return 0;
}

//realloc
//调整动态开辟内存的大小
int main()
{
	int i = 0;
	int* p = (int*)malloc(20);
	int* p2;
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
	{
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i) = i);

	}

	//使用realloc调整动态开辟内存
	p2 = realloc(p, 40);
	if (p2 == NULL)
	{
		printf("%s\n", strerror(errno));
		p = p2;
	}
	else
	{
		for (i = 5; i < 10; i++)
			*(p2 + i) = i;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p2 + i));
	}

	//realloc函数的使用事项
	//1.如果p指向的空间有足够的内存空间，则直接追加，返回p的地址
	//2.如果p指向的空间无足够的内存空间，则在堆区开辟新内存空间，将原有数据拷贝到新内存空间里，
	//并释放旧内存空间，返回新内存空间的地址
	//****以防追加内存失败，释放原内存空间，尽量使用时以新指针接追加结果

	free(p);
	p = NULL;

	//realloc本身自动释放p2
	return 0;
}

#include<stdlib.h>
#include<string.h>
/*常见错误*/
//①
int main()
{
	int* p = (int*)malloc(40);
	//使用malloc函数不对返回值进行判断
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
			*(p + i) = i;
		free(p);
		p = NULL;
	}
	return 0;
}

//②
int main()
{
	int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)//对动态内存的越界访问
			*(p + i) = i;
	}
	free(p);
	p = NULL;
	return 0;
}

//③
int main()
{
	int a = 0;
	int* p = &a;
	*p = 20;
	free(p);//对非堆区的动态开辟内存空间使用free函数
	p = NULL;
	return 0;
}

//④
int main()
{
	int* p = (int*)malloc(40 * sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
			*p++ = i;//*(p+i)=i,改变了p
	}
	free(p);//使用free释放动态开辟空间的部分
	p = NULL;

	return 0;
}

//⑤
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
		return 0;
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
			*(p + i) = i;
	}
	free(p);
	//...
	//...
	//...
	free(p);//对同一块动态内存多次释放

	//保证free函数使用后立即使p为空指针
	p = NULL;
	return 0;
}

//⑥
#include<windows.h>
int main()
{
	while (1)
	{
		malloc(1);//动态开辟内存忘记释放（内存泄漏）
		Sleep(500);
	}

}

int main()
{
	char str[] = "abcdef";
	printf(str);
	return 0;
}

/*案例*/
//①
void Getmemory(char* p)
{
	p = (char*)malloc(100);
}

//保存动态开辟的内存地址的p指针在出函数的时候被销毁

void Test(void)
{
	char* str = NULL;
	Getmemory(str);                 //访问非法内存，程序崩溃 
	strcpy(str, "hello bitch!");
	printf(str);
	//未释放动态开辟内存,内存泄漏 
}

int main()
{
	Test();

	return 0;
}
//改正1
void Getmemory(char** p)/**/
{
	*p = (char*)malloc(100);/**/
}

void Test(void)
{
	char* str = NULL;
	Getmemory(&str);/**/
	strcpy(str, "hello bitch!");
	printf(str);
	free(str);/**/
	str = NULL;/**/
}

int main()
{
	Test();

	return 0;
}

//改正2
char* Getmemory(char* p)/**/
{
	p = (char*)malloc(100);
	return p;/**/
}

void Test(void)
{
	char* str = NULL;
	str = Getmemory(str);/**/
	strcpy(str, "hello bitch!");
	printf(str);
	free(str);/**/
	str = NULL;/**/
}

int main()
{
	Test();

	return 0;
}

//②返回栈空间的地址的问题（非法访问）
char* GetMemory(void)
{
	char p[] = "hello bitch!";      //出函数时p数组存在空间已被销毁             
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}

int main()
{
	Test();
	return 0;
}

//改正1.
char* GetMemory(void)
{
	static char p[] = "hello bitch!";/**/      //使用static函数使得数组保存在静态区             
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}

int main()
{
	Test();
	return 0;
}

//改正2.
char* GetMemory(void)
{
	char* p = (char*)malloc(100);/**/               //使用malloc函数在堆区开辟动态空间
	return p;                              //虽然出函数后p指针被销毁但其指向的空间并未被销毁
}

void Test(void)
{
	char p[] = "hello bitch!";/**/
	char* str = NULL;
	str = GetMemory();
	printf(p);/**/
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}

//③
void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello bitch!");
	printf(str);
	//free(str);                               //没有释放动态开辟内存，导致内存泄漏   
	//str=NULL;
}

int main()
{
	Test();
	return 0;
}

//④
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);                           //只是释放了空间，并不会把str置为空指针
	if (str != NULL)
	{
		strcpy(str, "bitch!");            //空间已被释放，str已为野指针，造成非法访问
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}

/*柔性数组*/
//结构体中最后一个元素允许为未知大小的数组
struct S
{
	int n;
	int arr[10];
};
//1.
struct S
{
	int n;
	int arr[];//柔性数组第一种写法
};
//2.
struct S
{
	int n;
	int arr[0];//柔性数组第二种写法
};

int main()
{
	//struct S s;
	//printf("%d\n",sizeof(s));//4，不计算柔性数组的大小
	int i = 0;
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->n = 100;
	for (i = 0; i < 5; i++)
		ps->arr[i] = i;//0 1 2 3 4

	struct S* ptr = realloc(ps, 44);

	if (ps != NULL)
		ps = ptr;

	for (i = 5; i < 10; i++)
		ps->arr[i] = i;
	for (i = 0; i < 10; i++)
		printf("%d ", ps->arr[i]);

	free(ps);
	ps = NULL;

	return 0;
}

