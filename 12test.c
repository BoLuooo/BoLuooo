#define  _CRT_SECURE_NO_WARNINGS 1

//define是预处理指令
//define定义标识符常量
#include <stdio.h>


#define MAX 1000
int main()
{
	printf("%d\n", MAX);
	return 0;
}




//define 定义宏
#define ADD(x, y)x+y
int main()
{
	printf("%d\n", 4*ADD(2, 3));  //4*ADD ----4*2+3=11
	return 0;
}


#define ADD(x, y) ((x)+(y))
int main()
{
	printf("%d\n", 4 * ADD(2, 3));  //4*ADD ----20 变成了一个整体
	return 0;
}
