//����5.10��������������ں���fnSwap()�У����βε��޸Ĳ�Ӱ����ʵ�Ρ�
#include <iostream.h>
void fnSwap(int , int );   //��������
void fnSwap(int x, int y)  //��������
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void main()
{
	int a, b;
	a = 20;
	b = 10;
	cout<<"����ǰ��a = "<<a<<"��b = "<<b<<endl;
	fnSwap(a, b);   	 //�����Ĵ�ֵ����
	cout<<"������a = "<<a<<"��b = "<<b<<endl;
}


