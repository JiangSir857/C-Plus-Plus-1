/*
	����windows���±����򴴽�һ���ļ�s.txt����¼��10��Ӣ�ĵ��ʡ�
	Ȼ����ͳ���ļ�s.txt��Сд�ַ��ĸ�����
*/
	#include <fstream.h>
	void main()
	{
		char str[80];
		int i,k,sum=0;
		ifstream inputfile("d:\\s.txt",ios::in|ios::nocreate);
		if(!inputfile)
		{
			cout<<"���ļ�ʧ�ܣ�"<<endl;
			return;
		}
		for(i=0;i<10;i++)
		{
			inputfile>>str;
			k=0;
			while(str[k])
			{	if(str[k]>='a' && str[k]<='z') sum++;
				k++;
			}
		}
		cout<<"�ļ�s.txt��Сд�ַ��ĸ���="<<sum<<endl;
		inputfile.close ();
	}
