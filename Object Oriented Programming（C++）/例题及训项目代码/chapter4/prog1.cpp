// ��Ŀ1����ͬ��������ת��
#include "iostream.h"
	void main()
	{
    	int i, j, n, m, a[32]={0};
    	cout<<"������һ��ʮ������(0��2147483647): ";
    	cin>>n;
		cout<<"��Ӧ�Ķ���������:";
    	for(m=0;m<32;m++) 
    	{
        	i = n%2;
        	j = n/2;
        	n = j;
        	a[m] = i;
    	}
    	for(m=31;m>=0;m--)           //���ת���õĶ�������
    	{
        	cout<<a[m];
        	if(m%4==0)cout<<" ";
    	}
		cout<<endl;
	}
