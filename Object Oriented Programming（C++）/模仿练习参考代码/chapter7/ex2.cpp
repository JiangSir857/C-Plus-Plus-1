/*
��֪��ʱ����CTime������������"�ꡢ�¡��ա�ʱ���֡���"��
����ʱ����CCountrytime��ӵ��ʱ����CTime�ĸ��������⣬�����Լ�����������"���ҡ���������ʱ��"��
���ü̳нṹ����С���������ʱ�����㡣
*/
#include "iostream.h"
#include "string.h"
class CTime
{
	int year,month,day;
	int hour,minute,second;
public:
	CTime(int y,int m,int d,int h,int mi,int s)
	{
		year=y;month=m;day=d;
		hour=h;minute=mi;second=s;
	}
};
class CCountrytime: public CTime
{
	char coutry[14];;

public:
	int  TimeDif;
	CCountrytime(char c[],int t,int y,int m,int d,int h,int mi,int s): CTime( y,m,d,h,mi,s)
	{
		strcpy(coutry,c);
		TimeDif = t;
	}
};

void main()
{
	CCountrytime china("�й�",8,2014,6,1,12,1,1);
	CCountrytime jupan("�ձ�",9,2014,6,1,12,1,1);
	int dif = jupan.TimeDif - china.TimeDif ;
	cout<<"�С���������ʱ���="<<dif<<endl;
}
