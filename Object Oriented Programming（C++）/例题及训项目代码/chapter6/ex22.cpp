//����6.22����Ԫ��ʵ����
	#include "iostream.h"
	class Date;      				//ǰ�����������������ں�
	class Time
	{
	private:
		int hour,minute,sec;
	public:
		Time(){hour=0;minute=0;sec=0;}			//�޲������캯��
		Time(int h,int m,int s)					//���ع��캯��
		{hour = h; minute = m; sec = s;} 
		void display(Date);   					//��Ա��������
	};
	class Date
	{ 
	private:
		int year,month,day;
	public:
		Date(){year=2013;month=1;day=1;} 		//�޲������캯��
		Date(int y,int m,int d)			  		//���ع��캯��
		{year = y; month = m; day = d;} 
		friend Time;                    		//����ime������Ϊ��ate�����Ԫ��
	};
	void Time::display(Date d)  	 			     //�����ime��ĳ�Ա����
	{
		cout<<d.year <<"/"<<d.month <<"/"<<d.day <<" ";//ֱ�ӷ��ʣ�ate���˽������
		cout<<hour<<":"<<minute<<":"<<sec<<endl;
	}
	void main()
	{
		Time t1(15,25,56);
		Date d1(2013,10,1);
		t1.display (d1);
	}
