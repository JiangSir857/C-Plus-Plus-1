//����4.23�����±귨��ָ�뷨��������Ԫ�ء�
#include "iostream.h"
void main()
{
	int data[6]={0,3,6,9,12,15};
	int *p = data, i;                      //pָ������data
   	for(i=0; i<6; i++)cout<<data[i]<<" ";  //�������±귨
   		cout<<endl;
   	for(i=0; i<6; i++)cout<<*( data+i)<<" ";//������ָ�뷨
		cout<<endl;
    for(i=0; i<6; i++)cout<<p[i]<<" ";      //ָ������±귨
		cout<<endl;
    for(i=0; i<6; i++)cout<< *(p+i)<<" ";   //ָ�����ָ�뷨
		cout<<endl;
}

