//����8.7���޸���8.6,��������������fun()������������������н����
#include "iostream.h"
 class Base
 {
 public:
	void fun(){cout<<"Base::fun()"<<endl;}			//���غ���
	void fun(int i){cout<<"Base::fun(int i)"<<endl;}//���غ���
 };
 class Derived: public Base
 {
 public:
		void fun(int i) 				//���������л����ص������ͬ������
		{cout<<"Derived::fun(int i)"<<endl;}
		void fun2(){cout<<"Derived::fun2()"<<endl;}	
 };
 void main()
 {
	Base b;
	b.fun ();
	b.fun (2);
	Derived d;
	d.fun (1);
  //d.fun ();      //�﷨����
 }
