//����8.9���������������Ϊ���Ա��������Ʒ�����ļӡ����������㡣
//�ڴ˽����ط�����ļӷ����㣬���ؼ����ͳ˷��������ƣ�����������ɡ�
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
	{	int i,j;
		for(i=0;i<N;i++)
		{	for(j=0;j<L;j++)cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
	CMatric operator+(const CMatric x); //�ӷ����������Ϊ��Ա����������
};
CMatric CMatric::operator+(const CMatric x)
{   CMatric k;
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<L;j++)k.a[i][j]= this->a[i][j]+x.a[i][j];
	return k;
}
void main()
{
	int  aa[N][L]={11,21,31,41,51,61,71,81,11};
	int  bb[N][L]={10,12,13,14,15,16,17,18,19};
	CMatric x(aa),y(bb);
	CMatric z;
	z = x + y;              //������ļӷ�����
	cout<<"x����\n";
	x.print();
	cout<<"y����\n";
	y.print();
	cout<<"x+y����\n";
	z.print();
}
