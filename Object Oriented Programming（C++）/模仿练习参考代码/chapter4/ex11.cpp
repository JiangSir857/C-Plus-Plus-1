/*
1����N��ѧ����ѧ������Ϣ������ѧ�š�����������ͳɼ���
   Ҫ��Ӽ�������N��ѧ������Ϣ������Գɼ����ؼ������������
2�����ѽ����õ�N��ѧ����Ϣ�У�ͳ�Ʋ�������������������ѧ���������Ϣ��
*/
#include "iostream.h"
#define   N    3
struct Student
{ 
	long   no;			//ѧ��
    char   name[16];	     //����
	int    age;         	//����
	int    score;      	//�ɼ�
};
void fnSort(struct Student a[])						//�Գɼ����ؼ�������
{
	int i,k;
	struct Student  t;
	for(k=1;k<=N-1;k++)      			    		//���������ð������
    {   for(i=N-1;i>=k;i--)
        if(a[i].score <a[i-1].score )
        {   t=a[i]; a[i]=a[i-1]; a[i-1]=t; }		//�����򽻻�
     }
}

void fnNoPassInfo(struct Student stu[])//ͳ�Ʋ�������������������ѧ���������Ϣ��
{
	int i,count=0;
	cout<<"������ѧ����Ϣ��\n";
	for(i = 0; i<N; i++)
     {  
		if(stu[i].score <60)
		{
			count++;
			cout<<"ѧ��:"<<stu[i].no;
			cout<<"����:"<<stu[i].name;
			cout<<"����:"<<stu[i].age;
			cout<<"�ɼ�:"<<stu[i].score<<endl;
		}
     }
	cout<<"�����������="<<count<<endl;
}
void main()
{   
	struct Student stu[N];
    int i;
	for( i=0;i<N;i++)
	{
		cout<<"������ѧ��"<<i+1<<"����Ϣ(No,Name,age,Score):\n";
	    cin>>stu[i].no>>stu[i].name>>stu[i].age>>stu[i].score;
	}
	fnSort(stu);
   	for(i = 0; i<N; i++)
     {  
        cout<<"ѧ��:"<<stu[i].no;
        cout<<"����:"<<stu[i].name;
        cout<<"����:"<<stu[i].age;
        cout<<"�ɼ�:"<<stu[i].score<<endl;
     }
	fnNoPassInfo(stu);
}
