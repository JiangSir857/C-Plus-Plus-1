//����4.17���ṹ����������á�
#include "iostream.h"
#define  N     3
struct Student
{ 
	long   no;		 //ѧ��
 char   name[16];	 //����
	int    age;         //����
	int    score;       //�ɼ�
};
void main()
{    
    int i;
    struct Student stu[N];  //�ٶ���ṹ����������
    for (i = 0; i<N; i++)   //������ѧ������Ϣ���洢�ڽṹ������
    {     
        cout<<"�����"<<i+1<<"ѧ����Ϣ(ѧ��,����,����,�ɼ�):";
        cin>>stu[i].no>>stu[i].name>>stu[i].age>>stu[i].score;
    }
    cout<<"ѧ������Ϣ���£�\n";
    for (i = 0; i<N; i++)    //�����ѧ����Ϣ
	{
		cout<<stu[i].no<<"\t"<<stu[i].name<<"\t";
	    cout<<stu[i].age<<"\t"<<stu[i].score<<endl;
	}
}
