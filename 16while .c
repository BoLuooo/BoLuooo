 #define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//while循环  do while 循环  for 循环
//while 语法结构   跟if语句很相似
//while (表达式)
//循环语句;


int main()
{
	if (1)
		printf("hehe\n");//只打印一次
	while (1)
		printf("hehe\n");//打印循环hehe 表达式为真 非0 循环语句一定被执行



	return 0;
}



int main()
{
	int a = 1;  //1--10数字   1进去小于10  进入循环a++  2   再进入循环  a++ 3 到10结束
	while (a <= 10)
	{
		printf("%d", a);
		a++;

	}

	return 0;
}



//while循环也有break      continue
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)          //只有1234  没有5 在while循环中 break的作用就是用于永久的终止循环  本来要10次 i=5 就跳出结束
			break;
		printf("%d", i);
		i++;
	}

	return 0;
}

//把break换成continue
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)   //打印出1234  光标在闪  说明代码没有结束 进入死循环
			continue; //跳过本次循环后面的代码 把I++跳过了 所以进入了i=5 =5 进入死循环

		printf("%d", i);
		i++;
	}

	return 0;
}


//break在while循环中的作用：
//其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。
//所以：while中的break是用于永久终止循环的。

//continue在while循环中的作用就是：
//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
//而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。


int main()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)    //getchar是获取一个字符  输A弹A B弹B          EOF是-1  END OF FILE 文件结束标志
	{                               //如果想结束代码 要ctrl + z 结束getchar
		putchar(ch);       //putchar是输出一个字符
	}
	return 0;
}
