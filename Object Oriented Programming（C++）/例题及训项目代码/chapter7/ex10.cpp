//����7.10�� ��"����::"���������ʾ��2��
#include "iostream.h"
class Base1    //�������
{
	int a;
public:
	void seta(int x){ a = x;}
	void disp(){cout<<a<<endl;}
};
class Base2    //�������
{
	int b;
public:
	void setb(int x){ b = x;}
	void disp(){cout<<b<<endl;}
};
class Derived: public Base1,public Base2 //����������
{
public:
    void print(){
		Base1::disp();  //A
		Base2::disp (); //B
	}
};
void main()
{	Derived d;
	d.seta(1);
//	d.disp();   //C��������
	d.setb(2);
//	d.disp();   //D��������
	d.print();
}
