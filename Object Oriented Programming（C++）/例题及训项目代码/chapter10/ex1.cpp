/**********************************
*   write data to file a1.dat     *  
**********************************/
//����10.1�� ��3������д��d:\\a1.dat�ļ��С�
#include <fstream.h>
void main()
{
	ofstream outfile("d:\\a1.dat");
	if(!outfile)//����ļ��Ƿ��
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}
	outfile<<245<<" "<<290<<" "<<1000;
	outfile.close ();//�ر��ļ�
}
