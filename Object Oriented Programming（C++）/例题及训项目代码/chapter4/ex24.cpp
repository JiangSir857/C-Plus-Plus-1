//����4.24�� ���ַ���str_a���Ƶ��ַ���str_b�С�
#include "iostream.h"
void main()
{	
	char  str_a[] = "This is a string!";
	char  str_b[60],*pa,*pb;
	pa = str_a;
	pb = str_b;
	for(  ; *pa != '\0';pa++,pb++)
		*pb = *pa;
	*pb = '\0';
	cout<<"�ַ���str_a��: "<<str_a<<endl;
	cout<<"�ַ���str_b��: "<<str_b<<endl;
}



