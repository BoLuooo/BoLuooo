#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//IF () ������ 

int main()
{

	/*if (age >= 18);
	printf("����\n");*/





	//if (age >= 18)
	//	printf("����\n");

	//else                          //if else()����Ĭ��ֻ��һ����� �������ƶ������  �ͼ�{}
	//{
	//	printf("δ����\n");
	//	printf("����̸����\n");
	//}







	//int age = 60;
	//if (age < 18)
	//	printf("����\n");                   
	//else if (18 <= age <= 26) //��������  �߼����﷨�ϴ���
	//	printf("����\n");

	
	


	
	
	

	
	//
	//int age = 120;
	//if (age < 18)
	//	printf("����\n");
	//else if (age >= 18 & &age < 26)
	//	printf("����\n");
	//else if (age >= 26 && age <= 40)
	//	printf("����\n");                                   // IF  ELSE IF   ���Ƕ��֧   &&�ǲ��ҵ���˼  ������ڵ���26����С��40����˼
	//else if (age >= 40 && age < 60)
	//	printf("׳��\n");
	//else if (age >= 60 && age <= 100)
	//	printf("����\n");
	//else
	//	printf("�ϲ���");















	return 0;
}











int main()
{                                    //���벻��ӡ   else����������ifƥ��
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
		printf("����\n");


	return 0;
}




//��ӡ1-100������
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