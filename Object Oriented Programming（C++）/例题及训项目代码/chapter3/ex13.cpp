//����3.13�� ���ڵ�ʽxyz+yzz = 532�������x��y��z��ֵ������xyz��yzz��ʾ����3λ������
#include "iostream.h"
void  main()
 {
		int x,y,z, data;
		for(x=1;x<10;x++)
		for(y=1;y<10;y++)
			for(z=0;z<10;z++)
			{
				data = 100*x+10*y+z+ 100*y+10*z+z;
				if( data == 532)
					cout<<"x = "<<x<<",y = "<<y<<",z = "<<z<<endl;
			}
 }
