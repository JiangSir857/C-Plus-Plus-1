//��Ŀ1��C++Դ�ļ��ı���Ԥ����
#include "iostream.h"
#include <fstream.h>
#include <stdlib.h>
void main()
{
	char ch1,ch2,temp[100];
	int state=1;
	fstream infile("d:\\a.cpp",ios::in|ios::nocreate);
	if(!infile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}
	fstream outfile("d:\\b.cpp",ios::out);
	if(!outfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		return;
	}
	while(infile.get (ch1))
	{
		ch2 = infile.peek();                      //A
		if(state==1)
		{
			if(ch1=='/'&&ch2=='*')
			{
				infile.get();
				state=2;
			}
			else if(ch1=='/'&&ch2=='/')
				infile.get(temp,sizeof(temp));  //B
			else outfile.put(ch1);
		}
		else if(ch1=='*' && ch2=='/')
		{
			infile.get();
			state=1;
		}
	}
	infile.close();
	outfile.close();
}
