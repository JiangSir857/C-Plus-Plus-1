//����5.23�����������ĺ궨���Ӧ�á�
#include "iostream.h"
#define  PI  3.1415926
void main( )
{   
	float  r, circle, area;
    cout<<"������԰�İ뾭: ";
    cin>>r;
	circle = 2 * PI * r;//Ԥ�����Ϊ:circle = 2 * 3.1415926 * r;
    area   = PI * r * r;//Ԥ�����Ϊ:area   = 3.1415926 * r * r;
    cout<<"԰�ܳ� = "<< circle<<" ��� ="<<area<<endl;
}
