//����5.11�� ����5.10�е�fnSwap( ) �����޸�Ϊ��ַ���á�
#include "iostream.h"
void fnSwap( int *x, int *y);//��������,�β�˵��Ϊָ����ʽ
void main()
{
	int a, b;
	a = 20;
	b = 10;
	cout<<"����ǰ��a = "<<a<<"��b = "<<b<<endl;
	fnSwap(&a, &b);    //��������,ʵ�δ����ǵ�ַ
	cout<<"������a = "<<a<<"��b = "<<b<<endl;
}
void fnSwap( int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

