//����9.1�� ʹ�ú������أ���������������ֵ��
#include <iostream.h>
void fnSwap(char &,char &);
void fnSwap(int &,int &);
void fnSwap(double &,double &);
void main()
{
	char a1 = 'a', a2 = 'b';
	int  b1 = 10,  b2 =  20;
	double c1 = 2.5, c2 = 3.5;
	fnSwap(a1,a2);						//A��
	fnSwap(b1,b2);						//B��
	fnSwap(c1,c2);						//C��
	cout<<"a1="<<a1<<", a2="<<a2<<endl;
		cout<<"b1="<<b1<<", b2="<<b2<<endl;
cout<<"c1="<<c1<<", c2="<<c2<<endl;
}
void fnSwap(char &x,char &y)				//���غ�����
{
	char temp;
	temp = x; x = y; y = temp;
}
void fnSwap(int &x,int &y) 				//���غ�����
{
	int temp;
	temp = x; x = y; y = temp;
}
void fnSwap(double &x,double &y) 			//���غ�����
{
	double temp;
	temp = x; x = y; y = temp;
}
