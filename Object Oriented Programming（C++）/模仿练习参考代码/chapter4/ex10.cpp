/*
����һ������ѧ����Ϣ�Ľṹ���ͣ����У�ѧ�š�������5�ſγ̳ɼ����ܳɼ�����
Ȼ����ṹ�����������������Ϣ��ͳ���ܳɼ�����������ѧ����������Ϣ��
*/
#include "iostream.h"
struct Student
{ 
	long   no;					//ѧ��
    char   name[16];				//����
	int    score[5];       			//�ɼ�
	int    total;
};
void main()
{
    struct  Student  stu1;  	 //����ṹ����stu1
	int i;
    cout<<"������ѧ������Ϣ\n(No,Name,Score,Score2,Score3,Score4,Score5):\n";
    cin>>stu1.no>>stu1.name;
	for( i=0;i<5;i++)
		cin>>stu1.score[i];
	stu1.total =0;
	for( i=0;i<5;i++)
		stu1.total +=stu1.score[i];

	cout<<"ѧ����Ϣ: ";
    cout<<stu1.no<<","<<stu1.name;
	for( i=0;i<5;i++)
		cout<<","<<stu1.score[i];
    cout<<",�ܳɼ�="<<stu1.total <<endl;
}
