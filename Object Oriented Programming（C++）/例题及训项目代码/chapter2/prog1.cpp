//��Ŀ1����ⷽ��ax2+bx+c=0 ��a��Ϊ0��
#include "iostream.h"
#include "math.h"
void main()
{
	double a,b,c,x1,x2,p;
	cout<<"������һԪ���η��̵�ϵ��a,b,c: ";
	cin>>a>>b>>c;
	p = b*b-4*a*c;
	x1 = (-b+sqrt(p))/(2*a);
	x2 = (-b-sqrt(p))/(2*a);
	cout<<"x1="<<x1<<",x2="<<x2<<endl;
}
