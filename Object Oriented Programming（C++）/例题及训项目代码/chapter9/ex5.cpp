//����9.5�� ������ĺ���ģ�塣
#include <iostream.h>
template <class T1,class T2>
void fnPrint(T1 x,T2 y,int z)
{
   cout<<x<<","<<y<<","<<z<<endl;
}
void main()
{
	fnPrint('#',4,5);   //ʵ����ΪfnPrint(char x,int y,int z)
	fnPrint(6,7,8);     //ʵ����ΪfnPrint(int x,int y,int z)
	fnPrint(9.5,10,11); //ʵ����ΪfnPrint(double x,int y,int z)
}

