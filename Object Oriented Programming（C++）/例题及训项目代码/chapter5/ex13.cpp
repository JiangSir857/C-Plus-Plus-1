//����5.13�� ��дһ����ʾ�ṹ��Ա�ĺ������ں�������ʱ����ָ��ṹ��ָ�������ʵ�Ρ�
#include "iostream.h"
struct MyTime
{ 	int hour;
	int minute;
	int second;
};
void  fnPrint(struct MyTime  *p)
{ 
	   cout<<p->hour<<"ʱ"<<p->minute<<"��"<<p->second<<"��"<<endl;
}
void main(void)
{
	struct MyTime *pt,t ={ 2,34,56};
	pt = &t;
	fnPrint(pt) ;
}

