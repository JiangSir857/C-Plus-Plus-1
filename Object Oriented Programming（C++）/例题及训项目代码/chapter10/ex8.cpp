//����10.8�� �Ӽ�������10�����������洢�ڴ����ļ�d:\a8.dat�С�
#include  "fstream.h"
void main()
{
	int  iData[10],i;
	cout<<"������10��������";
	for(i=0;i<10;i++)
	   cin>>iData[i];          					//����10�������洢������iData��
	ofstream outputfile("d:\\a8.dat");			//�ù��캯�����ļ�
	if(!outputfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}
	outputfile.write ((char *)iData,sizeof(int)*10);//д����
	outputfile.close ();						//�ر��ļ�
}
