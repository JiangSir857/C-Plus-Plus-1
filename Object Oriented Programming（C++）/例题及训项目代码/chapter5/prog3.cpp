//��Ŀ3�����ӳ�����
#include "iostream.h"
int fn(int n,int sum)
{
     if((sum-1)%5 != 0)return 0;
     if(n==1)return 1;
     else    return fn(n-1,4*(sum-1)/5);
}
void main()
{    
 	int sum = 0;
     for( sum=100;sum<10000;sum++)
        if( fn(5,sum) == 1)break;
     cout<<"������"<<sum<<"�����ӡ�"<<endl;
}
