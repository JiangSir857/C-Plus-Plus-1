/*
1. ���һ�����������ж�һ�����Ƿ�Ϊ������
2. ���һ�����������������е���Сֵ��
*/
#include <iostream.h>
#include <stdio.h>
#include <math.h>
//1. ���һ�����������ж�һ�����Ƿ�Ϊ������
int IsPrime(int num)  
{
     int flag = 1,i;
     for(i = 2; i<=sqrt(num);i++)
       if(num%i == 0){ flag = 0;break;}
     return flag;
}
//2. ���һ�����������������е���Сֵ��
int fnMin(int a[],int n)
{
	int i,min;
	min = a[0];
	for(i=1;i<n;i++)
		if(a[i]<min)min = a[i];
	return min;
}
void main()
{
	int n,a[5]={1,4,-90,78,5};
   
   cout<<"������һ����������";
   cin>>n;
   if(IsPrime(n)==1)cout<<n<<"��һ������"<<endl;
   else             cout<<n<<"��������"<<endl;
   cout<<"����a����Сֵ="<<fnMin(a,5)<<endl;    
 
}
