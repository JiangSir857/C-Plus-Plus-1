/*
���һ����ѡ�����ʦ��ѧ���ĳ��������νṹ��ͼ8-14��ʾ��
������һϵ�н�ʦ��ѧ����¼�󣬽������ʦ��ѧ���������г�����������������ݽ��в��ԡ�
*/
#include <iostream.h>
#include <string.h>
class base  						//�������
{
protected:
	char  name[12];
     double score;
public:
	base(char n[],double s)
	{ strcpy(name,n);
	  score = s;
	}
     virtual  bool Isgood()=0;      //���麯��
	 virtual  void disp() = 0;	    //���麯��
};
class Student: public base			//����ѧ����
{
public:
    Student(char n[],double s): base(n,s){}
	bool Isgood( )
    {
		if(score>=90.0)
			  return true;
		else  return false;
    }
	void disp()
	{
		cout<<name<<",���Գɼ���"<<score<<endl;
	}
};
class Teacher: public base			//�����ʦ��
{
public:
    Teacher(char n[],double s): base(n,s){}
	bool Isgood( )
    {
		if(score>=3.0)
			  return true;
		else  return false;
    }
	void disp()
	{
		cout<<name<<",����ƪ����"<<score<<endl;
	}
};
void  main() 
{
	base *p;						//���������ָ��
    Teacher obj1("��÷��ʦ",5.0);	//������ʦ����obj1
    Student obj2("�ź�ѧ��",92.0);	//����ѧ������obj2 
    p=&obj1;						//pָ���ʦ����obj1
	if(p->Isgood())p->disp();
	p=&obj2;						//pָ��ѧ������obj2
	if(p->Isgood())p->disp();
}
