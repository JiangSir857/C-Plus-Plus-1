//����5.17�� ���������������ΪfnAbs�ĺ���������ֻ�ǲ������Ͳ�ͬ����main()�����У����øú���ʱ����ϵͳ����ݲ�ͬ�Ĳ�������ȷ�������ĸ�������
#include "iostream.h"
int fnAbs(int x)
{  
	int xabs;
    if (x >= 0) xabs = x;
    else        xabs = -x;
    return xabs;
}
float fnAbs(float x)
{  
	float xabs;
    if (x >= 0)xabs = x;
    else     xabs = -x;
    return xabs;
}
long  fnAbs(long x)
{ 
	long xabs;
    if (x >= 0L) xabs = x;
    else         xabs = -x;
    return xabs;
}
void main()
{  
	int a = -54;
     float b = -89.54f;
     long c = -23456L;
     cout<<"|a|= "<<fnAbs(a);          //���õ�1��fnAbs()����
     cout<< ",|b|= "<<fnAbs(b);		  //���õ�2��fnAbs()����
	cout<< ",|c|= "<<fnAbs(c)<<endl;   //���õ�3��fnAbs()����
}
