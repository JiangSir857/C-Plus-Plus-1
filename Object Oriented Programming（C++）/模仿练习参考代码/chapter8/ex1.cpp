/*
���һ��Сѧ����Pupil������ѧ�š��������༶�����ġ���ѧ��Ӣ���ѧ�Ƶĳɼ���
��Ա����display()������ʾѧ����Ϣ���ڴ˻�����������һ����ѧ����Mstudent��
���������ѧ��ѧ�Ƴɼ�������Ҳ������ʾѧ����Ϣ�ĳ�Ա����display()��
*/
#include "iostream.h"
#include "string.h"

class Pupil
{
protected:
	long no;         //ѧ��
	char name[16];   //����
	char iclass[10]; //�༶
	int  s1,s2,s3;   //���ġ���ѧ��Ӣ��ɼ�
public:
	Pupil(long id,char n[],char ic[],int s1,int s2,int s3)
	{
		no=id;             //ѧ��
	    strcpy(name,n);    //����
		strcpy(iclass,ic); //�༶
		this->s1=s1;
		this->s2=s2;
		this->s3=s3;
	}
	virtual void display()			//�����е��麯��
	{ 
		cout<<"����Pupil�����display()����.\n";
		cout<<"ѧ��:"<<no<<",����:"<<name<<",�༶:"<<iclass<<",����:"<<s1<<",��ѧ:"<<s2<<",Ӣ��:"<<s3<<endl;
	} 
};

class Mstudent: public Pupil
{
	int  phusics,chemistry;
public:
	Mstudent(int p,int c,long id,char n[],char ic[],int s1,int s2,int s3): Pupil(id,n,ic,s1,s2,s3)
	{
		phusics=p;chemistry=c;
	}
	virtual void display()		   //�������е��麯��������е��麯���в�ͬ��ʵ��
	{
		cout<<"����Mstudent���display()����.\n";
		cout<<"����:"<<phusics<<"����ѧ:"<<chemistry<<endl;
		cout<<"ѧ��:"<<no<<",����:"<<name<<",�༶:"<<iclass<<",����:"<<s1<<",��ѧ:"<<s2<<",Ӣ��:"<<s3<<endl;
	}
};

void  fun(Pupil &c)
{
	 c.display();                                          //����ʱ��ȷ�������Ǹ��麯��
}
void main()
{
	Pupil  P1(2014L,"����","һ��",78,80,90),*p;
	Mstudent M1(99,88,2014L,"����","����",68,80,60);
	cout<<"1. ͨ��������������Ӧ���麯����"<<endl;         //����ʵ�ֶ�̬
	P1.display();
	M1.display();

	cout<<"\n2. ͨ�����ú�ָ����������Ӧ���麯����"<<endl; //ʵ�ֶ�̬
	fun(P1);
	p = &P1;
	p->display();
	fun(M1);
	p = &M1;
	p->display();
}
