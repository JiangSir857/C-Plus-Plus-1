/*
  ����windows���±����򴴽�һ���ļ�s.txt����¼��һЩӢ�ĵ��ʡ�
  Ȼ����ͳ���ļ�s.txt�д�д�ַ��ĸ�����Ҫ��������/�������ĳ�Ա����ʵ�֡�
*/
#include <fstream.h>
void main()
{
	char ch;
	int sum=0;
	ifstream inputfile("d:\\s.txt",ios::in|ios::nocreate); //�򿪶��ļ�
	if(!inputfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}

	while((ch = inputfile.get()) != EOF)
	{	if(ch >='A' && ch <='Z')sum++;
	}
	cout<<"�ļ�s.txt�д�д�ַ��ĸ���="<<sum<<endl;
	inputfile.close();								 //�ر��Ѵ򿪵Ķ��ļ�
}
