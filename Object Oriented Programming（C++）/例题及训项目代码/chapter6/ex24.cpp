//����6.24�� ʹ�ö�̬���顣
#include <iostream.h>
void main()
{  
	int *p,n,i;
	cout<<"����������Ԫ�ظ�����";
	cin>>n;
	p = new int[n]; 
	cout<<"������"<<n<<"������Ԫ��ֵ��";
	for(i=0;i<n;i++)cin>>p[i];
	for(i=0;i<n;i++)cout<<*(p+i)<<"\t";
	cout<<endl;
	delete []p;
}
