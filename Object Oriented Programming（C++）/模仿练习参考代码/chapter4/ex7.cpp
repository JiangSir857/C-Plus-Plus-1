/*
1. ����һ���ַ���Ҫ��ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո��Լ������ַ��ĸ�����
*/
#include <iostream.h>
void main()
{  
	int  i,count1=0,count2=0,count3=0,count4=0;
	char chStr[50];
	cout<<"������һ���ַ���: ";
	cin.getline(chStr,50,'\n');
	for( i=0;chStr[i] != '\0'; i++)     //�ô�������ʶ'\0'����ѭ����ֹ
	{   
		if((chStr[i]>='a'&&chStr[i]<='z')||(chStr[i]>='A'&&chStr[i]<='Z'))
			count1++;
		else if(chStr[i]>='0'&&chStr[i]<='9')
			count2++;
		else if(chStr[i]==' ')
			count3++;
		else count4++;
	}
	cout<<"�ַ���:"<<chStr<<"�к�:\n";
	cout<<"Ӣ����ĸ="<<count1<<",����="<<count2<<"���ո�="<<count3<<",�����ַ�="<<count4<<endl;
}
