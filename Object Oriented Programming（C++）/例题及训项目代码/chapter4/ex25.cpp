//����4.25�� ���ýṹָ��������ʽṹ�еĳ�Ա��
#include "iostream.h"
struct MyTime
{ 	int hour;
		int minute;
		int second;
};
struct MyTime  t ={ 2,34,56};//����ṹ����t������ʼ��
void main(void)
{	//�� ���Ƽ򵥱���������ṹָ�����pt 
		struct MyTime *pt;
		//�� ʹ�ṹָ��ptָ��ṹ����t 
		pt = &t;
		//�� �ýṹָ�����pt��ӷ��ʷ���������ṹ����Ա��ֵ
     cout<<(*pt).hour<<"ʱ"<<(*pt).minute<<"��"<<(*pt).second<<"��"<<endl;
}

