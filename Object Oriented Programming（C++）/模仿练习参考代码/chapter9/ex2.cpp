/*
1��ʹ�ú���ģ�壬ʵ����9.1��������������ֵ��
2��ʹ�ú���ģ�壬��һ�����ľ���ֵ��
3��ʹ�ú���ģ�����ƽ���ɼ��ļ��㡣
*/
#include "iostream.h"
template <class T>
void fnSwap(T &x,T &y)				//1. ��������������ֵ�ĺ���ģ��
{
	T temp;
	temp = x; 
	x = y;
	y = temp;
}

template <class T>
T fnAbs(T x)						//2. �����ֵ�ĺ���ģ��
{
	T temp;
	temp = x;
	if(x<0)temp = -x; 
	return temp;
}

template <class T>
T fnAve(T *x,int n)					//3. ����ƽ���ɼ��ĺ���ģ��
{
	T  sum ;
	sum=x[0];
	for(int i=1;i<n;i++)
	{
		sum += x[i];
	}
	return sum/n;
}

void main()
{
	int a=9,b=10;
	cout<<"����ǰ��a="<<a<<",b="<<b<<endl;
	fnSwap(a,b);
	cout<<"������a="<<a<<",b="<<b<<endl;
    cout<<"|-9|="<<fnAbs(-9)<<endl;
	float c[]={ 2,3,4,44,56,55,94,7};
	cout<<"ƽ���ɼ�="<<fnAve(c,8)<<endl;
}