//����9.7������ģ������ء�
#include <iostream.h>
template <class T>
T  fnMax(T x,T y)            //����ģ�� 
{
	cout<<"ģ�庯��fnMax(T,T)!, ";
	return x>y?x:y;
}
template <class T>
T  fnMax(T x,T y,T z)        //���غ���ģ��   
{
	T max;
	cout<<"ģ�庯��fnMax (T,T,T)!, ";
	max = fnMax(x,y);
	return fnMax(max,z);
}
int  fnMax(int x,int y)      //��ͨ�������غ���ģ��
{
	cout<<"ģ�庯��fnMax (int,int)!, ";
	return  x>y?x:y;
}
int  fnMax(int x,char y)     //��ͨ�������غ���ģ��
{
	cout<<"ģ�庯��fnMax (int,char)!, ";
	return  x>y?x:y;
}

void main()
{
	char  c = 'a';
	int   i  = 10;
	double f = 100.8;
	cout<<"fnMax("<<c<<")="<<fnMax(c,c)<<endl;
	cout<<"fnMax("<<i<<")="<<fnMax(i,i)<<endl;
	cout<<"fnMax("<<f<<")="<<fnMax(f,f)<<endl;
	cout<<"fnMax("<<i<<","<<c<<")="<<fnMax(i,c)<<endl;
	cout<<"fnMax("<<c<<","<<i<<")="<<fnMax(c,i)<<endl;
	cout<<"fnMax("<<f<<","<<i<<")="<<fnMax(f,i)<<endl;
	cout<<"fnMax("<<i<<","<<f<<")="<<fnMax(i,f)<<endl;
}
