//����6.13�����ϲ���ֵ�Ĺ��캯����
#include "iostream.h"
class MyDate
{
	int Year,Month,Day;
public:
	MyDate(int y=2013,int m=7,int d=1)//������ȱʡֵ�Ĺ��캯��
	{
		Year=y;Month=m;Day=d;
	}
	void ShowDate()
	{
		cout<<Year<<"��"<<Month<<"��"<<Day<<"��"<<endl;
	}
};
void main()
{   
	MyDate  d1; 
   	MyDate  d2(2014);         //��ͬ�� MyDate  d2(2014,7,1);
	MyDate  d3(2014,9);	   //��ͬ�� MyDate  d2(2014,9,1);
	MyDate  d4(2014,12,3); 	   //Ĭ�ϲ���ʧЧ
	d1.ShowDate ();
	d2.ShowDate ();
	d3.ShowDate ();
	d4.ShowDate ();
}

