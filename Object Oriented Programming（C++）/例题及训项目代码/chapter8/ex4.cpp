//����8.4�� �������³����ִ�н����
#include <iostream.h>
#include <math.h>
const double PI = 3.14;
class Shape                        //����һ��ͼ���� 
{
public:
    virtual double Area () =0;     //����������Ĵ��麯��
    virtual void shapedisp()=0 ;   //�������ͼ�����ƵĴ��麯��
};
class Circle: public Shape 
{
private:
	double r;
public:
	Circle(){}
	Circle(double rr){ r = rr;}
	virtual double Area(){ return PI*r*r; }     //����������ʵ��������Ĺ���
    virtual void shapedisp(){cout<<"����һ��Բ";}//����������ʵ�����ͼ����
};
class Cube: public Shape 
{
private:
	double x,y,h;
public:
	Cube(){}
	Cube(double xx,double yy,double hh){ x = xx;y=yy;h=hh;}
	virtual double Area()
	{ return 2*(x*y+x*h+y*h); }	//����������ʵ��������Ĺ���
    virtual void shapedisp()
	{cout<<"����һ��������";}	//����������ʵ�����ͼ����
};
void main( )
{
	Shape *ptr;
	Circle c(5);
	Cube   m(1,2,3);
	ptr = &c;
	ptr->shapedisp();
    cout<<", ��� = "<<ptr->Area()<<endl;
	ptr = &m;
	ptr->shapedisp();
	cout<<", ��� = "<<ptr->Area()<<endl;
}
