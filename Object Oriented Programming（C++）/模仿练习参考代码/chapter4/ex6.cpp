//2. ���岢��ʼ��һ��3��4�еĶ�ά���飬Ȼ���������ֵ�����	��
#include <iostream.h>
void main()
{
	int a[3][4]= {{11,12,13,14},{21,212,23,24},{31,32,33,34}},i,j,max;

	max = a[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(max<a[i][j])max=a[i][j];
	cout<<"max="<<max<<endl;
}