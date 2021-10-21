#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//函数 数学学过  例如f（x）=2*x+5
//C语言的函数也是一样的  f（x，y）=x+y   Add（x，y）=x+y
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("输入两个操作数:>");
	scanf("%d%d", &num1, &num2);

	//int sum = num1 + num2;  用函数的方式解决

	int sum = Add(num1, num2);
	printf("sum=%d\n", sum);


	return 0;
}









//数组

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	//......过于麻烦一个一个写
		//数组--一组相同类型的元素集合
		//10给整型1-10存起来

		//数组是用下标来访问的
		//         下标0  1 2 3 4 5 6 7 8 9  当写出arr[0]默认第一个数 以此类推
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	/*char ch[5] = { 'a','b','c' };*///不完全初始化 剩余默认0



	return 0;
}