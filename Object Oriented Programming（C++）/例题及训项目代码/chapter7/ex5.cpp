//����7.5�������๹�캯���Ķ��巽����
#include  "iostream.h"
#include  "string.h"
class CPerson            //����
{
	char pName[20];      //����
	char pID[20];        //ѧ��
	bool bMan;           //�Ա�false��ʾŮ��true��ʾ��
public:
	CPerson(char *name, char *id,bool isman=true) //���캯��
	{
		strcpy(pName,name);
		strcpy(pID,id);
		bMan = isman;
	}
	void Output()
	{
		cout<<"������"<<pName<<endl;
		cout<<"ѧ�ţ�"<<pID<<endl;
		char *str = bMan?"��":"Ů";
		cout<<"�Ա�"<<str<<endl;
	}
};
class CStudent: public CPerson  //������
{
	float dbScore[3];          	//3�ųɼ�
	char  department[20];     	//����
public:
	CStudent(char *name, char *id,bool isman,char *dp):CPerson(name,id,isman)
	{
		strcpy(department,dp);
	}
	void InputScore(float score1,float score2,float score3)
	{
		dbScore[0]=score1;
		dbScore[1]=score2;
		dbScore[2]=score3;
	}
	void Print()
	{
		Output();               //���û����Ա����
		cout<<"ϵ����"<<department<<endl;
		for(int i=0;i<3;i++)
			cout<<"�ɼ�"<<i+1<<": "<<dbScore[i]<<",";
		cout<<endl;
	}
};
void  main()
{
	CStudent stu("��  ��","20130129",false,"�����ϵ");
	stu.InputScore (80,75,89);
	stu.Print ();
}
