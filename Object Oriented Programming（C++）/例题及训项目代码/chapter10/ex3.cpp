//����10.3�� ���ַ���"Good morning!"д��d:\a3.dat�ļ��С�
#include <fstream.h>
void main()
{
	ofstream outfile("d:\\a3.dat",ios::out|ios::trunc); //���ù��캯�����ļ�
	if(!outfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}
	outfile<<"Good morning!";			 //�����������"<<"д�ַ�����������
	outfile.close();					 //�ر��ļ�
}
