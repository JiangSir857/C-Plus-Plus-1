//��Ŀ1���������е���Сֵ
#include <iostream.h>
int fnMin(int array[ ],int n)
{
	   int m,i;
	   m = array[0];
	   for(i=1;i<n;i++)
		if(m>array[i])m = array[i];
	   return m;
}
void main()
{
    int a[20],m,n,i;
    cout<<"������Ԫ�ظ���: ";
    cin>>n;
    cout<<"����Ԫ��: ";
    for(i=0;i<n;i++)
       cin>>a[i];
    m = fnMin(a,n);             			//���ú�������С��
    cout<<"��С��="<<m<<endl;
} 
