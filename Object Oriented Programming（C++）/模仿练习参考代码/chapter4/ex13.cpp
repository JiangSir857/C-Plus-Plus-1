/*
1����ʹ��strlen()���������ַ�ָ�뷽�������ַ����ĳ��ȡ�
2����ʹ��strcat()���������ַ�ָ�뷽����ʵ�������ַ��������ӹ��ܡ�
*/
#include <iostream.h>

void main()
{  
	int  i,count=0;
	char chStr[80],*p;
	//1����ʹ��strlen()���������ַ�ָ�뷽�������ַ����ĳ��ȡ�
	cout<<"������һ���ַ���: ";
	cin.getline(chStr,79,'\n');
	p = chStr;
	for( i=0; *p != '\0'; i++,p++)     //�ô�������ʶ'\0'����ѭ����ֹ
	{   
	   ;
	
	}
	cout<<"�ַ���:"<<chStr<<"�ĳ���="<<i<<"\n";

	//2. ��ʹ��strcat()������ʵ�������ַ��������ӹ��ܡ�
	char a[80]="good ",b[]="morning.";
	char *pa = a,*pb = b;
	while(*pa !='\0')pa++;

	while(*pb !='\0')
	{
		*pa = *pb;
		pa++;pb++;
	}
	*pa ='\0';
	cout<<"�����ַ��������Ӻ�"<<a<<endl;
}
