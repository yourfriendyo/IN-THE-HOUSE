#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 

//��
//д������
//main�����ǳ������ڣ������Ǵ�main�����ĵ�һ�п�ʼִ�е�
//һ�������У����ҽ���һ��mian����

int main()
{
	printf("Practice makes perfect!");

return 0;
}

//��
//����ת���ַ�'\n'

int main()
{
	printf("v   v\n v v \n  v  ");

return 0;
}

//��
//ȷ����ͬ���������������ڴ���ռ����ֽ�
//������еĵ�λ��
//bit ����λ
//byte �ֽ� == 8 bit
//kb ==1024 byte
//mb ...
//gb ... 
//tb ...

//sizeof - C���ԵĲ�����
//���ڼ��������������վ�ռ�Ĵ�С�����������ֽ�
int main()
{
	printf("The size of short is %d bytes.\n",sizeof(short));//short  2
	printf("The size of int is %d bytes.\n",sizeof(int));//int 4
	printf("The size of long is %d bytes.\n",sizeof(long));//long 4
	printf("The size of long long is %d bytes.\n",sizeof(long long));//long long 8

return 0;
}

//��

//�����ڳ����д������ݣ������˶����Ʋ���ĳ���
//�˽������� - 0...(һ������ǰ��Ÿ�0��ʾ�˽�������)
//012 = 1*8^1+2*8^0
//(Ȩ�� - ��һλ��Ȩ��Ϊ0 �ڶ�λ��Ȩ��Ϊ1)

//ʮ���������� - 0x...(һ������ǰ���һ��0x��ʾʮ����������)
//0x12 = 1*16^1+2*16^0
int main ()
{
	printf("0%o 0X%X\n",1234,1234);
	
	//ʹ��ǰ����#������ǰ����ʾ
	printf("%#o %#x\n",1234,1234);
	//02322 0x4d2
	//��'x'д�ɡ�X������ֵȫ��Сд��ĸ��ɴ�д��ĸ
	printf("%#o %#X\n",1234,1234);
	//02322 0X4D2

return 0;
}

//��ʽ���Ʒ�
//%c - �ַ�
//%hd - ������
//%d - ����
//%s - �ַ���
//%f - �����ȸ�����
//%lf - ˫���ȸ�����
//%p - ��ַ��ʽ
//...

//��
//���������λ��
//����1234�����4321

int main()
{
	int n=0;
	//����
	scanf("%d",&n);///1234
	//���
	//1234 % 10 = 4
	//1234 / 10 = 123; 
	
	//123 % 10 = 3
	//123 / 10 = 12;
	
	//12 % 10 = 2
	//12 / 10 = 1; 
	
	//1 % 10 = 1
	//1 / 10 = 0

	while(n)
	{
		printf("%d",n%10);
		n/=10;
	}
	printf("\n");

return 0;
}

//��
//ʵ����ĸ��Сдת��

//���� getchar - ����һ���ַ�
//���� putchar - ���һ���ַ�
//������洢�������� ACSII��ֵ
// A - 65  a - 97

int main()
{
	int ch=0;
	//EOF - end of file �ļ�������־ 
	while((ch = getchar())!=EOF)//��ǰ����ͣ������������oj�ж�������������ˣ�����ȡʧ�ܣ�����EOF����ͣ������
	{
		//putchar(ch+32);
		//printf("\n");
		printf("%c\n",ch+32);
		getchar();//ֱ�Ӷ���'*'
	}

return 0;
}
//getchar �Ӽ��̶�ȡ�ַ�
//���뻺���������ַ��ͻس���ACSII����ڵ��ַ�'\n'
//getchar�´�δ������ֱ�Ӷ�ȡ'\n'





