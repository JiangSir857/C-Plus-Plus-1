//����5.19�� ����Ĭ�ϲ������÷���
#include "iostream.h"
int fnAdd(int x, int y=10);       //��Ĭ�ϲ����ĺ���˵��
void main()
{  
	int  b= 6;
	int  x,y;
	x  = fnAdd(20);			//ʡ���˵�2��ʵ�Σ�ȡĬ��ֵ10
	y  = fnAdd(20,b);		     //�ṩʵ�Σ�����ʱ��ʵ�ʲ�������
	cout<<"fnAdd(20)= "<<x<<",fnAdd(20,b)"<<y<<endl;
}
int fnAdd(int x, int y)
{
    return x+y;
}
