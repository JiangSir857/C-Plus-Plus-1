/*
1. ���һ������ƽ���ɼ��ĺ���������N��ѧ���ĳɼ������ú����������������
2. ʹ���ַ���������Ϊ�������βΣ���д�ַ������ƺ�����
*/
 #include "iostream.h"
 float fnAve(int *arry,int n);
 void MyCopy(char *object,char *source);
 void main()
 {
     int a[]={13,56,66,90,65,78};
	 char b[80];
     float fAve;
	 fAve = fnAve(a,6);
	 cout<<"ƽ���ɼ�="<<fAve<<endl;
	 MyCopy(b,"how are you");
	 cout<<b<<endl;
 }
//����ƽ���ɼ��ĺ���	
float fnAve(int *arry,int n)
{
	int i,*p,sum;
	p = arry;
	sum = *p;
	for(i=1,p++;i<n;i++,p++)
		sum += *p;
	return ((float)sum/n);
}

//�ַ������ƺ���
void MyCopy(char *object,char *source)
{
	char *s = source,*p=object;
	while(*s)
	{
		*p = *s;
		p++;
		s++;
	}
	*p = '\0';
}