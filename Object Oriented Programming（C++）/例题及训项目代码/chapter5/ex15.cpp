//����5.15�� ������ʵ�ֽ���������ֵ��
#include <iostream.h>
void fnSwap(int &x, int &y); //x��y��˵��Ϊ���ò���
void main()
{   
	int a, b;
	a = 20;
	b = 10;
	cout<<"����ǰ��a= "<<a<<",b= "<<b<<endl;
	fnSwap(a, b);
	cout<<"������a= "<<a<<",b= "<<b<<endl;
}
void fnSwap(int &x, int &y)//x��y��˵��Ϊ���ò���
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

