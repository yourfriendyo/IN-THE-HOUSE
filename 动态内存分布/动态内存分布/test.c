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


/*��̬�ڴ����*/

//������malloc��free
int main()
{
	//���ڴ�����10�����͵Ŀռ�
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)//��鷵��ֵ
		//��ӡ����ԭ��
		printf("%s\n", strerror(errno));
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i) = i);
	}
	//�黹(�ͷ�)�ռ�
	free(p);
	p = NULL;//����ָ��p����
	return 0;
}

//������calloc
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
	free(p);//free���������ͷŶ�̬���ٵĿռ�
	p = NULL;

	return 0;
}

//realloc
//������̬�����ڴ�Ĵ�С
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

	//ʹ��realloc������̬�����ڴ�
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

	//realloc������ʹ������
	//1.���pָ��Ŀռ����㹻���ڴ�ռ䣬��ֱ��׷�ӣ�����p�ĵ�ַ
	//2.���pָ��Ŀռ����㹻���ڴ�ռ䣬���ڶ����������ڴ�ռ䣬��ԭ�����ݿ��������ڴ�ռ��
	//���ͷž��ڴ�ռ䣬�������ڴ�ռ�ĵ�ַ
	//****�Է�׷���ڴ�ʧ�ܣ��ͷ�ԭ�ڴ�ռ䣬����ʹ��ʱ����ָ���׷�ӽ��

	free(p);
	p = NULL;

	//realloc�����Զ��ͷ�p2
	return 0;
}

#include<stdlib.h>
#include<string.h>
/*��������*/
//��
int main()
{
	int* p = (int*)malloc(40);
	//ʹ��malloc�������Է���ֵ�����ж�
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

//��
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
		for (i = 0; i < 10; i++)//�Զ�̬�ڴ��Խ�����
			*(p + i) = i;
	}
	free(p);
	p = NULL;
	return 0;
}

//��
int main()
{
	int a = 0;
	int* p = &a;
	*p = 20;
	free(p);//�ԷǶ����Ķ�̬�����ڴ�ռ�ʹ��free����
	p = NULL;
	return 0;
}

//��
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
			*p++ = i;//*(p+i)=i,�ı���p
	}
	free(p);//ʹ��free�ͷŶ�̬���ٿռ�Ĳ���
	p = NULL;

	return 0;
}

//��
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
	free(p);//��ͬһ�鶯̬�ڴ����ͷ�

	//��֤free����ʹ�ú�����ʹpΪ��ָ��
	p = NULL;
	return 0;
}

//��
#include<windows.h>
int main()
{
	while (1)
	{
		malloc(1);//��̬�����ڴ������ͷţ��ڴ�й©��
		Sleep(500);
	}

}

int main()
{
	char str[] = "abcdef";
	printf(str);
	return 0;
}

/*����*/
//��
void Getmemory(char* p)
{
	p = (char*)malloc(100);
}

//���涯̬���ٵ��ڴ��ַ��pָ���ڳ�������ʱ������

void Test(void)
{
	char* str = NULL;
	Getmemory(str);                 //���ʷǷ��ڴ棬������� 
	strcpy(str, "hello bitch!");
	printf(str);
	//δ�ͷŶ�̬�����ڴ�,�ڴ�й© 
}

int main()
{
	Test();

	return 0;
}
//����1
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

//����2
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

//�ڷ���ջ�ռ�ĵ�ַ�����⣨�Ƿ����ʣ�
char* GetMemory(void)
{
	char p[] = "hello bitch!";      //������ʱp������ڿռ��ѱ�����             
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

//����1.
char* GetMemory(void)
{
	static char p[] = "hello bitch!";/**/      //ʹ��static����ʹ�����鱣���ھ�̬��             
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

//����2.
char* GetMemory(void)
{
	char* p = (char*)malloc(100);/**/               //ʹ��malloc�����ڶ������ٶ�̬�ռ�
	return p;                              //��Ȼ��������pָ�뱻���ٵ���ָ��Ŀռ䲢δ������
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

//��
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
	//free(str);                               //û���ͷŶ�̬�����ڴ棬�����ڴ�й©   
	//str=NULL;
}

int main()
{
	Test();
	return 0;
}

//��
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);                           //ֻ���ͷ��˿ռ䣬�������str��Ϊ��ָ��
	if (str != NULL)
	{
		strcpy(str, "bitch!");            //�ռ��ѱ��ͷţ�str��ΪҰָ�룬��ɷǷ�����
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}

/*��������*/
//�ṹ�������һ��Ԫ������Ϊδ֪��С������
struct S
{
	int n;
	int arr[10];
};
//1.
struct S
{
	int n;
	int arr[];//���������һ��д��
};
//2.
struct S
{
	int n;
	int arr[0];//��������ڶ���д��
};

int main()
{
	//struct S s;
	//printf("%d\n",sizeof(s));//4����������������Ĵ�С
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

