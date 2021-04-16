/*
Ϊ"��6.2.3�е�ģ����ϰ"���߶���Line���ӹ��캯����
(1)ȱʡ���캯������������������Ϊ�����˵�����꣬��������ȱʡֵ��
(2)�������캯�����������������Ӳ������������캯������䡣
*/
#include "iostream.h"
#include "math.h"
class Point
{
public:
	int x,y,z;
};
class Line
{
public:
	Point Pl,Pr;
	Line(int x1,int y1,int z1,int x2=0,int y2=0,int z2=0)
	{
		Pl.x = x1;Pl.y = y1;Pl.z = z1;
		Pr.x = x2;Pr.y = y2;Pr.z = z2;
	}
	Line(Line &L1,Line &L2)
	{
		Pl = L1.Pl ; Pr = L2.Pr;
	}
	void SetLPoint(int a,int b,int c)
	{     
		Pl.x = a;Pl.y = b;Pl.z = c;
	}
	void SetRPoint(int a,int b,int c)
	{      
		Pr.x = a;Pr.y = b;Pr.z = c;
	}
	float LineLength()
	{
		float L;
		L  = (float)(Pl.x-Pr.x)*(Pl.x-Pr.x); 
		L += (Pl.y-Pr.y)*(Pl.y-Pr.y);
		L += (Pl.z-Pr.z)*(Pl.z-Pr.z);
		L = sqrt(L);
		return L;
	}
	void GetLPoint(int *x,int *y,int *z)
	{
		*x=Pl.x; *y=Pl.y; *z=Pl.z;
	}
	void GetRPoint(int &x,int &y,int &z)
	{
		x=Pr.x; y=Pr.y; z=Pr.z;
	}
	void Display()
	{
		cout<<"Left Point:("<<Pl.x<<","<<Pl.y<<","<<Pl.z<<")"<<endl;
		cout<<"Right Point:("<<Pr.x<<","<<Pr.y<<","<<Pr.z<<")"<<endl;
		cout<<"The length of Line is "<<LineLength()<<endl;
	}
};

void main()
{
	Line  p(1,1,1);
	p.Display ();
	p.SetLPoint (1,2,3);
	p.SetRPoint (4,5,6);
	p.Display ();
	int x,y,z;
	p.GetLPoint(&x,&y,&z);
	cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
    p.GetRPoint(x,y,z);
	cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
	Line q(p);      //���ÿ������캯��
	q.GetLPoint(&x,&y,&z);
	cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
    q.GetRPoint(x,y,z);
	cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;

}