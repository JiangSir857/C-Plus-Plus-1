//����10.7�� д�ַ�����d:\a7.dat�ļ��С�
#include <fstream.h>
#include <string.h>
void main()
{
	char str[1024];
	strcpy(str,"Hello C++!");
	ofstream outputfile("d:\\a7.dat");
	outputfile.write (str,strlen(str));
	outputfile.close ();
}