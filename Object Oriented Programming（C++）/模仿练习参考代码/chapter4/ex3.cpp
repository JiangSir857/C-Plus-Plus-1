/*
1. ���fibonacci���е�ǰ20��洢�������У�Ȼ���ٰ�ÿ��5�����������
*/
#include "iostream.h"
void main()
{
	long  a[20]={1L,1L};
    int i;
	for(i=2;i<20;i++)
	{
		a[i] = a[i-1]+a[i-2];
	}
   	for(i=0;i<20;i++)
		if(i%5==0)cout<<"\n"<<a[i]<<" ";
		else      cout<<a[i]<<" ";
    cout<<endl;
}