//����5.20��Ӧ��math.h�ж����sin()��������0.05����/4֮������Һ���ֵ��
#include  "iostream.h"
#include  "math.h"
void main()
{
	double  pi=3.14,x=0.05;
	int i = 1;
	while(x<pi/4)
	{	cout<<"sin("<<x<<")="<<sin(x)<<"\t";
		x = x + 0.1;				//����ȡ0.1
		i++;
		if(i%2)cout<<endl;			//2����һ��
	}
}

