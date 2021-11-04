#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//do   下面去循环语句
//循环语句;
//while (表达式);   到了判断




//while是先判断再执行   do while 是先执行再判断



// 循环至少执行一次，使用的场景有限，所以不是经常使用。
int main()
{
	int i = 1;
	do
	{
		printf("%d", i);
		i++;
	} while (i <= 10);

	return 0;
}


int main()
{
	int i = 1;
	do
	{
		if (i == 5) 
			break;     //1234 没有 5   break是终止
		    continue;          //1234 4死循环   continue进入死循环
		printf("%d", i);
		i++;
	} while (i <= 10);

	return 0;
}







//求N的阶乘 1-n的数字
int main()
{
	int a = 0;
	int n = 0;
	int num = 1;
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		num = num * a;
	}
	printf("%d\n", num);
	return 0;
}





//老师讲解
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}










//计算 1!+ 2!+ 3!+ …… + 10!  1的阶乘加到10的阶乘
int main()
{
	int i = 0;
	int n = 0;
	int num = 1;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 1;
		num = 1;
		for (j = 1; j <= i; j++)
		{
			num = num * j;
		}
		sum += num;
	}
	printf("sum = %d\n", sum);
	return 0;
}



//老师讲解
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;  //计算N阶乘之前 把ret初始为1  否则会带入下次循环
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}



int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}










//在一个有序数组中查找具体的某个数字n。（二分查找）

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};    //下标0--9
	int key = 7;  //要查找的数字7   在arr这个有序数组中查找k（7）的值
	//确定左边下标0  右边下标9；
	int sz = sizeof(arr) / sizeof(arr[0]);  // arr大小除以arr数组个数
	int left = 0;
	int right = sz-1;
	while (left <= right)
	{
	int mid = (left + right) / 2;  //寻找平均值 0+9/2=4  4的下标就是5  所以mid就是5
		if (arr[mid] < key)   //因为比7小 所以从6开始 变成 mid +1  5+1=6   6的下标是5  把left变成6的下标
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}




int main()
{
    char psw[10] = "";
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; ++i)
    {
        printf("please input:");
        scanf("%s", psw);
        if (strcmp(psw, "password") == 0)
            break;
    }
    if (i == 3)
        printf("exit\n");
    else
        printf("log in\n");
}
