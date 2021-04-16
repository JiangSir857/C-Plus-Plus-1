//����8.2�� �޸���8-1������������ĳ�Ա����Area()����Ϊ�麯������ʵ�ֶ�̬���ࡣ
#include "iostream.h"
class Point
{
protected:
	double x,y;                             //�������
public:
	Point(double a=0,double b=0){x=a;y=b;}
	virtual	double Area()					//�麯��1
	{ cout<<"���� Point�����Area()����, ���= ";
	  return 0.0;
	}   
};
class Rectangle: public Point
{
protected:
	double x1,y1;
public:
	Rectangle(double a=0,double b=0,double c=0,double d=0):Point(a,b)
	{x1=c;y1=d;}
	virtual double Area()				    //�麯��2
	{   cout<<"����Rectangle���Area()����,���= ";
		return (x-x1)*(y-y1);
	} 
};
class Circle: public Point
{
protected:
	double r;                              //Բ�뾭��������x,yΪԲ������
public:
	Circle(double a=0,double b=0,double c=0):Point(a,b)
	{r=c;}
	virtual double Area()				   //�麯��3
	{   cout<<"���� Circle ��� Area()����,���= ";
		return 3.14*r*r;
	}  
};
double CalcArea(Point &p)
{
	return p.Area();                       //A,����ʱ��ȷ�������Ǹ��麯��
}
void main()
{
	Point p(1,2);
	Rectangle r(0,0,1,1);
	Circle c(0,0,1);
	double s;
	s = CalcArea(p);						 //���������
	cout<<s<<endl;
	s = CalcArea(r);						 //���㳤�������
	cout<<s<<endl;
	s = CalcArea(c);						 //����԰���
	cout<<s<<endl;
} 
