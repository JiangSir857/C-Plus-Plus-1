//����5.6�� ����n�Ľ׳�n!��
#include "iostream.h"
long fact(int n)                //�ݹ麯�� 
{
     if(n<=1) return 1;           //��ֹ���� 
     return (fact(n-1) * n);    //�ݹ���� 
}
void main()
{   int num;
    cout<<"\n������һ��������(С��12): "<<endl;
    cin>>num;
    cout<<num<<"! = "<<fact(num);
}
