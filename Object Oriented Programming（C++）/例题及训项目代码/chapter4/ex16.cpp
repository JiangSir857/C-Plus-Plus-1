//����4.16�� �ṹ�����ĳ�ʼ����
#include "iostream.h"
struct Student
{ 
    		long  no;             //ѧ��
		char name[16];        //����
		int age;			   //����
		int score;            //�ɼ�
}stu1 = {2012001L,"ZhanSan",17,85};//�������stu1����ʼ��
void main()
{
    struct  Student stu2 ={2012002L,"WangWu",16,95};//�������stu2����ʼ��
    cout<<"ѧ��1����Ϣ: ";
    cout<<stu1.no<<","<<stu1.name<<","<<stu1.age<<","<<stu1.score<<endl;
    cout<<"ѧ��2����Ϣ: ";
    cout<<stu2.no<<","<<stu2.name<<","<<stu2.age<<","<<stu2.score<<endl;
}

