//����6.18���������ɸ�ѧ�����ݣ���Щ���ݰ���ѧ�š�������C++������ƺ�Ӣ��ɼ�������ſγ̵�ƽ���֡���дһ������Ҫ����Ʋ�ͬ�ĳ�Ա��������ſγ̵�ƽ���֡�
#include <iostream.h>
#include <string.h>
class  student
{
	int  no;
	char name[10];
	int  deg1;  	 	//C++������Ƴɼ�
	int  deg2;  	 	//Ӣ��ɼ�
	static int sum1; 	//C++������Ƴɼ��ܷ�
	static int sum2; 	//Ӣ��ɼ��ܷ�
	static int  sn;  	//������
public:
	student(int n,char na[],int d1,int d2)//���캯��
	{
		no=n;
		strcpy(name,na);
		deg1=d1;deg2=d2;
		sum1+=deg1;sum2+=deg2;
		sn++;
	}
	static double avg1(){return (sum1*1.0)/sn;}// ��̬��Ա����
	static double avg2(){return (sum2*1.0)/sn;}// ��̬��Ա����
	void disp()
	{
		cout<<"  "<<no<<","<<name<<","<<deg1<<","<<deg2<<endl;
	}
};

int student::sum1=0;//��̬���ݳ�Ա�ĳ�ʼ��
int student::sum2=0;//��̬���ݳ�Ա�ĳ�ʼ��
int student::sn=0;	 //��̬���ݳ�Ա�ĳ�ʼ��
void main()
{
	student  s1(6001,"Li",67,89); 		//������һ��ѧ������
	student  s2(6002, "Ma",62,79);		//�����ڶ���ѧ������
	student  s3(6003, "Li Ming",87,69);  //����������ѧ������
	student  s4(6004, "Zhan San",97,99); //�������ĸ�ѧ������
	cout<<"������"<<endl;
	s1.disp();
	s2.disp();
	s3.disp();
	s4.disp();
	cout<<"  C++ƽ���� : "<<s1.avg1()<<endl;
	cout<<"  Ӣ��ƽ����: "<<s1.avg2()<<endl;
}
