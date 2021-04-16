/*
1������8.9�У��������������Ϊ���Ա��������ɷ�����ļ��������㡣
*/
#include <iostream.h>
const int N=3,L=3,M = 3;
class CMatric
{
private:
	int a[N][L];
public:
	CMatric()
	{
		int i,j;
		for(i=0;i<N;i++)
		for(j=0;j<L;j++)a[i][j]=0;
	}
	CMatric(const int b[N][L])
	{
		int i,j;
		for(i=0;i<N;i++)
		for(j=0;j<L;j++)a[i][j]=b[i][j];
	}
	~CMatric(){}
	void print()
	{	int i,j;
		for(i=0;i<N;i++)
		{	for(j=0;j<L;j++)cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
	CMatric operator+(const CMatric x); //�ӷ����������Ϊ��Ա����������
	CMatric operator-(const CMatric x); //�������������Ϊ��Ա����������
	CMatric operator*(const CMatric x); //�˷����������Ϊ��Ա����������

};
CMatric CMatric::operator+(const CMatric x)
{   CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= this->a[i][j]+x.a[i][j];
	return k;
}

CMatric CMatric::operator-(const CMatric x)
{   CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= this->a[i][j]-x.a[i][j];
	return k;
}
CMatric CMatric::operator*(const CMatric x) //aNXM  bMXL
{   CMatric k;
	int i,j,m1;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)
	{
		k.a[i][j] = 0;  
		for(m1=0;m1<M;m1++)
		   k.a[i][j] += this->a[i][m1]*x.a[m1][j];
	}
	return k;
}
void main()
{
	int  aa[N][L]={ 1,2,3,4,5,6,7,8,9};
	int  bb[N][L]={-1,0,1,2,3,4,5,6,7};
	CMatric x(aa),y(bb);
	CMatric z;
	z = x + y;              //������ļӷ�����
	cout<<"x����\n";
	x.print();
	cout<<"y����\n";
	y.print();
	cout<<"x+y����\n";
	z.print();
	cout<<"x-y����\n";
	z = x - y;              //������ļ�������
	z.print();
	cout<<"x*y����\n";
	z = x * y;              //������ĳ˷�����
	z.print();
}
