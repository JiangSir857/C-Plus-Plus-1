//����8.1��������һ����̬��������ӣ����������ִ�н����
#include "iostream.h"
class Point
{
protected:
	double x,y;						    //�������
public:
	Point(double a=0,double b=0){x=a;y=b;}
	double Area()							//����1
	{  cout<<"���� Point�����Area()����, ���= ";
	   return 0.0;
	} 
};
class Rectangle: public Point
{
protected:
	double x1,y1;             //���������½ǵ�����꣬������x,yΪ���Ͻ�����
public:
	Rectangle(double a=0,double b=0,double c=0,double d=0):Point(a,b)
	{x1=c;y1=d;}
	double Area()				           //����2
	{   cout<<"����Rectangle���Area()����,���= ";
		return (x-x1)*(y-y1);
	} 
};
class Circle: public Point
{
protected:
	double r;                               //Բ�뾭��������x,yΪԲ������
public:
	Circle(double a=0,double b=0,double c=0):Point(a,b)
	{r=c;}
	double Area()				           //����3
	{   cout<<"���� Circle ��� Area()����,���= ";
		return 3.14*r*r;
	} 
};
double CalcArea(Point &p)
{
	return p.Area();						//A  ��������ʱȷ�����ú���1
}
void main()
{
	Point p(1,2);
	Rectangle r(0,0,1,1);
	Circle c(0,0,1);
	double s;
	s = CalcArea(p);
	cout<<s<<endl;
	s = CalcArea(r);
	cout<<s<<endl;
	s = CalcArea(c);
	cout<<s<<endl;
} 
