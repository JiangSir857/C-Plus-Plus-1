//����7.6���������г������������
#include <iostream.h>
class A
{
public:
	A( ) 
	{ cout << "ִ��A�๹�캯��\n";}
	~A( ) 
	{ cout << "ִ��A����������\n";}
 };
class B : public A
{
public:
	B( ) 
	{ cout << "ִ��B�๹�캯��\n";}
	~B( ) 
	{ cout << "ִ��B����������\n";}
 };
void main( )
{
    B  b;
    cout<<"����ִ����䡣"<< endl;
}
