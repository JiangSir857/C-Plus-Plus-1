//����5.8�� ��֤��°ͺղ��룺һ����ż�����Էֽ�Ϊ��������֮�͡��Ա���򣬽�106��110֮���ȫ��ż���ֽ��������֮�͡�
#include "iostream.h"
#include "math.h"
	bool fnPrime(int n); 			//��������
void main()
{
	int a,b,m;
	for(m=106;m<=110;m+=2)
	for(a=2;a<=m/2;a++)
	{	if(fnPrime(a))		//��������
		{
			b = m-a;
			if(fnPrime(b)) //��������
			{
				cout<<m<<"="<<a<<"+"<<b<<endl;
				break;
			}
		}
	}
}

bool fnPrime(int n)		 //��������
{
	int i,k;
	k = (int)sqrt(n);
	for(i=2;i<=k;i++)
		if(n%i==0)return false;
	return true;
}
