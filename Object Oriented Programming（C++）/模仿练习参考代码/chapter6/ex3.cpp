/*
���һ������ʱ����࣬���ú�����Ĭ�ϲ�������ȱʡʱ����2013��10��1�գ�
*/
class  MyDate
{
private:
	int Year;
	int Month;
	int Day;
public:
	void Set(int y=2013,int m=10,int d=1); //��Ա��������
	void Display();              //��Ա��������
};

void MyDate::Set(int y,int m,int d)
{
	Year = y; 					//������
	Month= m;						//������
	Day  = d;       				//������
}
void MyDate::Display()
{
	cout<<"����Ϊ��"<<endl; 		//��ʾ"����Ϊ��"���س�
	cout<<"\t"<<Year<<"��";          //�ռ������ʾ���
	cout<<Month<<"��"��		     //��ʾ�·�
	cout<<Day<<"��"<<endl;		     //��ʾ�գ��س�
}

