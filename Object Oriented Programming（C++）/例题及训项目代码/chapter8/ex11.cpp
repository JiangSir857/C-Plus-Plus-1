//����8.11���������������Ϊ�����Ԫ�������޸���8.9,������Ʒ�����ļӡ����������㡣
#include <iostream.h>
const int N=3,L=3;
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
};
CMatric operator+(const CMatric x,const CMatric y)//����ӷ���������غ���
{ 
	CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= x.a[i][j]+y.a[i][j];
	return k;
}
void main()
{
    int  aa[N][L]={11,21,31,41,51,61,71,81,11};
	int  bb[N][L]={10,12,13,14,15,16,17,18,19};
	CMatric x(aa),y(bb);
	CMatric z;
	z = x + y;
	cout<<"x����\n";
	x.print();
	cout<<"y����\n";
	y.print();
	cout<<"x+y����\n";
	z.print();
}
