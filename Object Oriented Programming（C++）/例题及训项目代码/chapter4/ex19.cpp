//����4.19���Ӽ���������������������ָ�뷽�����������������
#include "iostream.h"
void main( )
{ 
	int  x, y;
	int  *px, *py;
	px = &x ; 
     py = &y;
	cout<<"������x,y:";
	cin>>x>>y;
	cout<<"x="<<*px<<",y="<<*py<<endl;
}
