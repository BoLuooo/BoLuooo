 #define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//whileѭ��  do while ѭ��  for ѭ��
//while �﷨�ṹ   ��if��������
//while (���ʽ)
//ѭ�����;


int main()
{
	if (1)
		printf("hehe\n");//ֻ��ӡһ��
	while (1)
		printf("hehe\n");//��ӡѭ��hehe ���ʽΪ�� ��0 ѭ�����һ����ִ��



	return 0;
}



int main()
{
	int a = 1;  //1--10����   1��ȥС��10  ����ѭ��a++  2   �ٽ���ѭ��  a++ 3 ��10����
	while (a <= 10)
	{
		printf("%d", a);
		a++;

	}

	return 0;
}



//whileѭ��Ҳ��break      continue
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)          //ֻ��1234  û��5 ��whileѭ���� break�����þ����������õ���ֹѭ��  ����Ҫ10�� i=5 ����������
			break;
		printf("%d", i);
		i++;
	}

	return 0;
}

//��break����continue
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)   //��ӡ��1234  �������  ˵������û�н��� ������ѭ��
			continue; //��������ѭ������Ĵ��� ��I++������ ���Խ�����i=5 =5 ������ѭ��

		printf("%d", i);
		i++;
	}

	return 0;
}


//break��whileѭ���е����ã�
//��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ����
//���ԣ�while�е�break������������ֹѭ���ġ�

//continue��whileѭ���е����þ��ǣ�
//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�
//����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�


int main()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)    //getchar�ǻ�ȡһ���ַ�  ��A��A B��B          EOF��-1  END OF FILE �ļ�������־
	{                               //������������ Ҫctrl + z ����getchar
		putchar(ch);       //putchar�����һ���ַ�
	}
	return 0;
}
