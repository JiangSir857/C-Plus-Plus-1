//����7.3��˽�м̳�ʾ����
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
class Derived: private Base //����������
{
		int p;
protected:
		int q;
public:
		void setD(int x,int y)
		{
			a = x;   //���󣡲��ɷ��ʻ����е�private��Ա
			b = y;   //������protected��Ա���������б�Ϊprivate��Ա�����Է���
			setB(x,y); //������public��Ա���������б�Ϊprivate��Ա�����Է���
			p = 2*x;
			q = 2*y;
		}
		void dispD()
		{
			dispB();   //������public��Ա���������б�Ϊprivate��Ա�����Է���
			cout<<p<<","<<q<<endl;
		}
};
void main()
{
		Derived  dvar;
		dvar.a = 10;    //���󣡲���ֱ�ӷ���
		dvar.b = 20;    //���󣡲���ֱ�ӷ���
		dvar.setB(1,2); //���󣡲���ֱ�ӷ���
		dvar.dispB();	//���󣡲���ֱ�ӷ���
		dvar.setD (10,20);
		dvar.dispD ();
}
