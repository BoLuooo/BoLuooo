#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("����������:>");                           
	scanf("%s", password);
	printf("��ȷ������(Y/N):>");       //������û��ȷ�Ͼ���ʾȷ��ʧ����   getchar��scanf �����뺯��    �����ǴӼ���ֱ��������  �����뻺��������
	int ch = getchar();                      //��Ϊscanf����������   getcharֻ��ȡ����\n  ����\n������Y  ����ʧ��
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}



	return 0;	
}





int main()
{
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);
	printf("��ȷ������(Y/N):>");  

	//��������  ����\n
	getchar(); //��һ������\n  ������һ��getchar�ͻ�ȴ�                            
	 
	int ch = getchar();                 //  ��������������123 �ո� ASD  ���ֱ����ʧ��                    
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}



	return 0;
}







int main()
{
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);
	printf("��ȷ������(Y/N):>");
	//��������������  �ĳ�whileѭ��
/*	getchar();  */  

	//���������еĶ���ַ�
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	int ch = getchar();                                 
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}

	return 0;
}






//�������ֻ���ӡ�����ַ�  ABCD�����ӡ 1234�Ḵ�ƴ�ӡ
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
	int a = 1;   //��ʼ��  ֵ
	while (a <= 100)   //�жϲ���
	{
		printf("%d\n", a);
		a+=2;           //ѭ�������ĵ�������  ��������һ���仯��������  �������̫Զ FORѭ���ͽ�����������
	}
	return 0;
}

