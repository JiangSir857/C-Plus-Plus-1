/*
����һ��������Complex�����ݳ�Ա����ʵ�����鲿��
��Ա����������(1)����ʵ����(2)�����鲿��(3)ȡʵ��ֵ��(4)ȡ�鲿ֵ��(5)���������
���������ж���һ��������Ķ���Ȼ������г�Ա�������в��ԡ�
*/
#include "iostream.h"

class Complex
{
private:
	int  real,image;
public:
	void SetR(int r);
	void SetI(int i);
	int  GetR();
	int  GetI();
	void Display();
};

void Complex::SetR(int r)
{
	real = r;
}

void Complex::SetI(int i)
{
	image = i;
}
int  Complex::GetR()
{
	return real;
}
int  Complex::GetI()
{
	return image;
}
void Complex::Display()
{
   cout<<"������"<<real<<"+"<<image<<"i"<<endl;
}

void main()
{
	Complex a;
	a.SetR (3);
	a.SetI (4);
	a.Display ();
	cout<<a.GetR ()<<"+"<<a.GetI ()<<"i"<<endl;
}