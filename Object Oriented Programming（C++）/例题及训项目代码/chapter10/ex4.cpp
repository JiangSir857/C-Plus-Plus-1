//����10.4�� ��d:\a3.dat�ļ��ж����ַ������������н����ͼ10-7��ʾ��
	#include <fstream.h>
	void main()
	{
		char str1[80],str2[80];
		ifstream inputfile("d:\\a3.dat",ios::in|ios::nocreate);
		if(!inputfile)
		{
			cout<<"���ļ�ʧ�ܣ�"<<endl;
			return;
		}
		inputfile>>str1>>str2;
		cout<<str1<<" "<<str2<<endl;
		inputfile.close ();
	}
