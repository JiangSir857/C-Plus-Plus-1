//����9.10�� ��ģ���ʵ�ڲ��������ʵ����
#include <iostream.h>
class A
{
	int a;
public:
	A(){}
	A(int x){a = x;}
	A(A *p){this->a = p->a;}
	void operator!(){cout<<"a="<<a<<endl;}
};
template <class T>  
class B
{
private:
	int b;
	T *x;
public:
	B(int y,T *p){ b = y; x = new T(p);}
	void operator!()
	{
		cout<<"b="<<b<<endl;
		!*x;
	}
};
void main()
{
	A  a(1);    
	B<A> b(2,&a);    //ʵ����A��
	!b;
}
