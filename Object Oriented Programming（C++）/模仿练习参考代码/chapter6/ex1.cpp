/*
1������һ����CBox����������ݳ�Ա�У��������ߣ���Ա�����У�
   ������㡢�ߴ��С�ı�ͳߴ���Ϣ����ʾ��
*/
#include "iostream.h"
#include "string.h"
class  CBox                    //������CBox
{
private:            		   //˽�����ݳ�Ա��length,width,hight 
	float  length,width,hight; 
public:                        //���к���������set(),peri(),area()
	void set(float a, float b,float c);//���ó�������
	float Volue();			   //���������
	void  Display();		   //�ߴ���Ϣ����ʾ����
};
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

/*2������һ����CName������˽�����ݳ�Աname���ַ�������������Ա����SetName������DisName()��
   �ֱ����ڴӼ�������������������Ļ����ʾ������
*/
class CName                    //������CName
{
private:            		 
	char name[16]; 
public:                      
	void SetName();    
	void  Display();		   
};

void CName::SetName()
{
	cout<<"������������";
	cin>>name;
}	

void CName::Display()			  
{
	cout<<"name="<<name<<endl;
}
