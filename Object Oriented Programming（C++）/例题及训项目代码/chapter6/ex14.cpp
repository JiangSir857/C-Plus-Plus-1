//����6.14�� ����һ����ʾ�˵Ļ�����Ϣ�࣬�������֤�š��������������Ϣ�����ù��캯����ʼ�����ݳ�Ա��������������������
#include <iostream.h>
#include <string.h>
class Person 
{
	char num[20];       			//���֤���룬������ʵ��
	char *name;					//��������ָ��ʵ��
	int  age;						//����
public:
	Person(char *,char *,int); //���캯����ʡ���˲����ı�����ʶ��
	~Person();                       //���������������в���
	void show();                     //��ʾ��ݺš��������Ա������
};
Person::Person(char *s1,char *s2,int a)
{	
	strcpy(num,s1);
	name = new char[strlen(s2)+1];
	strcpy(name,s2);
	age = a;
	cout<<"���캯����ִ��!\n";
}
Person::~Person()
{
	if(name)delete []name;           //���������ͷſռ䣬
	cout<<"����������ִ�У�\n";
}
void Person::show( )
{	
	cout<<"���֤="<<num<<",����="<<name;
	cout<<",����="<<age<<endl;
}
void main()
{
	Person  P("432801198012242098","����",28);
	P.show();
}
