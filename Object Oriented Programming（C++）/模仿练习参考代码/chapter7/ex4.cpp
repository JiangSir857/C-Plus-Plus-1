/*
	���ʵ��ʱ����CTime��������Date���ڴ˻����϶���һ�������ڵ�ʱ����TimeWithDate��
	�Ը�������ܽ��бȽϡ����ӣ�����ֵΪ�룩����������Ϊ�������Ȳ�����
*/
#include "iostream.h"
#include "string.h"
class CTime
{
public:
	int hour,minute,second;
	CTime(int h,int m,int s)
	{
		hour=h;minute=m;second=s;
	}
	void dispT()
	{
		cout<<hour<<":"<<minute<<":"<<second<<endl;
	}

};

class Date
{
public:
	int year,month,day;

	Date(int y,int m,int d)
	{
		year=y;month=m;day=d;
	}
	void dispD()
	{
		cout<<year<<"��"<<month<<"��"<<day<<"��,";
	}
};
class TimeWithDate: public CTime,public Date
{
public:
	int  TimeDif;
	TimeWithDate(int y,int m,int d,int h,int mi,int s): Date(y,m,d),CTime( h,mi,s)
	{
	}
	void dispTD()
	{dispD();dispT();}
	void fnAdd(int s)			//����s��
	{
		second+=s;
		if(second>=60){minute++;second %= 60;}
		if(minute>=60){hour++;minute %= 60;}
		if(hour>=24){day++;hour %=24;}
		if(day>30){month++;day %=30;}
		if(month>12){year++;month %=12;}
	}
	void fnSub(int s)			//��s��
	{
		second-=s;
		if(second<0){minute--;second =60+second;}
		if(minute<0){hour--;minute =60+minute;}
		if(hour<0){day--;hour =24+hour;}
		if(day<1){month--;day =30+day;}
		if(month<1){year--;month =12+month;}
	}
};

void main()
{
	TimeWithDate T(2014,12,30,23,59,59);
	T.dispTD ();	 //��ʾ����ʱ��
	T.fnAdd (5);     //����5��
	T.dispTD ();	 //��ʾ����ʱ��
	T.fnSub (5);	 //��5��
	T.dispTD ();     //��ʾ����ʱ��
}

