/*
����һ����ά����ϵ�µ��߶���Line�����ݳ�Ա���������˵����ꡣ��Ա����������
  (1)���õ�һ���˵�����ꣻ(2) ���õڶ����˵�����ꣻ
  (3)���߶εĳ��ȣ�(4)ȡ����һ���˵�����꣬����Ϊ����ָ�룬�ֱ�ָ��һ���˵������x,y,z��
  (5) ȡ���ڶ����˵�����꣬����Ϊ��һ���˵��x,y,z������������ã�
  (6) ������˵�������Լ��߶γ��ȡ����������ж���һ���߶���Ķ���Ȼ������г�Ա���в��ԡ�
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
		L  = (Pl.x-Pr.x)*(Pl.x-Pr.x); 
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
	Line  p;
	p.SetLPoint (1,2,3);
	p.SetRPoint (4,5,6);
	p.Display ();
	int x,y,z;
	p.GetLPoint(&x,&y,&z);
	cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
    p.GetRPoint(x,y,z);
	cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
}