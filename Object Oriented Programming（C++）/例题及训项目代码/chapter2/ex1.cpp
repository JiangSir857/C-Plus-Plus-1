#include <iostream.h>
void main()
{	
	int z1,z2,z3,x;

	cout<<"������һ����λ������";
	cin>>x;
	z1 = x%10;
	z2 = x/10%10;
	z3 = x/100;

	cout<<x<<"����Ϊ��"<<z1*100+z2*10+z3<<endl;
}

