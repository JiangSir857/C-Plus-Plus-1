//����10.9��������d:\a8.dat�е����ݶ��뵽����iData�У�����ʾ������
#include  "fstream.h"
void main()
{
	int   iData[10],i;
 	ifstream inputfile("d:\\a8.dat");
	if(!inputfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}

	inputfile.read ((char *)iData,sizeof(int)*10);
	inputfile.close ();
	for(i=0;i<10;i++)
	    cout<<iData[i]<<" "; 
	cout<<endl;
}

