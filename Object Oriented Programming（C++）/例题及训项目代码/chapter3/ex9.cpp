//����3.9�� ��for������1+2+��+100��

#include "iostream.h"
void main( )
{
	int Sum,i;
	for(Sum=0,i=1;i<=100;i++)       //��ʼ���ʽ�У����������"��"
	Sum += i;
	cout<<"Sum is "<<Sum<<endl;
	for(Sum=0,i=1;i<=100;Sum+=i,i++)//��ֵ���ʽ�У����������"��"
	{     ;    }                    //ѭ������һ�������
	cout<<"Sum is "<<Sum<<endl;
}
