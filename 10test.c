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

//static ��̬��  


//union �����壨�����壩


//void ��-��  


//volatile C������ʱ����
 
//define  include ���ǹؼ��� ��Ԥ����ָ��