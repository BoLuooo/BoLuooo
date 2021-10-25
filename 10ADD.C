#define  _CRT_SECURE_NO_WARNINGS 1

////全局变量
////int g_val=2022;   
////加上全局static  不能在10test中使用  只能在10ADD使用
////static只能在本文件使用
//static int g_val = 2022;
////全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
////但是被static修饰以后 就变成内部链接属性  不能链接到这个静态的全局变量





//怎么把这个函数用到10test里面

//全局变量
//int Add(int x, int y)
//{
//    return x + y;
//}



//换static修饰函数   
static int Add(int x, int y)
{
    return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);


	return 0;
}