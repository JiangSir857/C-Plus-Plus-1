/*
ĳ�в�ͬ���Ƶĳ��⳵3������𲽼ۺ� �Ʒѷֱ�Ϊ��
����7Ԫ��3�������⣬2.1Ԫ/�������8Ԫ��3�������⣬2.4Ԫ/���
ɣ����9Ԫ��3�������⣬2.7Ԫ/���
��̣��Ӽ�������˳��ĳ��ͼ��г������������Ӧ�����ѡ�
*/
#include "iostream.h"
void main()
{	
	int car;
	double money,distance=0;
	cout<<"��������⳵���ͣ�1��������2��������3��ɣ���ǣ���";
	cin>>car;
	cout<<"�������г���������";
	cin>>distance;
	switch(car)
	{
		case 1:  money = 7.0+2.1*(distance-3);break;
		case 2:  money = 8.0+2.4*(distance-3);break;
		case 3:  money = 9.0+2.7*(distance-3);break;
		default: cout<<"������������."<<endl;break;
	}
	cout<<"Ӧ������:"<<money<<"\n";
}
