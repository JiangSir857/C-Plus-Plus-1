//����7.8���������³����ִ�н����
#include <iostream.h>
class  A		//�������A
{
     int a;
public:
   	A (int i )  
		{	a=i; cout <<"ִ��A����Ĺ��캯��\n";	}
		void dispA( ) { cout <<"a="<< a << endl;}
};

class B            //�������B
{
		int b;
public:
   	B(int j )  
		{ 	b=j; cout << "ִ��B����Ĺ��캯��\n"; }
		void dispB( ) { cout <<"b=" << b << endl; }
};
//����A��B��������C��B��ǰ��A�ں������ȵ�B�Ĺ��캯�������A�Ĺ��캯��
class C : public  B, public  A
{ 
		int c;
public:
		C(int x,int y,int z): A(x),B(y)     //���������Ա��ʼ���б�
     {
			c=z; 
			cout << "ִ��C������Ĺ��캯��\n";
		}
		void disp( )
		{
			dispA( );
			dispB( );
			cout << "c="<< c << endl;
		}
};
void main( )
{
   	C  obj (10,11,12);
   	obj.disp();       //������C��disp( )��Ա����
}
