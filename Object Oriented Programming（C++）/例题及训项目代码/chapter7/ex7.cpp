//����7.7�� һ���򵥵Ķ�̳�ʾ����
#include<iostream.h>
class  Base1
{ 	 int b1;
  public:
	 void setB1(int i){ b1=i; }
	 void showB1(){ cout<<"\nb1="<<b1; }
};
class  Base2
{
    int b2;
 public:
	 void setB2(int i){ b2=i; }
	 void showB2(){cout<<"\nb2="<<b2; }
};

class Derived : public Base1, private Base2   //������������Derived
	{	int d;
public:
	 void setD(int i, int j) {d=i;  setB2(j); } //��
	 void showD(){ showB2(); cout<<"\nd ="<<d;} //��
};

void main()
{	Derived d;           //���� Derived �Ķ��� d
	d.setB1(15);
	d.showB1();
	d.setD(37,49);
	d.showD();
	//d.setB2(26);       //��
	//d.showB2();        //��
}
