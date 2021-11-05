#define  _CRT_SECURE_NO_WARNINGS 1

//编写代码，演示多个字符从两端移动，向中间汇聚。
//就是 你好世界  开始 你##界    从两边到中间
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	int left = 0;
	int right = strlen(arr1)-1;   //strlen 是求长度 arr1  - 1 就是最后一个数的值  带头文件 string.h

	//定义好最左和最右 开始带入arr2   然后再左++  右--  就是一个循环
	while (left<=right) //所以while条件就是 left<=right 两边都没路可走
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);

		Sleep(1000);  //睡眠1秒   sleep函数单位是毫秒   1000毫秒是1秒  要带头文件Windows.h
		system("cls");//清空屏幕  想把一串变成一行
		//一般清空会把最后一个也清  所以在代码最后再加一次打印arr2 就可以了
		left++;
		right--;
	}
	printf("%s", arr2);

	return 0;
}







//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。

int main()
{
	int i = 0;
	//假设正确的密码是字符串123456
	char password[20] = { 0 };
	for (i = 0; i <= 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		/*if(password =="123456") *///错误写法 两个字符串的比较 不能使用==  应该使用strcmp函数  专门比较的
		if (strcmp(password, "123456") == 0)//strcmp引头文件string  比较是只是内容 对比abcdefg  和 abcdeqqqq  a=a  依次对比  对应位置上的阿斯科码值
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	//3次密码全输错
	if (i == 3)
		printf("三次密码均错误，退出程序\n");

	return 0;
}








//写一个猜数字游戏  
//自动产生1-100的之间的随机数
//猜数字    猜对了恭喜你游戏结束      猜错了会说猜大猜小 知道对 
//游戏一直玩 除非退出

#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("******************************\n");
	printf("*********   1.play   *********\n");
	printf("*********   0.exit   *********\n");
	printf("******************************\n");
}



void game()
{
	//猜数字游戏的实现  先生成随机数  然后猜数字
	//生成随机数组有库函数 rand  rand 头文件 stdlib.h
	 
	int ret = rand()%100+1; //%100的余数就是0-99  然后 +1 范围就是 1-100 
		//printf("%d\n", ret);  //但是随机生成的数字下一次还是一样的  rand函数返回了一个0-32767之间的数字 不够随机  所以要在之前调用srand是随机生成器
		//现在生成成功随机数字以后 不能打印给玩家看了 所以要把打印去掉

	//进入猜数字环节
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了");
			break;
		}
	}

}






int main()
{

	int input = 0;
	//因为在上面函数初始值不够随机  所以把srand从rand上面调出来 放int 固定初始值 出来的数就会随机很多  让srand只调一次
	srand((unsigned int)time(NULL));  //srand随机生成 调用头文件 stdlib.h    srand变化 rand也变化 但是数字不会变化  所以srand的值必须是随机 变得量 才能随机 不能是100 200固定
	//随机的值在电脑上 是时间  --- 时间戳 获取时间戳是 time 库函数 time 函数头文件是time.h  
	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				printf("猜数字\n");
				game();
				break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
			printf("选择错误,请重新选择\n");
				break;
		}
	} while (input);

	return 0;
}

