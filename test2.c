#include <stdio.h>


////作用域和生命周期
//作用域
////局部变量的作用域：就是变量所在局部的范围  出了范围不能用
////全局变量的作用域：整个工程
int g_val = 2021;  //全局变量  下面的都能用  执行代码必须在括号里面（比如打印 计算等等）
int main()
{
	printf("1:%d\n",g_val);
		
	printf("haha\n");

		{int a = 10;
		printf("a=%d\n", a);   //哪里有作用  上面定义A 下面打印A  如果再加一个括号定义A  则不能启动代码  printf识别不到A  必须在同一个括号里面
		
		printf("2:%d\n",g_val);
		}
		
		printf("3:%d\n",g_val);

	return 0;
}




//两个文件的程序怎么使用一起   ADD的全局变量到TEST
//声明一下变量
extern int g_val;//加这一句声明 就能打印出来了
int main()
{

	printf("%d\n", g_val);
	return 0;
}


//生命周期（变量的生命周期 创建销毁之间的时间段）
//局部变量的生命周期：进入局部范围生命开始 出局部范围生命结束
//全局变量的生命周期：程序的生命周期  main里外都能用  全局变量不能相同名字

int main()
{
	{                       //进入局部
	int a = 10;
	printf("%d\n", a);
	}                      //出局部


	return 0;
}