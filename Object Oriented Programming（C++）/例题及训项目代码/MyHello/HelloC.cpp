#include "iostream.h"
#include <stdio.h>
void main1()
{
	//cout<<"Hello C++"<<endl;
	//cout<<"The sum is 55"<<endl;

	int c1,c2;						/*�������ͱ���c1,c2  */
	c1 = 'a';						/*���ַ�����'a'����c1*/
	c2 = 97; 						/*��97('a'��ASCII��)�����ַ�����x*/
	printf("c1=%c,c2=%c\n",c1,c2);	/*���ַ���ʽ���c1,c2*/
	printf("c1=%d,c2=%d\n",c1,c2);	/*��������ʽ���c1,c2*/
}
#include <iostream.h>
void main()
{
	int x = 1234,y = 01234,z = 0x1234;
	cout<<dec<<x<<","<<y<<","<<z<<endl;    // dec:��ʮ���Ƹ�ʽ�����
	cout<<oct<<x<<","<<y<<","<<z<<endl;    // oct:�԰˽��Ƹ�ʽ�����
	cout<<hex<<x<<","<<y<<","<<z<<endl;    // hex:��ʮ�����Ƹ�ʽ�����
}

