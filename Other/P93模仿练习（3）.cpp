/*
 *P93ģ����ϵ������
 *��������������������ֱ�������x��y�У��ٰ���С�����˳����� 
 */
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int *min,*max;
	cout<<"��������������x��y:";
	cin>>x>>y; 
	if(x>y)
	{
	min=&y;
	max=&x;
	}else {
	min=&x;
	max=&y;
	}
	cout<<*min<<","<<*max;
}
