//����6.9�����һ������ѧ�����࣬ѧ��������Ϣ�������������Ա�����͸߶ȡ����ú�����Ĭ�ϲ�����
#include "string.h"
#include "iostream.h"
class Student
{
	char Name[8];
	char Sex;
	int  Age;
	int  Height;
public:
	//��Ĭ�ϲ����ĳ�Ա����
	void SetData(char n[]="����",char s='m',int a=18,int h=167);
	void Display();                                //��Ա��������
};
void Student::SetData(char n[], char s,int a,int h)//��Ա�����Ķ���
{
	strcpy(Name,n);            					//��������
	Sex = s;           						//�����Ա�
	Age = a;								     //��������		
	Height = h;            					     //�������
}
void Student::Display()                            //��ʾѧ����Ϣ
{
	cout<<"ѧ��������Ϣ"<<endl;  
	cout<<"������"<<Name<<endl;	
	cout<<"�Ա�"<<Sex <<endl;		
	cout<<"���䣺"<<Age <<endl;
	cout<<"��ߣ�"<<Height<<endl; 
}
