//����3.6�� ����while��䣬����1+2+��+100��ֵ���������������
#include "iostream.h"
void main( )
{
	int Sum,i;
	Sum = 0; i = 1;
	while (i <= 100)
	{
		Sum += i;
		i++;
	}
	cout<<"Sum is "<< Sum<<endl;
}
