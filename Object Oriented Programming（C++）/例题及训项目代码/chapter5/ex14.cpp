//����5.14�� ���õĶ���
#include <iostream.h>
void main()
{
	int x;
	int &y = x;        //����y�Ǳ���x�ı���
	x = 20;
	cout<<y<<",";      //yҲ��20
	y += 10;           //y��Ϊ30,xҲ��30
	cout<<x<<endl;     //���30
}

