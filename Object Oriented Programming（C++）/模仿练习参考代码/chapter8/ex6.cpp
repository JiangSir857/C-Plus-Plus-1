/*
1������8.11�У��������������Ϊ����Ԫ��������ɷ�����ļ��������㡣
*/
#include <iostream.h>
const int N=3,L=3,M=3;
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
	{
		int i,j;
		for(i=0;i<N;i++)
		{	for(j=0;j<L;j++)cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
	friend CMatric operator+(const CMatric x,const CMatric y); //�ӷ����������Ϊ��Ԫ����������
	friend CMatric operator-(const CMatric x,const CMatric y); //�������������Ϊ��Ԫ����������
	friend CMatric operator*(const CMatric x,const CMatric y); //�˷����������Ϊ��Ԫ����������
};
CMatric operator+(const CMatric x,const CMatric y)//����ӷ���������غ���
{ 
	CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= x.a[i][j]+y.a[i][j];
	return k;
}
CMatric operator-(const CMatric x,const CMatric y)//���������������غ���
{ 
	CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= x.a[i][j]-y.a[i][j];
	return k;
}
CMatric operator*(const CMatric x,const CMatric y)//����˷���������غ���
{ 
	CMatric k;
	int i,j,h;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)
	{	
		k.a[i][j]= 0;
		for(h=0;h<M;h++)
		  k.a[i][j] += x.a[i][h]*y.a[h][j];
	}
	return k;
}
void main()
{
    int  aa[N][L]={1,2,3,4,5,6,7,8,9};
	int  bb[N][L]={-1,0,1,2,3,4,5,6,7};
	CMatric x(aa),y(bb);
	CMatric z;
	z = x + y;
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
