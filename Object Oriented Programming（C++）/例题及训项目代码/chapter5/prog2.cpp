//��Ŀ2���ݹ�����������
#include "iostream.h"
int age(int  n) ;  		//��������
int age(int  n)    		//����ݹ麯��
{
	int  f;
	if(n == 1)f = 10;
	else      f = age(n-1) + 2;
	return  f;
}
void main()
{
	int  iMen, iAge;
	cout<<"����֪���ڼ����˵�����: ";
	cin>>iMen;
	iAge = age(iMen);
	cout<<"��"<<iMen<<"�������� "<<iAge<<endl;
}
