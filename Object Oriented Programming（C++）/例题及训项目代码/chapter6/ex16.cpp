//����6.16�� ʹ�þ�̬���ݳ�Ա��
#include <iostream.h>
class Sample
{
	int  n;
public:
    Sample(int i){ n = i; }
	void  add(){ Sample::s += n;}//��̬���ݳ�Ա������,��ʡ��Sample::
	static  int  s; 			 //��̬���ݳ�Ա����
};
int  Sample::s = 0;  			 //��̬���ݳ�Ա�ĳ�ʼ��������ʡ��Sample::
void main()
{
	Sample  a(2),b(5),c(8);
	a.add();
	cout<<"s = "<< Sample::s<<endl; //��̬���ݳ�Ա������
	b.add();
	cout<<" s= "<< Sample::s<<endl; //��̬���ݳ�Ա������
	c.add();
	cout<<"s = "<< Sample::s<<endl; //��̬���ݳ�Ա������
}
