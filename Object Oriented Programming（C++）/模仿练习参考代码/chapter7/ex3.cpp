/*
����һ�����ࣨPoint���������ࣨRectangle�����������ࣨCube���Ĳ�νṹ��
���ΰ������ȺͿ�����������ݳ�Ա�����ε�λ���ɵ���̳С����������ɳ�����͸߶ȹ��ɡ�
Ҫ������ṩ֧�ֳ�ʼ���Ĺ��캯������ʾ�Լ���Ա�ĳ�Ա������
��д�����������������νṹ�����������������Ϣ��
*/
#include <iostream.h>
class  Point							//�������Point
{
    int x,y;
public:
   	Point (int a,int b )  
	{	x=a;y=b;} 
	void dispP()
	{
		cout<<"���("<<x<<","<<y<<") ";
	}
};
class Rectangle: public Point            //����Rectangle��
{
	int length,width;
public:
   	Rectangle(int l,int w,int x,int y ):Point(x,y)  
	{ 
		length=l;
		width=w;
	}
	void dispR( )
	{   dispP();
		cout <<",��="<<length<<",��="<<width;
	}
};

class Cube: public  Rectangle
{ 
		int hight;
public:
	Cube(int h,int l,int w,int x,int y): Rectangle(l,w,x,y)     //���������Ա��ʼ���б�
    {
		hight = h; 
	}
	void dispC( )
	{
		dispR( );
		cout << ",��="<<hight<<endl;
	}
};
void main( )
{
   	Cube  obj (1,2,3,10,12);
   	obj.dispC();      
}
