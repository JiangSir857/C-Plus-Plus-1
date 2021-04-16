//����8.3�� ����������ĳ�Ա����Area()����Ϊ�麯������ʵ�ֶ�̬���ࡣ
#include "iostream.h"
const double PI = 3.14;
class Circle
{
protected:
	double r;                              //Բ�İ뾭
public:
	Circle(){ }
	Circle(double rr){ r = rr;}
	virtual double Area()				 //�����е��麯��
	{ cout<<"���� Circle�����Area()����,";
	  return PI*r*r;
	} 
	virtual void display()			//�����е��麯��
	{
		cout<<"Բ�İ뾭Ϊ��"<<r<<endl;
	}
};
class Globe: public Circle
{
protected:
	double x1,y1;
public:
	Globe(double rr):Circle(rr){}
	virtual double Area()		    //�������е��麯��������е��麯���в�ͬ��ʵ��
	{   cout<<"����Globe���Area()����,";
		return 4*PI*r*r;
	} 
	virtual void display()		   //�������е��麯��������е��麯���в�ͬ��ʵ��
	{
		cout<<"��İ뾭Ϊ��"<<r<<endl;
	}
};
class Cylinder: public Circle
{
protected:
	double h;                     //Բ����
public:
	Cylinder(){}
	Cylinder(double rr,double hh):Circle(rr)
	{h=hh;}
	virtual double Area()		   //�������е��麯��������е��麯���в�ͬ��ʵ��
	{   cout<<"���� Circle ��� Area()����,";
		return 3*PI*r*r+2*PI*r*h;
	}
	virtual void display()		   //�������е��麯��������е��麯���в�ͬ��ʵ��
	{
		cout<<"Բ����ĵ���뾭Ϊ��"<<r<<",��Ϊ��"<<h<<endl;
	}
};
void  fun(Circle &c)
{
	 c.display();                          //A,����ʱ��ȷ�������Ǹ��麯��
}
void main()
{
	Circle cir(2),*p;
	Globe glo(3);
	Cylinder cyl(4,2);
	cout<<"ͨ��������������Ӧ���麯����"<<endl;     //����ʵ�ֶ�̬
	cir.display();
	cout<<"Բ�������"<<cir.Area ()<<endl;
	glo.display();
	cout<<"��������"<<glo.Area ()<<endl;
	cyl.display();
	cout<<"Բ����������"<<cyl.Area ()<<endl;
	cout<<"\nͨ�����ú�ָ����������Ӧ���麯����"<<endl; //ʵ�ֶ�̬
	fun(cir);
	p = &cir;
	cout<<"Բ�������"<<p->Area ()<<endl;
	fun(glo);
	p = &glo;
	cout<<"��������"<<p->Area ()<<endl;
	fun(cyl);
	p = &cyl;
	cout<<"Բ����������"<<p->Area ()<<endl;
}
