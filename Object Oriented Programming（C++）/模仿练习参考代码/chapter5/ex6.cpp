/*
1. ʹ�ú궨����������֮�͡�
2. ʹ�ú궨��ʵ�������Ľ���
*/
#include <iostream.h>
#define  SUM(a,b)    (a)+(b)
#define  MYSWAP(a,b)  { int t = a;a = b;b = t;}

void main()
{

	int x=8,y=9;
	MYSWAP(x,y);
	cout<<x<<","<<y<<","<<SUM(x,y)<<endl;
}