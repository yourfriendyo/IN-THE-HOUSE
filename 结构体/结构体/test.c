#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*����ṹ������*/
//��
struct stu 
{
	char name[20];
	int age;
	char number[20];
};

int main()
{
	struct stu student1;

return 0;
}

//��
typedef struct stu 
{
	char name[20];
	int age;
	char number[20];
}stu;

int main()
{
	stu student1;

return 0;
}

//��
struct stu 
{
	char name[20];
	int age;
	char number[20];
}s1,s2,s3;//ֱ�Ӷ���ȫ�ֱ���

int main()
{
	struct stu student1;

	return 0;
}

/*��ʼ���ṹ�����*/
typedef struct stu 
{
	char name[20];
	short age;
	char sex[5];
	char number[20];
}stu;

int main()
{
	struct s1={"yourgirl",20,"Ů","15664511321"};
	stu s2={"yourfriendyo",20,"��","11011011011"}; 
return 0;
}

//�ṹ��Ƕ��
struct S
{
	int a;
	char c;
	char arr[20];
	double b;
};

struct T
{
	char ch[20];
	struct S s;
	char* pc;

};

int main()
{
	char arr[10]="yocheck it uh~";
	struct T t={"hello bitch!",{11,'g',"1615651516",2.333},arr};
	printf("%s\n",t.ch);
	printf("%c\n",t.s.c);
	printf("%lf\n",t.s.b);
	return 0; 
}

/*�ṹ�崫��*/
typedef struct stu 
{
	char name[20];
	int age;
	char number[20];
	char sex[5];
}stu;

void print1(stu s)
{
	printf("name:%s\n",s.name);
	printf("age:%d\n",s.age);
	printf("number:%s\n",s.number);
	printf("sex:%s\n",s.sex);

}

void print2(stu* s)
{
	printf("name:%s\n",s->name);
	printf("age:%d\n",s->age);
	printf("number:%s\n",s->number);
	printf("sex:%s\n",s->sex);
}

int main()
{	
	stu s={"����",18,"2020313215","��"};
	print1(s);
	print2(&s);//��ַ���� 
return 0;
}
