//����3.4�����������·��ź���ֵ��
//���� 1: Ƕ����else�Ӿ��У��ͱ���˶��֧�ṹ
#include "iostream.h"
void main()
{   
	int x, y;
	cout<<"������x: ";
	cin>>x;
	if(x < 0)y = -1;
	else    if(x == 0)y = 0;
	else      y = 1;
	cout<<"x="<<x<<",y="<<y<<endl;
}
//���� 2: Ƕ����if�Ӿ��С�
void main()
{
	int x, y;
	cout<<"������X: ";
	cin>>x;
	if(x != 0)  
	if (x < 0)y = 1;
	else      y = 1;
	else  y = 0;
	cout<< "x= "<<x<< ",y= "<<y<<endl;
}

