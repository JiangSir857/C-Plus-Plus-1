//����8.10��ʱ���൥Ŀ�����++����Ϊ��Ա������ʽ��
//ʱ����,�������ݳ�Աʱ��Hour������(Minute)����(Second),ģ��֡����������60,��ʱ������Ϊ24���ơ�
#include "iostream.h"
class Clock
{
	int Hour,Minute,Second;
public:
	Clock(int h=0,int m=0,int s=0);//���캯��
	void ShowTime();
	Clock operator ++();		   //ǰ�õ�Ŀ���������
	Clock operator ++(int);        //���õ�Ŀ���������
};
Clock::Clock(int h,int m,int s)
{
	Hour=h; 	Minute=m; Second=s;
}
void Clock::ShowTime()
{	cout<<Hour<<":"<<Minute<<":"<<Second<<endl; }
Clock Clock::operator ++()	        //ǰ�õ�Ŀ���������
{
	Second++;
	if(Second>=60)
	{	Second -= 60;
		Minute++;
		if(Minute>=60)
		{   	Minute -= 60; Hour++;
			if(Hour>=24)Hour -= 24;
		}
	}
	return *this;
}
Clock Clock::operator ++(int)	   //ǰ�õ�Ŀ���������
{
	Clock t = *this;
	Second++;
	if(Second>=60)
	{	Second -= 60; Minute++;
		if(Minute>=60)
		{	Minute -= 60;	Hour++;
			if(Hour>=24)Hour -= 24;
		}
	}
	return t;
}
void main()
{
	Clock t1(23,59,59),t2;
	cout<<"��һʱ��(t1): ";
	t1.ShowTime ();
	cout<<"t2= ++t1:\n";
	t2 = ++t1;
	cout<<"t1: ";
	t1.ShowTime ();
	cout<<"t2: ";
	t2.ShowTime ();
	cout<<"�ڶ�ʱ��(t1): ";
	t1.ShowTime ();
	cout<<"t2= t1++:\n";
	t2 = t1++;
	cout<<"t1: ";
	t1.ShowTime ();
	cout<<"t2: ";
	t2.ShowTime ();
}
