//����6.15������һ��"ƽ�������"�࣬���Կ������캯���ĵ��á�
#include <iostream.h>
#include <string.h>
class Point 
{
	int x,y;      
public:
	Point(int a=0,int b=0)    //ȱʡ���캯��
	{x = a; y = b;}
	Point(Point &p);          //�������캯��ԭ������
	~Point()                  //������������
	{	cout<<x<<","<<y;
	    cout<<"����������ִ�У�\n";
	 }
	void show();  
	int GetX(){return x;}
	int GetY(){return y;}
};
Point::Point(Point &p)		 //�������캯������
{	
	x = p.x; y = p.y;
    cout<<x<<","<<y<<"�������캯����ִ�У�\n";
}
void Point::show( )
{	
	cout<<"�㣺"<<x<<","<<y<<"\n";
}
void main()
{
	Point p1(6,8),p2(4,7);
	Point p3(p1);            //ע��A��
	Point p4=p2;             //ע��B��
	p1.show();
	p3.show ();
	p2.show ();
	p4.show ();
}
