#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
forѭ��   for(���ʽ1�����ʽ2�����ʽ3)   ��ʼ�� ���� �ж� �ŵ�һ�� ����whileѭ��
int main()
{
	int a = 0;
	for (a = 1; a <= 10; a++)        //����1-10
	{
		printf("%d", a);
	}
	return 0;
}


int main()
{
	int a = 0;
	for (a = 1; a <= 10; a++)
	{
		if (a == 5)
			break;          //����1234  break��forѭ��Ҳ����ֹ����
		printf("%d", a);
	}
	return 0;
}


int main()
{
	int a = 0;
	for (a = 1; a <= 10; a++)
	{
		if (a == 5)
			continue;              //1234678910  ����5  ���������ѭ��   ��whileѭ��
		printf("%d", a);
	}
	return 0;
}




int main()
{
	int a = 0;
	for (a = 1; a <= 10; a++)
	{
		printf("%d", a);   
		a = 5;     //������for ѭ�������޸�ѭ����������ֹ for ѭ��ʧȥ���ơ�  ��forѭ���ڲ��ı� ���´���6��ѭ��
	/*	int j = 0;
		for (j = 0; j < 10; a++);
		{
			printf("�Ǻ�\n");
		}*/                                                  //ѭ�����ڸı�ѭ������ ����ȡ
	}


	return 0;
}






//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д����
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)  //��߱պ�  i=0  �ұ߿���  i<10
	{
		printf("%d", arr[i]);
	}

	return 0;
}



int main()
{
	//for�жϲ��ֵ�ʡ�� ������ѭ�� �жϲ��ֺ�Ϊ�� ���������ʡ�� ����ʡ�Զ���
	for (;;)
	{
		printf("hehe\n");
	}

	return 0;
}



//������ʡ�� �����һЩ����
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 3; i++)   //��һ�ν�ȥ��Jѭ������  Ȼ��J�����3  I����ѭ������J�Ѿ����3  ����ֱ�ӽ��� �ʹ�ӡ��3�κǺǡ�
	{
		for (; j < 3; j++)   //�ڲ�j++ִ����3��  j�ͱ����3
		{
			printf("hehe\n");
		}
	}

	return 0;
}



//��ϰ��   ѭ��0��   ���ʽ��ȥ  K=0���жϲ��� 0Ϊ�� ���Բ�ѭ��
int main()
{
    int i = 0;
    int k = 0;
    for (i = 0, k = 0; k = 0; i++, k++)
        k++;
    return 0;
}
