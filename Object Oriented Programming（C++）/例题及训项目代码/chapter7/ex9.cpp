// ����7.9�� ��"����::"���������ʾ��1
#include<iostream.h> 
class A 
{ 
public: 
		int a; 
};                                                                                                                             
class B : public A 
{
public: 
		float b; 
};  
class C : public A
{ 
public: 
		float c; 
}; 
class D : public B, public C
{
public:
	int d;
	void print()
	{  
		cout<<"B::a="<<B::a;         //���ʴ�B�м̳й����� a
	    cout<<"\nC::a="<<C::a;       //���ʴ�C�м̳й����� a
	    cout<<"\nb="<<b;
	    cout<<"\nc="<<c;
		cout<<"\nd="<<d<<endl;
	}
};
void main()
{
   D  od;              //����D�Ķ���od
   od.B::a=1;          //����od�д�B�̳й����� a
   od.C::a=2;          //����od�д�C�̳й����� a
   od.b=3.5f;
   od.c=4.8f;
   od.d=5;
   od.print();
} 
