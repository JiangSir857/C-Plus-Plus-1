//����3.16�� ��1~36������֮�͡�
#include "iostream.h"
void main( )
 	{
int  i=1,sum=0;
  	loop: 
		sum+=i;
        i++;
        if(i <= 36)goto  loop;
    	cout<<sum<<endl;
}
