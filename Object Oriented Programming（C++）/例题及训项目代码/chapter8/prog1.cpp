//��Ŀ1���������Ӧ��ʵ��
#include <iostream.h>
#define  PI    3.1416
class container  						//�������
{
protected:
     double radius;
public:
	 container(double r){container::radius =r;}
     virtual  double surface_area()=0;    //���麯��
	 virtual  double volume()=0;          //���麯��
};
class cube: public container			//������������
{
public:
    cube(double r):container(r){}
	double surface_area( )
    {
		return 6*radius*radius;
    }
	double volume( )
    {
       return radius*radius*radius;
    }
};
class sphere: public container		//����������
{
public:
    sphere(double r):container(r){}
	double surface_area( )
    {
       return 4*PI*radius*radius;
    }
	double volume( )
    {
       return PI*radius*radius*radius*4/3;
    }
};
class cylinder: public container 	//����Բ������
{	double height;
public:
    cylinder(double r,double h):container(r)
	{   cylinder::height=h; }
	double surface_area( )
    {
       return 2*PI*radius*(height+radius);
    }
	double volume( )
    {
       return PI*radius*radius*height;
    }
};
void  main() 
{
	container *p;       //���������ָ��
    cube  obj1(4);      //�������������obj1
    sphere obj2(4);     //�����������obj2 
	cylinder obj3(4,5); //����Բ�������obj3
    p=&obj1;            //pָ�����������obj1
	cout<<"������������"<<p->surface_area() <<endl;
	cout<<"�����������"<<p->volume () <<endl;
	p=&obj2;            //pָ���������obj2
	cout<<"����������"<<p->surface_area() <<endl;
	cout<<"���������"<<p->volume () <<endl;
	p=&obj3;            //pָ��Բ�������obj3
	cout<<"Բ����������"<<p->surface_area() <<endl;
	cout<<"Բ���������"<<p->volume () <<endl;
}
