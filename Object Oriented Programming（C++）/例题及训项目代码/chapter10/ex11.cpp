//����10.11�� ����10.6�����ɵ�d:\a8.dat�ļ��У�������6��������
#include  "fstream.h"
void main()
{
	int   x;
	ifstream inputfile;
	inputfile.open ("d:\\a8.dat");
	if(!inputfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}
    inputfile.seekg(5*sizeof(int),ios::beg);// ������ָ�붨λ����6������λ�ã�
    inputfile.read ((char *)&x,sizeof(int));
    inputfile.close ();
    cout<<x<<endl;
}
