#include "iostream.h"
class  Rect
{
private:            		 //˽�����ݳ�Ա��x, y
float  length,width;  		 //���Ϳ�
public:                    //���к���������set(),peri(),area()
void set(float a, float b);	 //���ó��Ϳ�
float peri();			 //���ܳ�����
float area();			 //���������
};
void Rect::set(float x,float y)
{
	length= x;
	width = y;
}

float Rect::peri()
{
	return (length+width)*2;
}

float Rect::area()
{
	return (length*width);
}
void main()
{
	Rect  k,*p;
	p = &k;
	p->set (3.5F,2.0F);
	cout<<"�ܳ�="<<p->peri() <<",���="<<p->area() <<endl;
}