//����6.12�� ���������࣬���ù��캯����ʼ�����ݳ�Ա��
#include "iostream.h"
class MyDate
{
	int Year,Month,Day;
public:
	MyDate(int y)				//���ع��캯��1�������ڶ���
	{
		Year=y; Month=10; Day=1;
	}
	MyDate(int y,int m,int d);  //���ع��캯��2,����������	
	void ShowDate();            //һ���Ա����������
};
MyDate::MyDate(int y,int m,int d)//���ع��캯��2�������ⶨ�壨������ʵ�֣�
{
	Year=y; Month=m;Day=d;
}
void MyDate::ShowDate()         //һ���Ա����������ʵ��
{
	cout<<Year<<"��"<<Month<<"��"<<Day<<"��"<<endl;
}
void main()
{   
	MyDate  d1(2013);		  //�Զ����ù��캯��1
	MyDate  d2(2014,12,3);	  //�Զ����ù��캯��2
	d1.ShowDate ();
	d2.ShowDate ();
}
