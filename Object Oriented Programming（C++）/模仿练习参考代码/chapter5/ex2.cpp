/*
1. �õݹ麯������ʮ������ת���ɰ˽�������
2. ��дһ���ݹ麯������������ÿ��λ�ϵ���ֵ���෴��˳����������磺����1234,���4321��
*/
#include <iostream.h>
#define  NUM     8
//�õݹ麯������ʮ������ת����NUM��������
void fn10toNUM(int n,int a[],int m)
{
	if(n<NUM){
		a[m]=n;
        return;
	}
	a[m] = n%NUM;
	fn10toNUM(n/NUM,a,++m);
}
//��������ÿ��λ�ϵ���ֵ���෴��˳�����
void fnOPrint(int n)
{
	if(n<10)
	{
		cout<<n<<endl;
		return;
	}
	cout<<n%10;
	fnOPrint(n/10);
}

void main()
{
    int n,m=0, a[16]={0};
    cout<<"����һ��ʮ��������(0-32767): ";
    cin>>n;
    fn10toNUM(n,a,m); 
   	cout<<"��Ӧ��"<<NUM<<"�����ǣ�";
    for(n=15;n>=0;n--)           //���ת���õ�NUM������
    {
       	cout<<a[n];
    }
	cout<<endl;
    cout<<"����һ������: ";
    cin>>n;
	cout<<"˳�����:";
	fnOPrint(n);
}
