//����7.2�����м̳�ʾ����
#include "iostream.h"
class Base    //�������
{
	int a;
protected:
	int b;
public:
	void setB(int x,int y){ a = x;b = y;}
	void dispB(){cout<<a<<","<<b<<endl;}
};
class Derived: public Base //����������
{
	int p;
protected:
	int q;
public:
	void setD(int x,int y)
	{
		a = x; //���󣡲��ɷ��ʻ����е�private��Աa
		b = y;  //��ȷ��������protected��Աb,��������������protected��Ա 
		setB(x,y);//��ȷ��������public��Ա��������������public��Ա���ɷ���
		p = 2*x;
		q = 2*y;
	}
	void dispD()
	{
		dispB();//��ȷ��������public��Ա��������������public��Ա�����Է���
		cout<<p<<","<<q<<endl;
	}
};
void main()
{
	Derived  dvar;
	dvar.a = 10;    //���󣡲���ֱ�ӷ���
	dvar.b =20;     //���󣡲���ֱ�ӷ���
	dvar.setB(1,2); //��ȷ�����Է���
	dvar.dispB();	//��ȷ�����Է���
	dvar.setD (10,20);
	dvar.dispD ();
}
