//��Ŀ2��Ȥζ�ŵ���ѧ����
#include  "iostream.h"

void main()
{ 
	int  i;
  	long  f,f1 = 1L,f2 = 1L;
	cout<<f1<<"\t"<<f2<<"\t";
	for(i=3;i<=18;i++)
	{ 
		f = f1+f2;                  //��ǰ�����f1,  f2��õ�ǰ��f
		cout<<f<<"\t";              //���f
	    if(i%6 == 0)cout<<"\n";		//ÿ�������6��fibonacci��
	    f1 = f2;	
		f2 = f;                     //�޸�f1��f2��ֵ�����´�ѭ������
	}
}
