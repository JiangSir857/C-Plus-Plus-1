//����3.15�� ��1~100֮�䲻�ܱ�8����������
#include "iostream.h"
void main()
{
	int n;
    for(n = 1; n <= 100; n++)
{ 
	if(n%8 == 0) continue;
        cout<<"  "<<n;
    }
}
