//����2.14����⸳ֵ������͸�ֵ���ʽ��
#include "iostream.h"
void main()
{
	int a, b, c, x, y;
	x = 5 + (y = 6);
	cout<<"a=b=c=2 is "<<(a=b=c=2);			//�����ֵ���ʽa=b=c=2��ֵ
	cout<<"\na="<<a<<",b="<<b<<",c="<<c;  	//�������a��b��c��ֵ 
	cout<<"\nx=5+=(y=6) is "<<(x=5+(y=6));	//�����ֵ���ʽx=5+=(y=6)��ֵ
	cout<<"\nx="<<x<<",y="<<y<<endl;		     //�������x,y��ֵ
}
