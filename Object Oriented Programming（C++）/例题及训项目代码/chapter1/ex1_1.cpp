//����1-1��  һ���򵥵�C++ʾ������
//this is my first C++ program.  ex1.cpp
#include "iostream.h"
int fnAdd(int x, int y);
void main()
{	
	int  a,b;
	a = 5;
	b = 7;
	int c = fnAdd(a,b);     //����fnAdd()����
	cout<<"a+b="<<c<<endl;  //���a+b��ֵ
}
int  fnAdd(int x, int y)
{
	int z = x+y;
	return z;
}
