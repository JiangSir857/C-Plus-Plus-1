/* 
 *P91���� ��4-19
 *�Ӽ���������������������ָ�뷽���������������
 */ 
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int *px,*py;
	px=&x;
	py=&y;
	cout<<"������x��y��";
	cin>>x>>y;
	cout<<"x="<<*px<<",y="<<*py<<endl; 
}
