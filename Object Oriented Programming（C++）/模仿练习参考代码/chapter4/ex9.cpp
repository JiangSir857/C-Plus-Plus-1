/*
1. ��ʹ��strcpy()������ʵ���ַ����ĸ��ƹ��ܡ�
2. ��ʹ��strcat()������ʵ�������ַ��������ӹ��ܡ�
3. ��ʹ��strlen()���������ַ����ĳ��ȡ�
*/
#include "iostream.h"
#include "stdio.h"
void main()
{
	char a[]="one string",b[]="tow string",str[80];
	int i,j;
	//��ʹ��strcpy()������ʵ���ַ����ĸ��ƹ��ܡ�
	for(i=0;a[i]!='\0';i++)
		str[i] = a[i];
	str[i]='\0';
	puts(str);
	//2. ��ʹ��strcat()������ʵ�������ַ��������ӹ��ܡ�
	i=0;
	while(str[i]!='\0')i++;
	j=0;
	while(b[j]!='\0')
	{
		str[i+j]=b[j];
		j++;
	}
	str[i+j]='\0';
	puts(str);
	//3. ��ʹ��strlen()���������ַ����ĳ��ȡ�
	i=0;
	while(str[i]!='\0')i++;
    cout<<"�ַ���"<<str<<"�ĳ���="<<i<<endl;
}