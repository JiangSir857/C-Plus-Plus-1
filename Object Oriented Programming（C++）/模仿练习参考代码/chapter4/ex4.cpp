// 2����10�������е���Сֵ��
#include "iostream.h"
void main()
{
	int  a[10]={87,2,3,4,5,6,12,-9,99,0};
    int i,min=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]<min)min=a[i];
	}
    cout<<"��Сֵ="<<min<<"\n";
}
