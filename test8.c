#define  _CRT_SECURE_NO_WARNINGS 1
//算术操作符 + - * / %
//移位操作符 >>右移操作符  <<左移操作符 
//位操作符  & 按位与   |按位或  ^按位异或



#include <stdio.h>
int main()
{
	/*int a = 9 / 2;*/  //得到的是4
	/*float a = 9 / 2.0;*/ //得到的是4.0000     改成9/2.0 加.0就得出4.50000
	int a = 9 % 2;        //   %是取模 取余数  
	printf("%d\n", a);


	return 0;
}





//移位操作符 ---移动的是二进制位  a-2  000000000000000000000010   位移左一个  后面10补一个 变成000000000000000000000100  100变成2的2次方是4

int main()
{
	int a = 2;
	int b=a << 1;
	printf("%d\n", b);



	return 0;
}









//赋值操作符

int main()
{
	int a = 2;
	a = a + 5;
	a = 6;
	a += 5;
	a = a - 3;
	a -= 3;
	a = a % 3;
	a %= 3;
	printf("%d\n", b);



	return 0;
}










//单目操作符  :只有一个操作数   a+b有两个操作数 叫双目操作符   

int main()
{ 
	//0表假  非0就是真
	int a = 10;
		printf("%d\n", !a);//！把a变成假    如果a=10变成0  则假变成真 ！就是真变假假变真

		if (a)
		{
			//如果a为真 ，做事
		}
		if (!a)
		{
			//如果a为假，做事
		}

		a = -5;
		a = -a;
		a = +a;//+正值一般省略




	return 0;
}







int main()
{
	//sizeof是一个操作符，计算类型货真变量的大小
	int a = 10;
	printf("%d\n", sizeof(int));  //sizeof后面的括号能省略  说明sizeof是操作符  不是函数 函数的括号不能省略
	printf("%d\n", sizeof(a));   //通常使用不会省略

	return 0;
}



int main()
{
	//10*4=40
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)); //  结果40  计算的是数组的总大小，单位是字节
	printf("%d\n", sizeof(arr[0]));//结果是4

	int sz = sizeof(arr) / sizeof(arr[0]); //结果是10
	printf("%d\n", sz);
	return 0;
}