/*
1. ʹ�õݹ鷽������Fibonacci���еĵڣ��
2. һ����: 1��12��123��1234��12345��123456..., �ݹ��㷨���n������n<=9����
*/

#include "iostream.h"
long  Fibonacci(int  n) ;  		//��������
//1. ʹ�õݹ鷽������Fibonacci���еĵڣ��
long  Fibonacci(int  n)    		//����ݹ麯��
{
	long   f;
	if(n ==1 || n==2)
		 f = 1;
    else f = Fibonacci(n-1) + Fibonacci(n-2);
    return  f;
}
//2. һ����: 1��12��123��1234��12345��123456..., �ݹ��㷨���n������n<=9����
long  fn(int n)
{
	long k;
	if(n == 1)k=1;
	else      k = 10L*fn(n-1)+n;
	return k;
}

void main()
{
    int  n;
	cin>>n;
	cout<<"Fibonacci���еĵ�"<<n<<"��="<<Fibonacci(6)<<endl;

	cout<<fn(4)<<endl;

}
