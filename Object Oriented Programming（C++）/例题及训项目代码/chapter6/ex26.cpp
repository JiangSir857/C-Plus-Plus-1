//����6.26�� thisָ���ʹ�á�
#include  <iostream.h>
class Sample
{
	int x,y;
public:
	Sample(int a=0,int b=0)
	{  
		this->x = a;               //�ȼ���x = a;
		this->y = b;               //�ȼ���y = b;
	}
	void Display()
	{
		cout<<this<<"\t";  				//E ,�����ǰ����ĵ�ַ
		cout<<this->x<<"\t"<<this->y<<"\n";  //�����ǰ��������ݳ�Աx,y
	}
};
void main()
{  
	Sample c1(1,4),c2(3,7);
	cout<<&c1<<endl;        				 //A, �������c1�ĵ�ַ
	c1.Display();            				 //B, ���ö���c1�ĳ�Ա����
	cout<<&c2<<endl;        				 //C, �������c2�ĵ�ַ
	c2.Display();          					 //D, ���ö���c2�ĳ�Ա����
}
