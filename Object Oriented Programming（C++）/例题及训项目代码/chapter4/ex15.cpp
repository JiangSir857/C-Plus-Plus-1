//����4.15�� �ṹ����������á�
#include "iostream.h"
struct Student
{ 
	long   no;					//ѧ��
    char   name[16];				//����
	int    age;         			//����
	int    score;       			//�ɼ�
};
void main()
{
    struct  Student  stu1,stu2;  	 //���������ṹ����stu1,stu2
    cout<<"������ѧ��1����Ϣ\n(No,Name,Age,Score):";
    cin>>stu1.no>>stu1.name>>stu1.age>>stu1.score;
    cout<<"������ѧ��2����Ϣ:\n(No,Name,Age,Score):";
    cin>>stu2.no>>stu2.name>>stu2.age>>stu2.score;
	cout<<"ѧ��1: ";
    cout<<stu1.no<<","<<stu1.name<<","<<stu1.age<<","<<stu1.score<<"\n";
    cout<<"ѧ��2: ";
	cout<<stu2.no<<","<<stu2.name<<","<<stu2.age<<","<<stu2.score<<"\n";
}

