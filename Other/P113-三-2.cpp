//��д������1~֮�ͣ�Ҫ����ԭ��Ϊ��long sum(int n); " 
#include<iostream>
using namespace std;
long sum(int n)
{
	int a;
	for(int i=1;i<=n;i++)
	{
		a+=i;
	}
	return a;
}
int main()
{
	int a,b;
	cout<<"��������ֵ��";
	cin>>a;
	b=sum(a);
	cout<<"1~"<<a<<"֮��Ϊ��"<<b<<'\0';
}
