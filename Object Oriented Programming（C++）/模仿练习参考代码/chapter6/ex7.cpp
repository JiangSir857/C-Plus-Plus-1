/*
1������6.12������,4�����ع��캯�������޲�����1��3�������Ĺ��캯����
*/
#include "iostream.h"
class MyDate
{
	int Year,Month,Day;
public:
	MyDate()					//���ع��캯��1�������ڶ���
	{
		Year=2014; Month=10; Day=1;
	}
	MyDate(int y);				//���ع��캯��2,����������	
	MyDate(int y,int m);		//���ع��캯��3,����������	
	MyDate(int y,int m,int d);  //���ع��캯��4,����������	
	void ShowDate();            //һ���Ա����������
};
MyDate::MyDate(int y)			//���ع��캯��2�������ⶨ�壨������ʵ�֣�
{
	Year=y; Month=11;Day=2;
}
MyDate::MyDate(int y,int m)		//���ع��캯��3�������ⶨ�壨������ʵ�֣�
{
	Year=y; Month=m;Day=3;
}
MyDate::MyDate(int y,int m,int d)//���ع��캯��4�������ⶨ�壨������ʵ�֣�
{
	Year=y; Month=m;Day=d;
}
void MyDate::ShowDate()         //һ���Ա����������ʵ��
{
	cout<<Year<<"��"<<Month<<"��"<<Day<<"��"<<endl;
}

/*2�����ù��캯�����ض���һ������Բ���࣬������Բ���ܳ�������ĳ���
   ����������Բ����������ǵ��ܳ��������
*/
class  CCircle
{
private:            		   
	float  radius;  	  
public:                       
	CCircle(){ radius = 0;}
	CCircle(float r){radius = r;}
	void set(float r){radius = r;}
	float peri()			   //�����Ա����peri()
	{
		return (2*3.14F*radius);
	}
	float area()			  //�����Ա����area()
	{
		return (3.14F*radius*radius);
	}
};

void main()
{   
	MyDate  d1;				//�Զ����ù��캯��1
	MyDate  d2(2015);			//�Զ����ù��캯��2
	MyDate  d3(2016,11);		//�Զ����ù��캯��2
	MyDate  d4(2017,12,3);		//�Զ����ù��캯��2
	d1.ShowDate ();
	d2.ShowDate ();
	d3.ShowDate ();
	d4.ShowDate ();

	CCircle  p1;
	CCircle  p2(1.0);
	cout<<"�ܳ�="<<p1.peri ()<<",���="<<p1.area ()<<endl;
	cout<<"�ܳ�="<<p2.peri ()<<",���="<<p2.area ()<<endl;
}


