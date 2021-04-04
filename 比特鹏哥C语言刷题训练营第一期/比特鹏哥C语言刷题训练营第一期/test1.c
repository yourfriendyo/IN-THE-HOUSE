#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 

//①
//写主函数
//main函数是程序的入口，代码是从main函数的第一行开始执行的
//一个工程中，有且仅有一个mian函数

int main()
{
	printf("Practice makes perfect!");

return 0;
}

//②
//换行转义字符'\n'

int main()
{
	printf("v   v\n v v \n  v  ");

return 0;
}

//③
//确定不同整形数据类型在内存中占多大字节
//计算机中的单位：
//bit 比特位
//byte 字节 == 8 bit
//kb ==1024 byte
//mb ...
//gb ... 
//tb ...

//sizeof - C语言的操作符
//用于计算变量或类型所站空间的大小，计算结果是字节
int main()
{
	printf("The size of short is %d bytes.\n",sizeof(short));//short  2
	printf("The size of int is %d bytes.\n",sizeof(int));//int 4
	printf("The size of long is %d bytes.\n",sizeof(long));//long 4
	printf("The size of long long is %d bytes.\n",sizeof(long long));//long long 8

return 0;
}

//④

//便于在程序中处理数据，缩短了二进制补码的长度
//八进制数字 - 0...(一个数字前面放个0表示八进制数字)
//012 = 1*8^1+2*8^0
//(权重 - 第一位的权重为0 第二位的权重为1)

//十六进制数字 - 0x...(一个数字前面放一个0x表示十六进制数字)
//0x12 = 1*16^1+2*16^0
int main ()
{
	printf("0%o 0X%X\n",1234,1234);
	
	//使用前导‘#’控制前导显示
	printf("%#o %#x\n",1234,1234);
	//02322 0x4d2
	//把'x'写成‘X’，其值全部小写字母变成大写字母
	printf("%#o %#X\n",1234,1234);
	//02322 0X4D2

return 0;
}

//格式控制符
//%c - 字符
//%hd - 端整型
//%d - 整形
//%s - 字符串
//%f - 单精度浮点型
//%lf - 双精度浮点型
//%p - 地址格式
//...

//⑤
//反向输出四位数
//输入1234，输出4321

int main()
{
	int n=0;
	//输入
	scanf("%d",&n);///1234
	//输出
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

//⑥
//实现字母大小写转换

//函数 getchar - 输入一个字符
//函数 putchar - 输出一个字符
//计算机存储二进制码 ACSII码值
// A - 65  a - 97

int main()
{
	int ch=0;
	//EOF - end of file 文件结束标志 
	while((ch = getchar())!=EOF)//当前代码停不下来不符合oj判定，如果不输入了，即读取失败，就是EOF，就停下来了
	{
		//putchar(ch+32);
		//printf("\n");
		printf("%c\n",ch+32);
		getchar();//直接读走'*'
	}

return 0;
}
//getchar 从键盘读取字符
//输入缓冲区中有字符和回车键ACSII码对于的字符'\n'
//getchar下次未等输入直接读取'\n'





