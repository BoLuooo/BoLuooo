#define  _CRT_SECURE_NO_WARNINGS 1
//�����������������һ�� 


#include <stdio.h>;

int a = 100;

int main()
{
	int age = 20;
	double weight = 50.5;
	age = age + 1;
	printf("%d\n", age);
	weight = weight - 20;
	printf("%lf\n", weight);






	//�������ڵĶ��Ǿֲ�����   a�ڴ������ⶼ��ȫ�ֱ���
	int a = 10;
	//�ֲ���ȫ������һ����ʱ��ֲ�����  ������ȫ�ֱ����;ֲ���������һ��

	printf("%d\n", a);




	//дһ�����������������ĺ�   scanf���������뺯��
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	
		return 0;
}

