#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//�ַ�������һ���ַ� ��˫������������һ���ַ�

int main()
{
	"abcdef";
	"hello";


	return 0;
}










#include <string.h>

int main()
{

	//�ַ�����  ������һ����ͬ���͵�Ԫ��  
	//�ַ����ڽ�β��λ��������һ��\0���ַ�
	//\0���ַ����Ľ�����־
	char arr[]="hello";


	char arr1[] = "abc";   //abc\0 �Ѿ������� ��\0
	char arr2[] = {'a','b','c'};    //   abc ǰ��û������ ��������δ֪ ����������  
	//�����'c'�������'\0'  ����� ��arr1 ���һ��
	

	//��ӡ�ַ���
	printf("%s\n", arr1);
	printf("%s\n", arr2);



	//���ַ����ĳ���   
	//��������strlenδ����   ��Ҫ����ͷ�ļ�#include <string.h>
	
	int len = strlen("abc"); //string length
	printf("%d\n", len);
	 

	printf("%d\n", strlen(arr1)); //�̶�ֵ abc����\0����

	printf("%d\n", strlen(arr2)); //���ֵ a,b,c ���  ��\0���Ҳ��3  �ͽ���



	return 0;
}