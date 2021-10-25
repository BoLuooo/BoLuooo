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



//union 联合体（共用体）


//void 无-空  


//volatile C语言暂时不讲
 
//define  include 不是关键字 是预处理指令



//typedef是类型重命名  类型定义  
//你叫张三--别人喜欢叫你阿三  是一个意思 

typedef unsigned int u_int;
int main()
{
	unsigned int num = 100;
	 
	u_int num2 = 100;

		return 0;
}





//static 静态的                
//static 修饰局部变量，改变局部变量的生命周期（本质上是改变了变量的存储类型）
//static 修饰全局变量
//static 修饰函数

void test()
{
	static int a = 1; //static 函数出来以后不会销毁，所以就是2接着循环 下一次3 出来循环 4..5..6..7..8..
	a++;
	printf("%d\n", a);
}

int main()
{
	int i = 0;
		while (i<10)
		{
			test();
			i++;
		}

		return 0;
}








//10ADD的全局变量不知道 需要声明一下
//extern 声明外部符号 
//全局变量整个工程里面都能用

extern int g_val;
//static修饰全局变量  使得这个全局变量只能在自己坐在的源文件（.c）文件内部使用
//出了本源文件不能使用 其他源文件不能使用

int main()
{
	printf("%d\n", g_val);
	return 0;
}
//全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
//但是被static修饰以后 就变成内部链接属性  不能链接到这个静态的全局变量












//使用声明函数 可以把10ADD的函数全局使用

//声明函数

extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);


	return 0;
}









