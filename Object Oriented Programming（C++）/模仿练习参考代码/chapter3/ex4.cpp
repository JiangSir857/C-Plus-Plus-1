/*
2. ��һ����������xֵ�����yֵ������x��y�ĺ�����ϵ���£�
        3x^2-2x+9       ( x �� 10  )
y =      4x+5          ( 10>x��0  )
        x^3-7x          (  x < 0   )
*/
#include "iostream.h"
void main()
{   
	int x,y;
	cout<<"������x: ";
	cin>>x;
	if(x>=10)y=3*x*x-2*x+9;
	else  if(x>=0 && x<10)y=4*x+5;
	      else  y=x*x*x-7*x;
    cout<<"y="<<y<<endl;
}