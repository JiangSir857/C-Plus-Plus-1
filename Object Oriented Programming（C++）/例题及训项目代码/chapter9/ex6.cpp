//����9.6�����г�������ĺ���ģ��Ķ����ʹ�á�
#include <iostream.h>
template <class T,int k>
T fnAver(T x,T y)
{
   return (x+y)/k;
}
void main()
{
	float a,b,c;
	cout<<"��������ʵ����";
	cin>>a>>b;
	c = fnAver<float,2>(a,b);  //A��ʵ����ΪfnAver(float,float)����k=2
	cout<<"c="<<c<<endl;
}
