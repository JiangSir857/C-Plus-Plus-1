//����8.8���޸���8.7,�ڳ�Ա����fun()ǰ���ӹؼ���virtual,���������н����
	#include "iostream.h"
	class Base
	{
	public:
		void fun(){cout<<"Base::fun()"<<endl;}					   //���غ���
		virtual	void fun(int i){cout<<"Base::fun(int i)"<<endl;}   //���غ���
	};
	class Derived: public Base
	{
	public:
		virtual	void fun(int i){cout<<"Derived::fun(int i)"<<endl;}//����
		void fun2(){cout<<"Derived::fun2()"<<endl;}		
	};
void main()
{
	Base b,*p;
	p = &b;
	p->fun (); p->fun (2);
	Derived d;
	d.fun (1);
	p = &d;
	p->fun (1);
}

