//����6.10������һ��main()�������ں�������ʹ��Rect��ʵ����һ������
#include "iostream.h"
class  Rect                   //������Rect
{
private:            		   //˽�����ݳ�Ա��length,width 
	float  length,width;  	   //���Ϳ�
public:                        //���к���������set(),peri(),area()
	void set(float a, float b);//���ó��Ϳ�
	float peri();			   //���ܳ�����
	float area();			   //���������
};
void Rect::set(float x,float y)//�����Ա����set()
{
	length= x;                 //����˽�����Ե����ݳ�Աlength
	width = y;			   //����˽�����Ե����ݳ�Աwidth
}	
float Rect::peri()			   //�����Ա����peri()
{
	return (length+width)*2;   
}
float Rect::area()			  //�����Ա����area()
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
