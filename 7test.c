#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//���� ��ѧѧ��  ����f��x��=2*x+5
//C���Եĺ���Ҳ��һ����  f��x��y��=x+y   Add��x��y��=x+y
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("��������������:>");
	scanf("%d%d", &num1, &num2);

	//int sum = num1 + num2;  �ú����ķ�ʽ���

	int sum = Add(num1, num2);
	printf("sum=%d\n", sum);


	return 0;
}









//����

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	//......�����鷳һ��һ��д
		//����--һ����ͬ���͵�Ԫ�ؼ���
		//10������1-10������

		//���������±������ʵ�
		//         �±�0  1 2 3 4 5 6 7 8 9  ��д��arr[0]Ĭ�ϵ�һ���� �Դ�����
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}
	/*char ch[5] = { 'a','b','c' };*///����ȫ��ʼ�� ʣ��Ĭ��0



	return 0;
}