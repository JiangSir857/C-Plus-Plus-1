/*
���һ����Ʒ����̵���򡣽���һ����Ʒ�ࣨCommodity�����������ۣ�Price�����ܼۣ�TotalPrice�����ݳ�Ա��
����TotalPriceΪ��̬��Ա����Ա�����������캯���������������Լ���̬��Ա��������̵㣨CheckStock����
*/
#include <iostream.h>
#include <string.h>
class  Commodity
{
	double  Price;				//����
	char   CName[16];			//��Ʒ����
	double total;				//����
	static double TotalPrice; 	//�ܼ�
public:
	Commodity(char n[],double num,double p)//���캯��
	{
		strcpy(CName,n);
		total = num; 
	    Price = p;
		TotalPrice += (Price*total);
	}
	~Commodity(){}
	static void CheckStock()// ��̬��Ա����
	{ 
		cout<<"�����Ʒ�ܼ�="<<TotalPrice<<"\n"; 
	}
};
double Commodity::TotalPrice=0;//��̬���ݳ�Ա�ĳ�ʼ��

void main()
{
	Commodity  s1("�ƶ�",8.95,3.5); 	//������һ����Ʒ����
	Commodity  s2("����",1.5,13.5); 	//�����ڶ�����Ʒ����
	Commodity  s3("����",18.95,2.5); 	//������������Ʒ����
	cout<<"������"<<endl;
	Commodity::CheckStock();
}
