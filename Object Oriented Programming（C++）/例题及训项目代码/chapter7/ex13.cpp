//����7.13����дһ������ʵ��ѧԺ��ʦ����ְ��ʦ�������ݲ���...
#include <iostream.h> 
#include <string.h>
class person
{ 
	int bh;      //���
	char xm[10]; //����
public: 
	void setperson(int bh1,char xm1[])
	{  
		bh= bh1;
		strcpy(xm,xm1);
	}
	void dispperson()
	{
		cout<<"��ţ�"<<bh<<endl;
		cout<<"������"<<xm<<endl;
	}
};
class  teacher : virtual public person 
{  
	char xb[20];   //����ϵ
	char zc[10];   //ְ��
public: 
	void setteacher(char xb1[],char zc1[])
	{
		strcpy(xb,xb1); strcpy(zc,zc1);
	} 
	void dispteacher()
	{
		cout<<"ϵ��"<<xb<<endl;
		cout<<"ְ�ƣ�"<<zc<<endl;
	}
};                                                      
class enginner : virtual public person 
{  
	char ks[20];   //����
	char zy[10];   //רҵ
public: 
	void setenginner(char ks1[],char zy1[])
	{
		strcpy(ks,ks1); strcpy(zy,zy1);
	} 
	void dispenginner()
	{
		cout<<"���ң�"<<ks<<endl;
		cout<<"רҵ��"<<zy<<endl;
	}
};  
class teachengi : public teacher, public enginner
{ public:
	void setteachengi(int bh1,char xm1[],char xb1[],char zc1[],char ks1[],char zy1[])
	{  
		setperson(bh1,xm1);
	    setteacher(xb1,zc1);
		setenginner(ks1,zy1);
	}
	void dispteachengi()
	{
		dispperson();
		dispteacher();
		dispenginner();
	}
};
void main()
{   
	teachengi  obj;             //����D�Ķ���od
    obj.setteachengi(129,"��ɽ","�������ϵ","����","�����","���ݿ�"); 
    obj.dispteachengi();
}
