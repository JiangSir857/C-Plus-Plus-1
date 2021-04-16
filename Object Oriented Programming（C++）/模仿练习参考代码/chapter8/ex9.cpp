/*
����MyString�࣬��ӿ������캯����������������ȡ�ַ������ȡ��жϲ����ַ����Ƿ�Ϊ�Ӵ��ȳ�Ա��
��������в��ԡ�
*/
#include <iostream.h>
#include <string.h>
class MyString
{
protected:
	int iLength;
	char *str;
public:
	MyString(){str =NULL;iLength=0;}//ȱʡ���캯��
	MyString(const char *s);		//���캯�������ַ�ָ��Ϊ����
	void Show(){ if(str)cout<<str<<'\n';}//����ַ���
	MyString & operator =(MyString &);//���ظ�ֵ�����
	friend MyString operator+(const MyString &,const MyString &);//��Ԫʵ��+����
	friend MyString operator-(const MyString &,const char *);    //��Ԫʵ��-����
	int operator < (const MyString &)const;
	int operator > (const MyString &)const;
	int operator ==(const MyString &)const;
};
MyString::MyString(const char *s)		//���캯�������ַ�ָ��Ϊ����
{
	if(s)
	{	iLength = strlen(s);
		str = new char[iLength+1];
		strcpy(str,s);
	}
	else {str = NULL;iLength=0;}
}
MyString & MyString::operator =(MyString &s)//ʵ�ָ�ֵ���������
{
	if(this == &s)return *this;             //�����ַ�������ֵ
	if(str)delete[]str;                     //�ͷŶ�������Ŀռ�
	iLength = s.iLength;
	if(s.str)
	{	str = new char[iLength+1];
		strcpy(str,s.str);
	}
	else str = NULL;
	return *this;
}
MyString operator+(const MyString &s1,const MyString &s2)//���������ַ���
{	MyString  t;
	t.iLength = s1.iLength+s2.iLength;
	t.str = new char[t.iLength+1];
	strcpy(t.str,s1.str);
	strcat(t.str,s2.str);
	return t;
}
MyString operator-(const MyString &s1,const char *s2)//ɾ��s1�е�һ�γ��ֵ�s2
{
	MyString  t;
	char *p1 = s1.str,*p2;
	int i=0,len=strlen(s2);
	if(p2 = strstr(s1.str,s2))//������Ӵ�
	{	t.iLength = s1.iLength-len;
		t.str = new char[t.iLength+1];
		while(p1<p2)t.str[i++]=*p1++;
		p1 += len;
		while(t.str[i++]=*p1++);
		return t;
	}else return s1;
}
int MyString::operator < (const MyString &s)const //����С�����������Ա����ʵ��
{	return (strcmp(str,s.str)<0); }
int MyString::operator > (const MyString &s)const //���ش������������Ա����ʵ��
{	return (strcmp(str,s.str)>0); }
int MyString::operator == (const MyString &s)const //���غ�������������Ա����ʵ��
{	return (strcmp(str,s.str)==0); }
void main()
{
	MyString s1("C++�������"),s2,s3("ABCѧ��ѧϰ"),s;
	cout<<"���Ը�ֵ�����=:\n";
	s1.Show();
	s2 = s1;
	s2.Show();
	cout<<"�����ַ������������+:\n";
	s = s1+s3;
	s.Show();
	cout<<"�����ַ�����������-:\n";
	s = s - "C++";
	s.Show();
	cout<<"�����ַ������С�Ƚ������:\n";
    if(s1<s3)cout<<"s1<s3"<<endl;
	else     cout<<"s1>= s3"<<endl;
}
