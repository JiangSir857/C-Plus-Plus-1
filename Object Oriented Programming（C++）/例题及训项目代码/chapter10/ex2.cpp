//����10.2�� ˳���������ʾ��10.1д�뵽�ļ�d:\a1.dat�е�����
#include <fstream.h>
void main()
{
	int x,y,z;
	ifstream inputfile("d:\\a1.dat",ios::in|ios::nocreate); //���ù��캯�����ļ�
	if(!inputfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}
	inputfile>>x>>y>>z; 					//�����������">>"������
	cout<<x<<" "<<y<<" "<<z<<endl;
	inputfile.close ();               		//�ر��ļ�
}

