#define  _CRT_SECURE_NO_WARNINGS 1

//ת���ַ�  ת������ԭ������˼                                              
//1  \? ����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ��   
//2  \' ���ڱ�ʾ�ַ�����' 
//3  \�� ���ڱ�ʾһ���ַ����ڲ���˫����
//4  \\ ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з���
//5  \a �����ַ�������
//6  \b �˸��
//7  \f ��ֽ��
//8  \n ����
//9  \r �س�
//10 \t ˮƽ�Ʊ���
//11 \v ��ֱ�Ʊ���
//12 \ddd ddd��ʾ1~3���˽��Ƶ����֡� �磺 \130 X
//13 \xdd dd��ʾ2��ʮ���������֡� �磺 \x30 0

#include <stdio.h>
int main()
{
	printf("c:\test\test.c");   //��ӡ����û��t ֻ��est


	printf("ab\ncd");//\+n��������ͨ��  �Ѿ����ת���ַ�                            

	return 0;
 }






int main()
{
	
	printf("(are you ok??)");//??)--]-����ĸ��
	//(are you ok]

	 


	 
	printf("%c\n", 'a');
	printf("%c\n", '\'');  //�����ӡ'����  ��Ҫ��\ ���ܵ�����'������
	printf("%s\n", "abc");
	printf("%s\n", "a");
	printf("%s\n", "\""); //��ӡ˫���ž�Ҫ��\
	//printf�ڴ�ӡ���ݵ�ʱ�򡣿���ָ����ӡ�ĸ�ʽ






	//�ص����������
	printf("c:\test\test.c");//��ӡ������test ֻ�ܴ��est ����Ҫ��\\��
	printf("c:\\test\\test.c");  //�ܴ��test  \\ת�����ǵ�ת��




	printf("\a\a\a"); //\a�𵽵��Է����ǵǵ�����  



	return 0;
}

  




//printf��"%d",100��;   %d��ӡ����
//printf("%c",'a');     %c��ӡ���ַ�
//printf("%s","abc");   %s��ӡ�ַ���


	//���������ת���ַ�
	//  \ddd  ddd��ʾ1~3���˽��Ƶ����֡� �磺 \130 X
	//  \xdd  dd��ʾ2��ʮ���������֡� �磺 \x30 0
int main()
{
	printf("%c\n", '\130'); //8���Ƶ�130��ʮ���ƵĶ���   1--8��2�η�     3--8��1�η�     0--8��0�η�   8���Ƶ�130����ʮ���Ƶ�88
//X---ASCII��ֵ��88                                    ʮ���Ƶ�130   1--10��2�η�    3--10��1�η�    0--10��0�η�   100+30+0=130
	

	printf("%c\n",'\101');   // A - 65 - 8�����ǣ�101

	printf("%c\n", '\x30');//48 - '0'

	return 0;
}

//�������ó����ַ�
//@��ER1...
// A - 65
// B - 66
// a - 97
// b - 98     ASCII���  ÿһ���ַ�����һ��ֵ��ASCII��ֵ 