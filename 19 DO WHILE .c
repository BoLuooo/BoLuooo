#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//do   ����ȥѭ�����
//ѭ�����;
//while (���ʽ);   �����ж�




//while�����ж���ִ��   do while ����ִ�����ж�



// ѭ������ִ��һ�Σ�ʹ�õĳ������ޣ����Բ��Ǿ���ʹ�á�
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
			break;     //1234 û�� 5   break����ֹ
		    continue;          //1234 4��ѭ��   continue������ѭ��
		printf("%d", i);
		i++;
	} while (i <= 10);

	return 0;
}







//��N�Ľ׳� 1-n������
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





//��ʦ����
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










//���� 1!+ 2!+ 3!+ ���� + 10!  1�Ľ׳˼ӵ�10�Ľ׳�
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



//��ʦ����
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;  //����N�׳�֮ǰ ��ret��ʼΪ1  ���������´�ѭ��
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










//��һ�����������в��Ҿ����ĳ������n�������ֲ��ң�

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};    //�±�0--9
	int key = 7;  //Ҫ���ҵ�����7   ��arr������������в���k��7����ֵ
	//ȷ������±�0  �ұ��±�9��
	int sz = sizeof(arr) / sizeof(arr[0]);  // arr��С����arr�������
	int left = 0;
	int right = sz-1;
	while (left <= right)
	{
	int mid = (left + right) / 2;  //Ѱ��ƽ��ֵ 0+9/2=4  4���±����5  ����mid����5
		if (arr[mid] < key)   //��Ϊ��7С ���Դ�6��ʼ ��� mid +1  5+1=6   6���±���5  ��left���6���±�
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ����±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
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
