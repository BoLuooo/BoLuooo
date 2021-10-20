#define  _CRT_SECURE_NO_WARNINGS 1
//注释是用来解释复杂代码的  就是双斜
#include <stdio.h>

int main()
{
	//int a =10 ;//c++注释风格   主要用这种

	/*int b = 10;*/       //C语言的注释风格  不支持嵌套注释（注释里面只能有一个）
	
	return 0;
}







//选择语句 如果xx  如果xx

int main()
{
	int input = 0; //存放输入的值的变量
	printf("加入比特:>");
	printf("好好学习吗(1/0)?>:");
	scanf("%d", &input);


	if (input == 1)
		{
 printf("好offer\n");
      }
	else
		{
 printf("卖红薯");
       }


	return 0;
}






//循环语句 有些事一直做 重复做
//30000行代码  找一个不错的工作
int main()
{
	int line = 0;
	while (line < 30000)//循环while
	{
		printf("写代码:%d\n",line);
		line++;
	}
	
	if (line == 30000)
	{
		printf("好offer");
	}


	return 0;
}