/*
1�����һ����������������ֵ�ĺ���ģ�壬�����9.1�ĺ������ط�����
2�����һ����������֮�͵ĺ���ģ�塣
3�����һ��ð������ĺ���ģ�塣
*/
#include "iostream.h"
template <class T>
void fnSwap(T &x,T &y)				//1.��������������ֵ�ĺ���ģ��
{
	T temp;
	temp = x; 
	x = y;
	y = temp;
}

template <class T>
T fnSum(T x,T y)				   //2.��������֮�͵ĺ���ģ��
{
	T temp;
	temp = x+y; 
	return temp;
}
void main()
{
	int a=9,b=10;
	cout<<"����ǰ��a="<<a<<",b="<<b<<endl;
	fnSwap(a,b);
	cout<<"������a="<<a<<",b="<<b<<endl;
	cout<<"a+b="<<fnSum(a,b)<<endl;
}
