#define  _CRT_SECURE_NO_WARNINGS 1
//C�����ṩ�Ĺؼ���
//1.C�����ṩ�ģ������Լ������ؼ���
//2.�����������ǹؼ���
//�ؼ���
// auto  break   case  char  const   continue  default  do   double else  enum   
// extern float  for   goto  if   int   long  register    return   short  signed
// sizeof static struct  switch  typedef union  unsigned   void  volatile  while


#include <stdio.h>
int main()
{
	//int char
	//C���ԵĹؼ��� auto��ÿ���ֲ���������auto���ε�   
	{
		int a = 10;//a���Զ����� �Զ����ٵ�---�Զ����� ǰ�涼Ӧ���и�auto ������ʡ��
		//auto int ��ʡ�� �µ�C�����﷨�������÷� ��ʱ������
	}

	
	return 0;
}



//extern�������ⲿ���ŵ�


	//register �Ĵ����ؼ���  

int main()
{

	//����Ƶ����ʹ�õ����ݣ����ڼĴ����� ����Ч��
	//�����������Ѿ����Լ�ʶ��żĴ�����
	register int num = 100;//����num��ֵ����ڼĴ����� ֻ��������
	//����������ݿ��Դ洢�� �Ĵ�������С�� ���ٻ��棨��ʮMB�� �ڴ棨16G�� Ӳ�̣�500G �� ���̣�2T��ѣ� ԽС���Խ���ٶ�Խ��

	return 0;
}



//signed�����з��ŵ�  10 -20   unsigned�����޷��ŵ�  



//union �����壨�����壩


//void ��-��  


//volatile C������ʱ����
 
//define  include ���ǹؼ��� ��Ԥ����ָ��



//typedef������������  ���Ͷ���  
//�������--����ϲ�����㰢��  ��һ����˼ 

typedef unsigned int u_int;
int main()
{
	unsigned int num = 100;
	 
	u_int num2 = 100;

		return 0;
}





//static ��̬��                
//static ���ξֲ��������ı�ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ�
//static ����ȫ�ֱ���
//static ���κ���

void test()
{
	static int a = 1; //static ���������Ժ󲻻����٣����Ծ���2����ѭ�� ��һ��3 ����ѭ�� 4..5..6..7..8..
	a++;
	printf("%d\n", a);
}

int main()
{
	int i = 0;
		while (i<10)
		{
			test();
			i++;
		}

		return 0;
}








//10ADD��ȫ�ֱ�����֪�� ��Ҫ����һ��
//extern �����ⲿ���� 
//ȫ�ֱ��������������涼����

extern int g_val;
//static����ȫ�ֱ���  ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���.c���ļ��ڲ�ʹ��
//���˱�Դ�ļ�����ʹ�� ����Դ�ļ�����ʹ��

int main()
{
	printf("%d\n", g_val);
	return 0;
}
//ȫ�ֱ�����������Դ�ļ��ڲ����Ա�ʹ�ã�����Ϊȫ�ֱ��������ⲿ��������
//���Ǳ�static�����Ժ� �ͱ���ڲ���������  �������ӵ������̬��ȫ�ֱ���












//ʹ���������� ���԰�10ADD�ĺ���ȫ��ʹ��

//��������

extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);


	return 0;
}









