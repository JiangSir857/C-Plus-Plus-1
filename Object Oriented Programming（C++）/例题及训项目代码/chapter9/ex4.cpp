//����9.4����������Ԫ�ص����ֵ��
#include <iostream.h>
template <class T>
T fnMax(T *x,int n)     //����ģ��
{
	T  max = x[0];
	for(int i=0;i<n;i++)
	{
		if(max<x[i])max = x[i];
	}
	return max;
}
void main()
{
	int a[]={ 2,3,4,44,56,55,94,7};
	double b[]={2.5,5.2,90.5,56.3,43.9};
	cout<<"���ֵ:"<<fnMax(a,8);//A,�����ͳ�fnMax(int *,int)ģ�庯��
	cout<<"���ֵ:"<<fnMax(b,5);//B,�����ͳ�fnMax(double *,int)ģ�庯��
}
