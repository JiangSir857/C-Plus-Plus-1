//����6.11�� ���һ�������࣬�������ú���ʾ���ڵĳ�Ա������
#include "iostream.h" 
class  MyDate
{
private:
	int Year, Month, Day;
public:
	void SetDate(int y,int m,int d); //��Ա����
	void Display();                  //��Ա����
};
void MyDate::SetDate(int y,int m,int d)//��Ա����ʵ��
{
	Year  = y; //�������
	Month = m; //�����·�
	Day   = d; //������
}
void MyDate::Display()
{
	cout<<"����Ϊ��";       //��ʾ"����Ϊ��"
	cout<<Year<<"��"; 		//�ռ������ʾ���
	cout<<Month<<"��";      //��ʾ�·�
	cout<<Day<<"��"<<endl;  //��ʾ�գ��س�
}
void main( )
{
    MyDate  a;             //����һ�����ڶ���a
	a.SetDate(2013,9,1);   //���ó�Ա����SetDate()��������
	a.Display();           //���ó�Ա����Display()��ʾ����
}
