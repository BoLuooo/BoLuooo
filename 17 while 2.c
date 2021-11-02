#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("请输入密码:>");                           
	scanf("%s", password);
	printf("请确认密码(Y/N):>");       //现在是没有确认就显示确认失败了   getchar和scanf 是输入函数    并不是从键盘直接拿数据  从输入缓冲区里拿
	int ch = getchar();                      //因为scanf拿走了密码   getchar只读取到了\n  所以\n不等于Y  走了失败
	if (ch == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}



	return 0;	
}





int main()
{
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	printf("请确认密码(Y/N):>");  

	//清理缓冲区  处理\n
	getchar(); //这一步拿走\n  所以下一个getchar就会等待                            
	 
	int ch = getchar();                 //  如果输入的密码是123 空格 ASD  则会直接跳失败                    
	if (ch == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}



	return 0;
}







int main()
{
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	printf("请确认密码(Y/N):>");
	//清理缓冲区不行了  改成while循环
/*	getchar();  */  

	//清理缓冲区中的多个字符
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	int ch = getchar();                                 
	if (ch == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}

	return 0;
}






//这个代码只会打印数字字符  ABCD不会打印 1234会复制打印
int main()
{
	int ch = 0;
	while ((ch = getchar())!= EOF)
	{
		if (ch < '0' || ch> '9');
		   continue;
		   putchar(ch);
	}

	return 0;
}


int main()
{
	int a = 1;   //初始化  值
	while (a <= 100)   //判断部分
	{
		printf("%d\n", a);
		a+=2;           //循环变量的调整部分  三个部分一个变化三个都变  但是离得太远 FOR循环就解决了这个问题
	}
	return 0;
}

