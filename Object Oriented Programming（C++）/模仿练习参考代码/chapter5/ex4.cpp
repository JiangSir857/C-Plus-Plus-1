/*
1. ��д���غ�����������N��int���������ֵ������N��ȡ2,3,4��
2����д�����������ж���int�ͱ�����double�ͱ��������ַ������Ƿ���ȡ�
*/
#include "iostream.h"
#include "math.h"
int fnMax(int x,int y)             
{  
	int max;
	max = x>y?x:y;
	return max;
}
int fnMax(int x,int y,int z)             
{  
	int max;
	max = x>y?x:y;
	max = max>z?max:z;
	return max;
}
int fnMax(int x,int y,int z,int w)             
{  
	int max;
	max = x>y?x:y;
	max = max>z?max:z;
	return fnMax(max,w);
}
int fnIsEq(int x,int y)
{
	if(x==y)return 1;
	else    return 0;
}
int fnIsEq(double x,double y)
{
	if(fabs(x-y)<0.000001)return 1;
	else    return 0;
}
int fnIsEq(char x[],char y[])
{
	char *p1=x,*p2=y;
	while(*p1)
	{
		if(*p1 != *p2)break;
		p1++;p2++;
	}
	if(*p1 == '\0' && *p2 == '\0')
		    return 1;
	else    return 0;
}
void main( )
{
      
	cout<<fnMax(2,4)<<","<<fnMax(8,5,3)<<","<<fnMax(2,3,6,-9)<<endl;
	cout<<fnIsEq("qweww","qwe")<<","<<fnIsEq(5.6,8.0)<<","<<fnIsEq(2,2)<<endl;
 }
