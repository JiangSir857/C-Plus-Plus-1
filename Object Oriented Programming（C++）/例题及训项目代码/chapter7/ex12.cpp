//����7.12�������Ĺ��캯����
#include <iostream.h>
class A
{
public:
	A( ) { cout << "��A�Ĺ��캯��"<< endl;}
};
class B
{
public:
	B( ) { cout <<"��B�Ĺ��캯��" << endl;}
};
class C: public B, virtual public A
{
public:
    C( ) { cout <<"��C�Ĺ��캯��"<< endl;}
};
class D: public B,virtual public A
{
public:
    D( ) { cout <<"��D�Ĺ��캯��"<< endl;}
};
class E: public C ,virtual public D
{
public:
   E( ) { cout <<"��E�Ĺ��캯��"<< endl;}
};
void main( )
{
    E  obj;
}
