//����8.5�� �������³����ִ�н����
#include <iostream.h>
#define  PI    3.14159
class  shapes   				//������shapes
{
protected:
     int x,y;
public:
     void setvalue (int d , int w=0){x=d;y=w;}
     virtual  void disp( )=0;    //���麯��
};
class  square:  public shapes
{
public:
    void disp( )
    {
     cout <<"���������"<<x*y <<endl;
    }
};
class  circle: public shapes
{
public:
	void disp( )
	{
		cout<<"Բ���: " <<PI*x*x<<endl;
	}
};

void  main ( ) 
{
	shapes *ptr[2];         //�������ָ������
    square s1;              //�������s1
    circle c1;              //�������c1    
    ptr[0]=& s1;            //ptr[0]ָ��s1
    ptr[0]->setvalue(10,5); //�൱��s1.setvalue(10,5)
    ptr[0]->disp( );        //�൱��s1.disp()
    ptr[1]=&c1;             //ptr[1]ָ��c1
    ptr[1]->setvalue(10);  //�൱��c1.setvalue(10)
    ptr[1]->disp( );       //�൱��c1.disp()
}
