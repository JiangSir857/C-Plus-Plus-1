/*����10.10�� �ü��±�����һ���ı��ļ�data.txt�����洢���ɸ�������
Ȼ���дһ���������е�����������д���������ļ�data.bin�С�
�������ļ�data.bin�еĵ�һ������������������ĸ�����*/
#include "iostream.h"
#include <fstream.h>
void main()
{
	int a[100],n=0;
	ifstream inputfile("d:\\data.txt",ios::in|ios::nocreate);
	if(!inputfile)
	{
		cout<<"���ļ�d:\\data.txtʧ�ܣ�"<<endl;
		return;
	}
	while(!inputfile.eof ()) 							  //A
		inputfile>>a[n++];
	inputfile.close ();
	ofstream outfile("d:\\data.bin",ios::out|ios::binary);
	if(!outfile)
	{
		cout<<"���ļ�d:\\data.binʧ�ܣ�"<<endl;
		return;
	}
	outfile.write ((char *)&n,sizeof(int));  				 //B
	outfile.write ((char *)a,n*sizeof(int));				 //C
	outfile.close ();
}
