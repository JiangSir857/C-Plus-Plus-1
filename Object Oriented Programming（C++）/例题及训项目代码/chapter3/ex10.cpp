//����3.10�� ��for������1+2+��+100��

#include "iostream.h"
void main( )
{
	int Sum,i;
	for(Sum=0,i=1;i<=100;  )       //���ʽ3ȱʡ
	Sum += i++;
	cout<<"Sum is "<<Sum<<endl;
	for(Sum=0,i=1;   ;Sum+=i,i++) //"����"���ʽȱʡ, Լ��Ϊtrue
	if(i>100)break;            //����������ʱ��break�������ѭ��
	cout<<"Sum is "<<Sum<<endl;
	Sum=0;i=1;
	for(   ;    ;    )           //�������ʽ��ȱʡ
	{
		Sum+=i++;
		if(i>100)break;           //�������һ�㶼����if�������������ѭ��
	}
	cout<<"Sum is "<<Sum<<endl;
}
