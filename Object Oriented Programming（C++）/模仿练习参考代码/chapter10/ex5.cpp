/*
2. �������ɸ�ѧ����Ϣ�����浽ָ�������ļ��У�Ȼ��Ҫ��������ѧ����Ϣ�Ӵ����ж��벢��ʾ����Ļ�ϡ�
   Ҫ���ýṹ����������ѧ����Ϣ�����ú���ʵ�ָ����ܡ�
*/
#include "iostream.h"
#include "fstream.h"
#include "string.h"
#define   NUM      6
class  Student
{
	long  no;
	char  name[16];
	int   age; 
	int   score; 
public:
	Student(){}
	Student(long n,char na[],int a,int s)//���캯��
	{
		no=n;
		strcpy(name,na);
		age = a;
		score = s;
	}
	void set(int n,char na[],int a,int s)
	{
		no = n;
		strcpy(name,na);
		age = a;
		score = s;
	}
	void disp()
	{
		cout<<"  "<<no<<","<<name<<","<<age<<","<<score<<endl;
	}
};
void DataInput(Student a[])
{
	long  no;
	char  name[16];
	int   age,score; 
	for(int i=0;i<NUM;i++)
	{
		cout<<"������ѧ��"<<i+1<<"����Ϣ��ѧ�ţ�����������ͳɼ���:\n";
		cin>>no>>name>>age>>score;
		a[i].set(no,name,age,score);
	}
}
void main()
{
	ofstream outfile("d:\\sdata.dat",ios::out|ios::binary);
	if(!outfile)
	{
		cout<<"���ļ�d:\\sdata.datʧ�ܣ�"<<endl;
		return;
	}
	Student  s[NUM];
	DataInput(s);
	for(int i=0;i<NUM;i++)
	  outfile.write ((char *)&s[i],sizeof(s[i]));//��NUM��ѧ������ֱ�д���ļ�
	outfile.close();

	ifstream inputfile("d:\\sdata.dat",ios::in|ios::binary);
	if(!inputfile)
	{
		cout<<"���ļ�d:\\sdata.datʧ�ܣ�"<<endl;
		return;
	}
	
	cout<<"--���ļ��ж���������ѧ������--\n";
	Student  t;
	inputfile.seekg(0L,ios::beg);
	inputfile.read ((char *)&t,sizeof(t));
	while(!inputfile.eof ())   				//A
	{
		t.disp ();
	    inputfile.seekg(sizeof(t),ios::cur);
		inputfile.read ((char *)&t,sizeof(t));
	}
	inputfile.close ();
}
