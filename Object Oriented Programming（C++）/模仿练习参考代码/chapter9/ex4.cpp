/*
1��ΪT���͵��������һ����ģ�壬������Ԫ����͡�����ָ��Ԫ���Ƿ���ڣ�
   ����ڣ��򷵻���������Ԫ�ص��±꣬���򷵻�-1.
*/
#include <iostream.h>
template <class T1,class T2>   //ָ������ģ�����õ���ͨ����������
class MyArray
{
private:
	T1 a[20];
	T2  num;

public:
	MyArray(T1 *x,T2  n)
	{  
		for(int i=0;i<n;i++)
	 	   a[i] = x[i];
	    this->num = n;
	}
	T1  fnSum();
    T2	fnJuge(T1  x);
};

template <class T1,class T2>   //��Ա�����Ķ���
T1 MyArray<T1,T2>::fnSum()
{
	T1   s;
	int i;
	for(i=0,s=0;i<num;i++)
		s += a[i];
	return s;
}
template <class T1,class T2>   //��Ա�����Ķ���
T2	MyArray<T1,T2>::fnJuge(T1  x)
{
	T2  i;
     for(i=0;i<this->num;i++)
		if(x == this->a[i])return  i;
	 return (-1);
}
void main()
{
	int  a[]={1,2,3,4,5,6};
	MyArray<int,int> p1(a,6);              //�൱�ڰ�int����ģ����T1,T2��λ��

	cout<<"sum="<<p1.fnSum()<<endl;
	cout<<"5������Ԫ�ص��±�="<<p1.fnJuge(5)<<endl;

	double  b[]={1.5,2.5,3.5,4.0,5.0,6.0};
	MyArray<double,int> p2(b,6);           //�൱�ڰ�int����ģ����T2��λ��
									       //��double����ģ����T1��λ��


	cout<<"sum="<<p2.fnSum()<<endl;
	cout<<"2.5������Ԫ�����±�="<<p2.fnJuge(2.5)<<endl;
	cout<<"12.5������Ԫ�����±�="<<p2.fnJuge(12.5)<<endl;
}
