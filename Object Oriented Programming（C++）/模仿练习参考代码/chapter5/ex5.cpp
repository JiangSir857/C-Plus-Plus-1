/*
��дһ����Ĭ�ϲ����ĺ�����n!��n��ȱʡֵΪ10�����������е������θú�����
һ�θ���ʵ�Σ���һ�β���ʵ�Σ����麯��Ĭ��ֵ�����塣
*/
#include "iostream.h"
long fnFact(int n=10)
{
	if(n==1)return 1L;
	else    return n*fnFact(n-1);
}
void main()
{
    cout<<fnFact()<<","<<fnFact(4)<<endl;
}
