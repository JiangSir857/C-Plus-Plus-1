//����6.17�����Ծ�̬��Ա������ʹ�á�
#include <iostream.h>
int s = 0;
class  Sample
{
	static int  n;           //��̬���ݳ�Աn
public:
    Sample(int i){ n = i; }
	static void  add(){s+=n;} //��̬��Ա����add()
};
int  Sample::n = 0;       	  //��̬���ݳ�Աn�ĳ�ʼ��
void main()
{
	Sample  A(2),B(5);
	Sample::add();         	  //���ʾ�̬��Ա����add()
	cout<<"s = "<<s<<endl;
}
