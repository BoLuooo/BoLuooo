#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//switch (���ͱ��ʽ)
//{
//    ����
//}


//�������case���
//���£�
//case ���γ������ʽ:
//    ���;

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)                         //switch ��������ͳ������ʽ   �����Ǳ��     case �� break �� 
	{   
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
		
	}

	return 0;
}





//1 - 5 ������
// 6 - 7 ��Ϣ�� �����߼��ı�  break����Ӳ��Ҫ��  ������Ҫ��ʱ����

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;

	default:                       //����ֻ�趨��1-7������  ��������˱�� �����һ����ʾ   ֻҪ�Ƿ������� default �����ڱ�ĵط� Ĭ�������
		printf("�������\n");
		break;
	}

	return 0;
}






int main()
{
    int n = 1;
    int m = 2;
    switch (n)  // n=1  ��case1��
    {
    case 1:  //m�ͳ���3   case1 ����û��break ִ��case2
        m++;
    case 2:  // case2 ��n�ͱ����2   Ȼ��ִ��case3
        n++;
    case 3:        //case3��ȥ���Ƕ��   n���2  case1��ִ������ ȥcase2 
        switch (n)
        {             //switch����Ƕ��ʹ��
        case 1:
            n++;
        case 2:
            m++;   
            n++;
            break;     //m=4 n=3   break����
        }
    case 4:     //��case4   m=4  +  1 =5
        m++;
        break;
    default:
        break;
    }
    printf("m = %d, n = %d\n", m, n);  ����m=5 n=3
    return 0;
}
