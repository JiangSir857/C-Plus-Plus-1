//����10.6�� �ı��ļ��ĸ��ơ�
#include <fstream.h>
void main()
{
	char ch;
	ifstream inputfile("d:\\a3.dat",ios::in|ios::nocreate); //�򿪶��ļ�
	if(!inputfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}
	ofstream outputfile("d:\\a6.dat",ios::out|ios::trunc);//��д�ļ�
	if(!outputfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		outputfile.close ();          				 //�ر��Ѵ򿪵Ķ��ļ�
		return;
	}
	while((ch = inputfile.get()) != EOF)outputfile.put(ch);
	cout<<"�ļ����Ƴɹ���"<<endl;
	inputfile.close();								 //�ر��Ѵ򿪵Ķ��ļ�
	outputfile.close();								 //�ر��Ѵ򿪵�д�ļ�
}
