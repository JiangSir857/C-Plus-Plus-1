/*
   ���һ��������Change�ṩͳһ�ӿڣ�
   ���ݴ�������������������ɴӻ����¶ȵ������¶ȵ�ת����
   ��ֵ�����׵�ת���ȡ�
*/
#include <iostream.h>

class  Change   				//������Change
{
public:
     virtual  float chan(float )=0;    //���麯��
};

class  FtoCChange: public Change //�����¶ȵ������¶ȵ�ת��
{
public:
    float chan(float f )
    {
       return (f-32.0F)*5.0F/9.0F;
    }
};

class  PtoMChange: public Change//��ֵ�����׵�ת��
{
public:
	float chan(float p )
	{
		return p/2.845F;
	}
};

void  main ( ) 
{
	Change *p;         //�������ָ������
    FtoCChange s1;     //�������s1
    PtoMChange s2;     //�������s2    
    p=& s1;            //pָ��s1
    cout<<p->chan (40.5F)<<endl;
	p=& s2;            //pָ��s2
    cout<<p->chan (30.5F)<<endl;
}
