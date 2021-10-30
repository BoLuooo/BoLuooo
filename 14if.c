#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//IF () 加括号 

int main()
{

	if (age >= 18);
	printf("成年\n");





	if (age >= 18)
		printf("成年\n");

	else                          //if else()正常默认只跟一条语句 如果想控制多条语句  就加{}
	{
		printf("未成年\n");
		printf("不能谈恋爱\n");
	}







	int age = 60;
	if (age < 18)
		printf("少年\n");                   
        else if (18 <= age <= 26) //答案是青年  逻辑和语法上错误
		printf("青年\n");

	
	


	
	
	

	
	
	int age = 120;
	if (age < 18)
		printf("少年\n");
	else if (age >= 18 & &age < 26)
		printf("青年\n");
	else if (age >= 26 && age <= 40)
		printf("中年\n");                                   // IF  ELSE IF   就是多分支   &&是并且的意思  年龄大于等于26并且小于40的意思
	else if (age >= 40 && age < 60)
		printf("壮年\n");
	else if (age >= 60 && age <= 100)
		printf("老年\n");
	else
		printf("老不死");















	return 0;
}











int main()
{                                    //代码不打印   else和离得最近的if匹配
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n"); 
	return 0;
}







int main()
{
	int  a = 15;
	if (a % 2 == 1)
		printf("奇数\n");


	return 0;
}




//打印1-100的奇数
int main()
{
	int a = 0;
	for (a = 1; a <= 100; a++)
	{
		if (1 == a % 2 )
			printf("%d\n" , a);
	}
	return 0;
}


int main()
{
	for (int a = 1; a <= 100; a +=2)
	{
		printf("%d\n", a);
	}

	return 0;
}
