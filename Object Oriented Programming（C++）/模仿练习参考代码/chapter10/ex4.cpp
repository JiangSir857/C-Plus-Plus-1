/*
1. ��Fibonacci���е�30��д��������ļ���Ȼ���������ʾ���е��������ÿ����ʾ5������
*/
#include  "fstream.h"
#define   N     18
void main()
{
	int  iData[N]={0},i,n;
    iData[0]=iData[1] = 1;
	for(i=2;i<N;i++)
	   iData[i]=iData[i-1]+iData[i-2];  
  	ofstream outputfile("d:\\a9.dat");			//�ù��캯�����ļ�
	if(!outputfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}
	outputfile.write ((char *)iData,sizeof(int)*N);//д����
	outputfile.close ();						//�ر��ļ�

	ifstream inputfile("d:\\a9.dat");
	if(!inputfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}
    for(i=0;i<N;i+=2)
	{
	   inputfile.read ((char *)&n,sizeof(int));
	   cout<<n<<" ";
	   inputfile.seekg((long)sizeof(int),ios::cur);
	}
	cout<<"\n";
	inputfile.close ();
}
