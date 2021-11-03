#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
for循环   for(表达式1；表达式2；表达式3)   初始化 调整 判断 放到一起 优于while循环
int main()
{
	int a = 0;
	for (a = 1; a <= 10; a++)        //答案是1-10
	{
		printf("%d", a);
	}
	return 0;
}


int main()
{
	int a = 0;
	for (a = 1; a <= 10; a++)
	{
		if (a == 5)
			break;          //答案是1234  break在for循环也是终止作用
		printf("%d", a);
	}
	return 0;
}


int main()
{
	int a = 0;
	for (a = 1; a <= 10; a++)
	{
		if (a == 5)
			continue;              //1234678910  跳过5  不会出现死循环   和while循环
		printf("%d", a);
	}
	return 0;
}




int main()
{
	int a = 0;
	for (a = 1; a <= 10; a++)
	{
		printf("%d", a);   
		a = 5;     //不可在for 循环体内修改循环变量，防止 for 循环失去控制。  在for循环内部改变 导致答案是6死循环
	/*	int j = 0;
		for (j = 0; j < 10; a++);
		{
			printf("呵呵\n");
		}*/                                                  //循环体内改变循环变量 不可取
	}


	return 0;
}






//建议for语句的循环控制变量的取值采用“前闭后开区间”写法。
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)  //左边闭合  i=0  右边开放  i<10
	{
		printf("%d", arr[i]);
	}

	return 0;
}



int main()
{
	//for判断部分的省略 就是死循环 判断部分恒为真 不建议随便省略 可以省略东西
	for (;;)
	{
		printf("hehe\n");
	}

	return 0;
}



//不建议省略 会带来一些问题
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 3; i++)   //第一次进去在J循环里面  然后J变成了3  I出来循环发现J已经变成3  所以直接结束 就打印了3次呵呵、
	{
		for (; j < 3; j++)   //内层j++执行了3次  j就变成了3
		{
			printf("hehe\n");
		}
	}

	return 0;
}



//练习题   循环0次   表达式进去  K=0是判断部分 0为假 所以不循环
int main()
{
    int i = 0;
    int k = 0;
    for (i = 0, k = 0; k = 0; i++, k++)
        k++;
    return 0;
}
