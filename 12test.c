#define  _CRT_SECURE_NO_WARNINGS 1

//define��Ԥ����ָ��
//define�����ʶ������
#include <stdio.h>


#define MAX 1000
int main()
{
	printf("%d\n", MAX);
	return 0;
}




//define �����
#define ADD(x, y)x+y
int main()
{
	printf("%d\n", 4*ADD(2, 3));  //4*ADD ----4*2+3=11
	return 0;
}


#define ADD(x, y) ((x)+(y))
int main()
{
	printf("%d\n", 4 * ADD(2, 3));  //4*ADD ----20 �����һ������
	return 0;
}
