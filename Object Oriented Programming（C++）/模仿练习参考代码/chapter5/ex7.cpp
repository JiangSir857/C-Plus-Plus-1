/*
1���������в���һ������Ҫ���ú���ʵ�֡�
2���������У���ָ��λ�ò���һ��������Ҫ���ú���ʵ�֡�
*/
#include <iostream.h>
//�������в���һ������Ҫ���ú���ʵ��
int fnFind(int array[ ],int n,int x)
{
	   int i;
	   
	   for(i=0;i<n;i++)
		if(x == array[i])return 1;
       return 0;
}
//�������У���ָ��λ�ò���һ������
void fnInsert(int a[],int n,int index,int x)
{
    int i;
	if(index >n || index <0)
	{
		cout<<"����λ�ô��󣡣�"<<endl;
		return ;
	}
	for(i=n;i>index;i--)
		a[i]=a[i-1];
	a[index] = x;
}

void main()
{
	int a[8]={1,2,3,4,5,6,7};
	int x=89;
	fnInsert(a,7,3,x);
	for(int i=0;i<8;i++)
		cout<<a[i]<<" ";
	if(fnFind(a,8,5)==1)
		 cout<<"�ҵ���"<<endl;
	else cout<<"û���ҵ���"<<endl; 
}