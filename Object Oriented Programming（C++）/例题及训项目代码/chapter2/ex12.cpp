//����2.12���������³����ִ�н����
#include <iostream.h>
void main()
{
	unsigned int a=0x1234;//0001,0010,0011,0100=>1234(ǰ��16λ��Ϊ0)
	unsigned int b=a<<2;  //0100,1000,1101,0000=>48d0(ǰ��16λ��Ϊ0)	
	unsigned int c=a>>2;  //0000,0100,1000,1101=>048d(ǰ��16λ��Ϊ0)
	unsigned int d=b&c;   //0000,0000,1000,0000=>0080(ǰ��16λ��Ϊ0)
	unsigned int e=b|c;   //0100,1100,1101,1101=>4cdd(ǰ��16λ��Ϊ0)
	unsigned int f=b^c;   //0100,1100,0101,1101=>4c5d(ǰ��16λ��Ϊ0)
	unsigned int g=~a;    //1110,1101,1100,1011=>edcb(ǰ��16λ��Ϊ0)
	cout<<"a="<<hex<<a<<endl;
	cout<<"b="<<hex<<b<<endl;
	cout<<"c="<<hex<<c<<endl;
	cout<<"d="<<hex<<d<<endl;
	cout<<"e="<<hex<<e<<endl;
	cout<<"f="<<hex<<f<<endl;
	cout<<"g="<<hex<<g<<endl;
}
