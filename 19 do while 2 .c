#define  _CRT_SECURE_NO_WARNINGS 1

//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//���� �������  ��ʼ ��##��    �����ߵ��м�
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	int left = 0;
	int right = strlen(arr1)-1;   //strlen ���󳤶� arr1  - 1 �������һ������ֵ  ��ͷ�ļ� string.h

	//�������������� ��ʼ����arr2   Ȼ������++  ��--  ����һ��ѭ��
	while (left<=right) //����while�������� left<=right ���߶�û·����
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);

		Sleep(1000);  //˯��1��   sleep������λ�Ǻ���   1000������1��  Ҫ��ͷ�ļ�Windows.h
		system("cls");//�����Ļ  ���һ�����һ��
		//һ����ջ�����һ��Ҳ��  �����ڴ�������ټ�һ�δ�ӡarr2 �Ϳ�����
		left++;
		right--;
	}
	printf("%s", arr2);

	return 0;
}







//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����

int main()
{
	int i = 0;
	//������ȷ���������ַ���123456
	char password[20] = { 0 };
	for (i = 0; i <= 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		/*if(password =="123456") *///����д�� �����ַ����ıȽ� ����ʹ��==  Ӧ��ʹ��strcmp����  ר�űȽϵ�
		if (strcmp(password, "123456") == 0)//strcmp��ͷ�ļ�string  �Ƚ���ֻ������ �Ա�abcdefg  �� abcdeqqqq  a=a  ���ζԱ�  ��Ӧλ���ϵİ�˹����ֵ
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
	//3������ȫ���
	if (i == 3)
		printf("��������������˳�����\n");

	return 0;
}








//дһ����������Ϸ  
//�Զ�����1-100��֮��������
//������    �¶��˹�ϲ����Ϸ����      �´��˻�˵�´��С ֪���� 
//��Ϸһֱ�� �����˳�

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
	//��������Ϸ��ʵ��  �����������  Ȼ�������
	//������������п⺯�� rand  rand ͷ�ļ� stdlib.h
	 
	int ret = rand()%100+1; //%100����������0-99  Ȼ�� +1 ��Χ���� 1-100 
		//printf("%d\n", ret);  //����������ɵ�������һ�λ���һ����  rand����������һ��0-32767֮������� �������  ����Ҫ��֮ǰ����srand�����������
		//�������ɳɹ���������Ժ� ���ܴ�ӡ����ҿ��� ����Ҫ�Ѵ�ӡȥ��

	//��������ֻ���
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���");
			break;
		}
	}

}






int main()
{

	int input = 0;
	//��Ϊ�����溯����ʼֵ�������  ���԰�srand��rand��������� ��int �̶���ʼֵ ���������ͻ�����ܶ�  ��srandֻ��һ��
	srand((unsigned int)time(NULL));  //srand������� ����ͷ�ļ� stdlib.h    srand�仯 randҲ�仯 �������ֲ���仯  ����srand��ֵ��������� ����� ������� ������100 200�̶�
	//�����ֵ�ڵ����� ��ʱ��  --- ʱ��� ��ȡʱ����� time �⺯�� time ����ͷ�ļ���time.h  
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				printf("������\n");
				game();
				break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
			printf("ѡ�����,������ѡ��\n");
				break;
		}
	} while (input);

	return 0;
}

