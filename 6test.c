#define  _CRT_SECURE_NO_WARNINGS 1
//ע�����������͸��Ӵ����  ����˫б
#include <stdio.h>

int main()
{
	//int a =10 ;//c++ע�ͷ��   ��Ҫ������

	/*int b = 10;*/       //C���Ե�ע�ͷ��  ��֧��Ƕ��ע�ͣ�ע������ֻ����һ����
	
	return 0;
}







//ѡ����� ���xx  ���xx

int main()
{
	int input = 0; //��������ֵ�ı���
	printf("�������:>");
	printf("�ú�ѧϰ��(1/0)?>:");
	scanf("%d", &input);


	if (input == 1)
		{
 printf("��offer\n");
      }
	else
		{
 printf("������");
       }


	return 0;
}






//ѭ����� ��Щ��һֱ�� �ظ���
//30000�д���  ��һ������Ĺ���
int main()
{
	int line = 0;
	while (line < 30000)//ѭ��while
	{
		printf("д����:%d\n",line);
		line++;
	}
	
	if (line == 30000)
	{
		printf("��offer");
	}


	return 0;
}