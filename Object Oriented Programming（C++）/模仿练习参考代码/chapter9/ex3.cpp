/*
1�����һ������ģ����x3,�������ͺ�˫�����ͽ��е��á�
2����дһ������ģ�壬��������ֵ�н�С�ߣ�ͬʱ����ȷ�����ַ�����
   ��ʾ�����һ������ģ�壬�ܴ���int��float��char���������ͣ������һ�����غ���ר�Ŵ����ַ����Ƚϡ�
*/
#include "iostream.h"
#include "string.h"

template <class T>
T  fnPower(T x)        //1. ����ģ����x3   
{
  	return x*x*x;
}

template <class T>
T  fnMin(T x,T y)       //2. ����ֵ�н�С�ߺ���ģ�� 
{
	return x<y?x:y;
}

char * fnMin(char *x,char *y)//���غ���ר�Ŵ����ַ����Ƚ�
{
    if(strcmp(x,y)<=0)return x;
	else              return y;
}

void main()
{
	int a=2,m=9;
	double  b=3.1;
	cout<<"1. ���Ժ���ģ��fnPower��\n";
	cout<<"a^3="<<fnPower(a)<<",b^3="<<fnPower(b)<<endl;
	
	cout<<"2. ���Ժ���ģ��fnMin��\n";
    char x[] = "good morning",y[]="very good";
	cout<<fnMin(x,y)<<endl;
	cout<<fnMin(a,m)<<endl;
	cout<<fnMin('a','m')<<endl;
	cout<<fnMin(3.14F,2.12F)<<endl;
}
