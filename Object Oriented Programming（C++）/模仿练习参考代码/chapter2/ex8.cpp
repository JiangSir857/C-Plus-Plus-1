//������̨�ϵױ߳�Ϊa,�µױ߳�Ϊb,��Ϊh,���������
#include "iostream.h"
#include "math.h"
void main()
{
	float a,b,h,s1,s2,v;
	cout<<"����������̨�ϵױ߳�a,�µױ߳�b,��h:";
	cin>>a>>b>>h;
	s1 = a*a;
	s2 = b*b;
	v = h*(s1+s2+sqrt(s1*s2))/3.0F;
	cout<<"������̨���="<<v<<"\n";
}