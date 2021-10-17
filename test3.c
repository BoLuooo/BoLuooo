#include <stdio.h>

//不变的量就是常量 
#define max 10000

int main()
{ 
	/*1.字面常量*/
	3.14;
	10;
	'a';
	"abcdefg";






	//2.const修饰的常变量
	const int num = 10; //变量  num是变量 如果不想num变  就加一个const int num （const）
	//被const修饰了就不能变  num就是常变量 具有常属性（不能被改变的属性）
	num = 20;
	printf("num=%d", num);


	int arr[10] = { 0 };//10个元素

	const int n = 10;            //n根本上还是个变量  只是加const修饰属性

	int arr2[n] = { 0 };//n是变量 这里不行 必须是常量值








	//3.  #define定义的标识符常量    MAX就是被定义的量 可以做括号内外定义 但不能随便改被定义的量
	// max=2000    错误  因为开头定义了MAX 不能中间改
	int n = max;
	printf("n=%d\n", n);


	return 0;
}









//4.枚举常量

//性别  这种枚举类型的变量 未来的可能取值  在括号内枚举出来
//这三个值就是枚举常量
//在下面定义MALE=3  可以运行  因为是赋初值  默认开始的数值
enum Sex
{
	//MALE=3;
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	
	//可以一一列举的常量  设置一个变量s
	enum Sex s = MALE;
	//MALE = 3; 错误 不能运行的
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	//枚举常量默认从0开始  代码是 0   1  2  三个值不能在代码中

	return 0;
}