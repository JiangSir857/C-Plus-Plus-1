//�޸ĳ�������ٷ����"���ӳ�����"���⡣
#include "iostream.h"
int fn(int init,int n)
{
     int s=init;
	 while(n)
	 {
		 s = 5*s+1;
		 n--;
	 }
	 return s;
}

void main()
{    
 	cout<<"������"<<fn(6,4)<<"�����ӡ�"<<endl;
}
