#include "iostream.h"
#include "string.h"
class Student;
class Teacher
{
private:
	int bh;
	char name[10];
public:
	Teacher(int h,char n[])
	{
		this->bh = h;
		strcpy(name,n);
	}
	void display()
	{
		cout<<"  hb:"<<bh<<endl;
		cout<<"name:"<<name<<endl;
	}
	void modify_stu(Student &,float);//Teacher���еĳ�Ա����
};

class Student
{
private:
	int id;
	float score;
public:
	Student(int xh,float s)
	{
		this->id = xh;
		this->score = s;
	}
	void display()
	{
		cout<<"   id: "<<id<<endl;
		cout<<"score: "<<score<<endl;
	}
	//����Teacher���еĳ�Ա����ΪStudent�����Ԫ����
	friend void Teacher::modify_stu(Student &,float);
};

void Teacher::modify_stu(Student &c,float s)
{
	c.score = s;
}

void main()
{
	Teacher t1(1000,"����");
	Student c(1022,75);
	c.display ();
	t1.modify_stu (c,80);
	c.display ();
}

