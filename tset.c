#define  _CRT_SECURE_NO_WARNINGS 1
//报错复制上面这个到第一行 


#include <stdio.h>;

int a = 100;

int main()
{
	int age = 20;
	double weight = 50.5;
	age = age + 1;
	printf("%d\n", age);
	weight = weight - 20;
	printf("%lf\n", weight);






	//大括号内的都是局部变量   a在大括号外都是全局变量
	int a = 10;
	//局部和全局名字一样的时候局部优先  不建议全局变量和局部变量名字一样

	printf("%d\n", a);




	//写一个代码求两个整数的和   scanf函数是输入函数
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	
		return 0;
}

