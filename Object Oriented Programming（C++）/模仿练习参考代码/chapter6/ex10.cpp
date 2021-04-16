/*
  Ϊ"��6.2.1�е�ģ����ϰ"������Complex����һ����Ԫ�������������һ����������
  ��Ԫ������ԭ��Ϊ��void Output(Complex &);��
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
	friend void Output(Complex &);//��Ԫ����������
};
void Output(Complex &p)
{
    cout<<"������"<<p.real<<"+"<<p.image<<"i"<<endl;
}

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
	Output(a);     //������Ԫ����
	cout<<a.GetR ()<<"+"<<a.GetI ()<<"i"<<endl;
}