#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//switch (整型表达式)
//{
//    语句项；
//}


//语句项是case语句
//如下：
//case 整形常量表达式:
//    语句;

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)                         //switch 后面跟整型常量表达式   不能是别的     case 进 break 出 
	{   
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
		
	}

	return 0;
}





//1 - 5 工作日
// 6 - 7 休息日 代码逻辑改变  break不是硬性要求  是你想要的时候用

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;

	default:                       //我们只设定了1-7的数字  如果输入了别的 则加入一个提示   只要是符合需求 default 可以在别的地方 默认在最后！
		printf("输入错误\n");
		break;
	}

	return 0;
}






int main()
{
    int n = 1;
    int m = 2;
    switch (n)  // n=1  从case1进
    {
    case 1:  //m就成了3   case1 后面没有break 执行case2
        m++;
    case 2:  // case2 的n就变成了2   然后执行case3
        n++;
    case 3:        //case3进去变成嵌套   n变成2  case1不执行跳过 去case2 
        switch (n)
        {             //switch允许嵌套使用
        case 1:
            n++;
        case 2:
            m++;   
            n++;
            break;     //m=4 n=3   break结束
        }
    case 4:     //进case4   m=4  +  1 =5
        m++;
        break;
    default:
        break;
    }
    printf("m = %d, n = %d\n", m, n);  所以m=5 n=3
    return 0;
}
