//����3.7����do-while��䣬����1+2+��+100��
#include "iostream.h"
void main( )
{
	int Sum,i;
	Sum = 0; i = 1;
	do{
		Sum += i;
		i++;
	}while(i<=100);
	cout<<"Sum is "<< Sum<<endl;
}
