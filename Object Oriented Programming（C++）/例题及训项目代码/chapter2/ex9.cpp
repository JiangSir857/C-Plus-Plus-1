//����2.9�� �߼����ʽ��
#include <iostream.h>
void main()
{
	int  x = 2, y = 5, z;
	z = (x>0)||(y<8);
	cout<<"\n z= "<<z; //z=1��ʾtrue
	z = (x==0)&&(y<8); 
	cout<<"\n z= "<<z; //z=0��ʾfalse
	z = !(x==2);  
	cout<<"\n z= "<<z; //z=0��ʾfalse
}

