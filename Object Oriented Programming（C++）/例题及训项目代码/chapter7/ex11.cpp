 //����7.11����������������ԡ�
#include<iostream.h> 
class A 
{ 
public: 
		int a; 
};                                                                                                                             
class B : virtual public A     // A���������
{
public: 
		float b; 
};  
class C : virtual public A    // A���������
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
		cout<<"a="<<a;            // ֱ�ӷ��ʳ�Ա a
	    cout<<"\nb="<<b;
	    cout<<"\nc="<<c;
		cout<<"\nd="<<d<<endl;
	}
};
void main()
{
	D od;            // ����D�Ķ���od
    od.a=1;          // ����od�еĳ�Ա a
    od.b=3.5;
    od.c=4.8f;
    od.d=5;
    od.print();
}
