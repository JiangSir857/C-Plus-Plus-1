//����5.4���ɼ����������������������нϴ����������
#include "iostream.h"
int fnMax(int  x,int y)  //��������
{
	int  max;
	if(x>=y)max = x;
	else    max = y;
	return max;
}
void  main()
{
	int  x,y,z;
	cout<<"����������������";
	cin>>x>>y;
	z = fnMax(x,y); //��������
	cout<<"�ϴ����ǣ�"<<z<<endl;
}

