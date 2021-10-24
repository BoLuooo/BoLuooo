#define  _CRT_SECURE_NO_WARNINGS 1
//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//2.变量名不能是关键字
//关键字
// auto  break   case  char  const   continue  default  do   double else  enum   
// extern float  for   goto  if   int   long  register    return   short  signed
// sizeof static struct  switch  typedef union  unsigned   void  volatile  while


#include <stdio.h>
int main()
{
	//int char
	//C语言的关键字 auto：每个局部变量都是auto修饰的   
	{
		int a = 10;//a是自动创建 自动销毁的---自动变量 前面都应该有个auto 基本上省略
		//auto int 被省略 新的C语言语法有其他用法 暂时不考虑
	}

	
	return 0;
}



//extern是声明外部符号的


	//register 寄存器关键字  

int main()
{

	//大量频繁被使用的数据，放在寄存器中 提升效率
	//编译器现在已经能自己识别放寄存器了
	register int num = 100;//建议num的值存放在寄存器中 只能做建议
	//计算机中数据可以存储在 寄存器（更小） 高速缓存（几十MB） 内存（16G） 硬盘（500G 买） 网盘（2T免费） 越小造价越高速度越快

	return 0;
}



//signed描述有符号的  10 -20   unsigned描述无符号的  

//static 静态的  


//union 联合体（共用体）


//void 无-空  


//volatile C语言暂时不讲
 
//define  include 不是关键字 是预处理指令