/*
	����һ����ʦ��CTeacher��,�������š�ְ�ƺ�н�𣬱���������ʾ��ʦ����Ϣ��
	����һ�����ࣨCPerson��,�����������Ա�����䣬����Ϊ��ʦ��Ļ��ࡣ
*/
#include "iostream.h"

class CPerson
{
protected:
	char name[10];              //����
	char sex[2];				//�Ա�
	int age;				    //����
};
class CTeacher: public CPerson
{
	long  no;				   //����
	char  position[10];          //ְ��
	int   monthMoney;	       //н��
public:
	void DataInput();		   //�����ʦ����Ϣ
	void Display();            //��ʾ��ʦ����Ϣ
};

void CTeacher::DataInput()	   //�����ʦ����Ϣ
{
    cout<<"�����������Ա������:";
	cin>>name>>sex>>age;
	cout<<"���빤�š�ְ�ƺ�н��:";
	cin>>no>>position>>monthMoney;
}

void CTeacher::Display()            //��ʾ��ʦ����Ϣ
{
    cout<<"��ʦ��Ϣ���£�\n";
	cout<<"����:"<<name<<",�Ա�:"<<sex<<",����:"<<age<<endl;
	cout<<"����:"<<no<<"��ְ��:"<<position<<",н��:"<<monthMoney<<endl;
}

void main()
{
	CTeacher  t;
	t.DataInput ();
	t.Display ();
}
