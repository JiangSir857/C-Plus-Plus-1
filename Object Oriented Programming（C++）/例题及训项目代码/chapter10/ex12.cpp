//����10.12�� �ļ��������д��
#include "iostream.h"
#include "fstream.h"
#include "string.h"
class  Student
{
	long  no;
	char  name[16];
	int   age; 
	int   score; 
public:
	Student(){}
	Student(int n,char na[],int a,int s)//���캯��
	{
		no=n;
		strcpy(name,na);
		age = a;
		score = s;
	}
	void disp()
	{
		cout<<"  "<<no<<","<<name<<","<<age<<","<<score<<endl;
	}
};
void main()
{
	ofstream outfile("d:\\sdata.dat",ios::out|ios::binary);
	if(!outfile)
	{
		cout<<"���ļ�d:\\sdata.datʧ�ܣ�"<<endl;
		return;
	}
	Student  s1(2013001,"����",17,89); //������1��ѧ������
	Student  s2(2013002,"����",22,79); //������2��ѧ������
	Student  s3(2013003,"����",19,59); //������3��ѧ������
	Student  s4(2013004,"����",20,90); //������4��ѧ������
	outfile.write ((char *)&s1,sizeof(s1));//��4��ѧ������ֱ�д���ļ�
	outfile.write ((char *)&s2,sizeof(s2));
	outfile.write ((char *)&s3,sizeof(s3));
		outfile.write ((char *)&s4,sizeof(s4));
	Student  s(2013003,"����",18,59);// ������5��ѧ������s
	outfile.seekp (2*sizeof(s),ios::beg);//��ָ����ļ�ͷλ������ƶ�2��ѧ�������ֽ���
	outfile.write ((char *)&s,sizeof(s));//��д���ļ����޸���ԭ�ļ��еĵ�����ѧ������
	outfile.close();				   //�ر��ļ�
	ifstream inputfile("d:\\sdata.dat",ios::in|ios::binary);
	if(!inputfile)
	{
		cout<<"���ļ�d:\\sdata.datʧ�ܣ�"<<endl;
		return;
	}
	
	cout<<"--���ļ��ж�����3��ѧ������--\n";
	Student  t;
	inputfile.seekg(2*sizeof(t),ios::beg);
	inputfile.read ((char *)&t,sizeof(t));
	t.disp();
    cout<<"---���ļ��ж���ȫ��������----\n";
	inputfile.seekg(0L,ios::beg);
	inputfile.read ((char *)&t,sizeof(t));
	while(!inputfile.eof ())   				//A
	{
		t.disp ();
		inputfile.read ((char *)&t,sizeof(t));
	}
	inputfile.close ();
}
