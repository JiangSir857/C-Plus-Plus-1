/*
����10.10�Ľ���ļ�data.bin���ݶ�����������ʾ����Ļ�ϣ�����֤����ȷ�ԡ�
*/
#include "iostream.h"
#include <fstream.h>
void main()
{
	int a[100],n=0;
	ifstream infile("d:\\data.bin",ios::in|ios::binary);
	if(!infile)
	{
		cout<<"���ļ�d:\\data.binʧ�ܣ�"<<endl;
		return;
	}
	infile.read((char *)&n,sizeof(int));  				 //B
	cout<<n<<" ";
	infile.read ((char *)a,n*sizeof(int));				 //C
	infile.close ();
	for(int i=0;i<n;i++)//��ʾ����Ļ��
	{ cout<<a[i]<<" ,";}

}
