//3����дһ�������࣬ʵ�����ڵļ������������������������2�¹̶�Ϊ28�죩��
#include "iostream.h"
class Date
{
	int year,month,day;
public:
	Date(int y=0,int m=0,int d=0);//���캯��
	void ShowDate();
	Date operator ++();		   //ǰ�õ�Ŀ���������
	Date operator ++(int);     //���õ�Ŀ���������
};
Date::Date(int y,int m,int d)
{
	year=y; month=m; day=d;
}
void Date::ShowDate()
{	cout<<year<<"��"<<month<<"��"<<day<<"��"<<endl; }

Date Date::operator ++()	    //ǰ�õ�Ŀ���������
{
	day++;
	switch(month)
	{
		case 2:
			if(day>28){ day = 1;month++;}
			break;
		case 1:  case 3:  case 5:  case 7:  case 8: case 10: case 12:
			if(day>31){ day = 1;month++;}
			break;
		case 4:  case 6:  case 9:  case 11: 
			if(day>30){ day = 1;month++;}
			break;
	}
	if(month>12){month=1;year++;}
	return *this;
}
Date Date::operator ++(int)	   //ǰ�õ�Ŀ���������
{
	Date t = *this;
	day++;
	switch(month)
	{
		case 2:
			if(day>28){ day = 1;month++;}
			break;
		case 1:  case 3:  case 5:  case 7:  case 8: case 10: case 12:
			if(day>31){ day = 1;month++;}
			break;
		case 4:  case 6:  case 9:  case 11: 
			if(day>30){ day = 1;month++;}
			break;
	}
	if(month>12){month=1;year++;}
	return t;
}
void main()
{
	Date t1(2014,12,30),t2;
	cout<<"��һ����(t1): ";
	t1.ShowDate();
	cout<<"t2= ++t1:\n";
	t2 = ++t1;
	cout<<"t1: ";
	t1.ShowDate();
	cout<<"t2: ";
	t2.ShowDate();
	cout<<"�ڶ�����(t1): ";
	t1.ShowDate();
	cout<<"t2= t1++:\n";
	t2 = t1++;
	cout<<"t1: ";
	t1.ShowDate();
	cout<<"t2: ";
	t2.ShowDate();
}
