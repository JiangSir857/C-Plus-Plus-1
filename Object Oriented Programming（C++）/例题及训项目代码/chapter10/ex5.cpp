//����10.5�� ��d:\a3.dat�ļ��ж�ȡÿһ���ַ�����ʾ����Ļ�ϡ�
#include <fstream.h>
void main()
{
	char ch;
		ifstream inputfile("d:\\a3.dat",ios::in|ios::nocreate);
	if(!inputfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}
	while((ch = inputfile.get()) != EOF)cout<<ch;
	cout<<endl;
	inputfile.close ();
}

