//����5.3�� ��һ���������x ��n���ݡ�
#include "iostream.h"
void fnPower(float x,int n)    //��������
{
	int  i;
	float  p=1.0F;
	for (i=1,p=1;i<=n;i++)
	p *= x;
	cout<<x<<"��"<<n<<"����="<<p<<endl;
}
void main( )
{
	float  x;
	int   n;
	cout<<"����x=?  n=? \n";
	cin>>x>>n;
	fnPower(x, n);	            //��������
}
