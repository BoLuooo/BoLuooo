#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int num = 10;
    &num;//ȡ��num�ĵ�ַ
       //ע������num��4���ֽڣ�ÿ���ֽڶ��е�ַ��ȡ�����ǵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
    printf("%p\n", &num);//��ӡ��ַ��%p���Ե�ַ����ʽ��ӡ
    return 0;
}



int main()
{
	int a = 10;//a���ڴ���Ҫ����ռ� --4���ֽ�
	printf("%p\n,&a");
	int * pa = &a; //pa��������ŵ�ַ�ģ�C�����н�ָ�����
	//*˵��pa��ָ�����
	//int ˵��paָ��Ķ�����int����


	char ch = 'w'
	char *	pc = &ch;

	return 0;
}



int main()
{
	int* pa = &pa; //�ܷ������� �����в�ͨ  ��ʹ��

	return 0;
}


//ָ�� ���� ��ַ

int main()
{
	int a = 10;
	
	int* pa = &a;

	*pa = 20;//* �н����ò����� *pa����ͨ��pa����ĵ�ַ�ҵ�a

	printf("%d\n", a);//�ı���a ����20  

	return 0;
}



//ָ������Ĵ�С
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long *)); 
	printf("%d\n", sizeof(double*));
	return 0;
}
//��ӡ����ȫ��4  ָ����������ŵ�ַ ָ���ж��ȡ����ַ�ж��ռ�     X86����4  X64����8  
//ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽڡ�