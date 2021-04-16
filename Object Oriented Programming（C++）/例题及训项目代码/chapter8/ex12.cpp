//����8.12������Ԫ�������������++��
#include <iostream.h>
class CPoint
{
	long x,y;
public:
	CPoint(){x=0L;y=0L;}
	CPoint(long x1,long y1)
	{ x=x1;y=y1; }
	void display()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
	friend CPoint operator++(CPoint &);	   //ǰ׺����
	friend CPoint operator++(CPoint &,int); //��׺����
};

CPoint operator++(CPoint &e)		//ǰ׺����
{
	return CPoint(++e.x,++e.y);
}

CPoint operator++(CPoint &e,int) //��׺����	
{
	return CPoint(e.x++,e.y++);
}
void main()
{
	CPoint p1(10,10),p2;
	p2 = p1++;
	p1.display();
	p2.display();
	p2 = ++p1;
	p1.display();
	p2.display();
}
