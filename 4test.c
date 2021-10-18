#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//字符串就是一串字符 用双引号括起来的一串字符

int main()
{
	"abcdef";
	"hello";


	return 0;
}










#include <string.h>

int main()
{

	//字符数组  数组是一组相同类型的元素  
	//字符串在结尾的位置隐藏了一个\0的字符
	//\0是字符串的结束标志
	char arr[]="hello";


	char arr1[] = "abc";   //abc\0 已经结束了 有\0
	char arr2[] = {'a','b','c'};    //   abc 前后没有限制 后面内容未知 所以是乱码  
	//如果在'c'，后面加'\0'  则结束 跟arr1 结果一样
	

	//打印字符串
	printf("%s\n", arr1);
	printf("%s\n", arr2);



	//求字符串的长度   
	//下面会出现strlen未定义   需要引用头文件#include <string.h>
	
	int len = strlen("abc"); //string length
	printf("%d\n", len);
	 

	printf("%d\n", strlen(arr1)); //固定值 abc后面\0结束

	printf("%d\n", strlen(arr2)); //随机值 a,b,c 随机  放\0结果也是3  就结束



	return 0;
}