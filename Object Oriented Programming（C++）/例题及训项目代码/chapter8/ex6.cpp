//����8.6���������³�������н����
#include "iostream.h"
class Base
{
 public:
	void fun(){cout<<"Base::fun()"<<endl;}			//���غ���
	void fun(int i){cout<<"Base::fun(int i)"<<endl;}	//���غ���
};
class Derived: public Base
{
public:
	void fun2()					//�����������û��ͬ������û������
	{cout<<"Derived::fun2()"<<endl;}
};
void main()
{
	Derived d;
	d.fun ();
	d.fun (1);      
}
