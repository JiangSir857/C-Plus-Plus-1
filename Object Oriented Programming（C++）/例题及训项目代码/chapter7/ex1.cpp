//����7.1�� �ȶ���Person�࣬Ȼ����Person���������Student��
class Person
{
	char name[10];              //����
	int age;				    //����
public:
	void show();
};
class Student: public Person
{
	long no;				   //ѧ��
	int  eScore, mScore;	   //Ӣ��ɼ�����ѧ�ɼ�
public:
	void calSum();			   //�����ܳɼ�
};
