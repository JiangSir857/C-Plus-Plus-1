/*
1������int b=7;float a=2.5F,c=4.7F;����ʽa+(b/2*(int)(a+c)/2)%4��ֵ
2. ����int a=2,b=6;���ʽ(a++)*(--b)ִ�к󣬱���a��b��ֵ�ֱ�Ϊ���٣�
*/

#include "stdio.h"
void main()
{	//1������int b=7;float a=2.5F,c=4.7F;����ʽa+(b/2*(int)(a+c)/2)%4��ֵ
	int b=7;
	float a=2.5F,c=4.7F;
	printf("a+(b/2*(int)(a+c)/2)%4 =%d\n",a+(b/2*(int)(a+c)/2)%4);
	//2. ����int a=2,b=6;���ʽ(a++)*(--b)ִ�к󣬱���a��b��ֵ�ֱ�Ϊ���٣�
	a=2;b=6;
	(a++)*(--b);
	printf("a=%f,b=%d\n",a,b);
}