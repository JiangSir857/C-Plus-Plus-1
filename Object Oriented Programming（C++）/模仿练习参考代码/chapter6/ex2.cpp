/*
	����һ����CBox����������ݳ�Ա�У��������ߣ�
	��Ա�����У�������㡢�ߴ��С���úͳߴ���Ϣ����ʾ��
	���гߴ��С���ö��庯�����أ�������ʱ��һ��������
	������������ʱ�ö���������������ʱ������������
*/
#include "iostream.h"
class  CBox                    //������CBox
{
private:            		   //˽�����ݳ�Ա��length,width,hight 
	float  length,width,hight; 
public:                        //���к���������set(),peri(),area()
	void set(float a);
	void set(float a, float b);
	void set(float a, float b,float c);
	float Volue();			   //���������
	void  Display();		   //�ߴ���Ϣ����ʾ����
};
void CBox::set(float x)//�����Ա����set()
{
	length= x;                
	width = x;			      
	hight = x;
}
void CBox::set(float x,float y)//�����Ա����set()
{
	length= x;                
	width = x;			      
	hight = y;
}
void CBox::set(float x,float y,float z)//�����Ա����set()
{
	length= x;                
	width = y;			      
	hight = z;
}	
float CBox::Volue()			   
{
	return (length*width*hight);   
}
void CBox::Display()			  
{
	cout<<"��="<<length<<"����="<<width<<"����="<<hight<<endl;
}