#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int num = 10;
    &num;//取出num的地址
       //注：这里num的4个字节，每个字节都有地址，取出的是第一个字节的地址（较小的地址）
    printf("%p\n", &num);//打印地址，%p是以地址的形式打印
    return 0;
}



int main()
{
	int a = 10;//a在内存中要分配空间 --4个字节
	printf("%p\n,&a");
	int * pa = &a; //pa是用来存放地址的，C语言中叫指针变量
	//*说明pa是指针变量
	//int 说明pa指向的对象是int类型


	char ch = 'w'
	char *	pc = &ch;

	return 0;
}



int main()
{
	int* pa = &pa; //能放在自身 但是行不通  不使用

	return 0;
}


//指针 就是 地址

int main()
{
	int a = 10;
	
	int* pa = &a;

	*pa = 20;//* 叫解引用操作， *pa就是通过pa里面的地址找到a

	printf("%d\n", a);//改变了a 成了20  

	return 0;
}



//指针变量的大小
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long *)); 
	printf("%d\n", sizeof(double*));
	return 0;
}
//打印出来全是4  指针是用来存放地址 指针有多大取决地址有多大空间     X86就是4  X64就是8  
//指针大小在32位平台是4个字节，64位平台是8个字节。