/*
  ģ����ϰ	
1. ��дһ�����֧�ṹ�����û�����3�������������н�С���������
*/
#include "iostream.h"
void main()
{   
	int x,y,z,min;
	cout<<"������x,y,z: ";
	cin>>x>>y>>z;
	if(x<y && x<z)min=x;
	else  if(x>y && y<z)min=y;
	      else  min=z;
    cout<<"��С��="<<min<<endl;
}