//����4.13���Ӽ�������2���ַ��������������������
#include "iostream.h"
#include "string.h"
void main()
{
	char str1[81],str2[81],str[81];
	cout<<"������2���ַ�����"<<endl;
	cin.getline(str1,80);
	cin.getline(str2,80);
	if(strcmp(str1, str2)<0)strcpy(str1,str2);
	strcpy(str,"�����ַ����ǣ�");
	strcat(str,str1);
	cout<<str<<endl;
}

