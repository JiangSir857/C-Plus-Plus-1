/*
1����ӡ8����������Ρ�
  ���ҶԳƣ���1��ʼ������Ȼ���С��
  ��n�����ָ���Ϊn����
  ÿ�����ֵ�����һ�е�������������֮�͡�
*/
#include "stdio.h"
#define  N    8
#define  M    8
int  a[N][M]={0};
void main()
{
	int i,j;
    
	for(i=0;i<N;i++)
		a[i][0] = 1;
    for(i=1;i<N;i++)
		for(j=1;j<i+1;j++)
			a[i][j] = a[i-1][j-1]+a[i-1][j];
       for(i=0;i<N;i++)
	   {   
		   for(j=0;j<M-i;j++)
			   printf("  ");
		   for(j=0;j<=i;j++)
				printf("%4d",a[i][j]);
		   printf("\n");
	   }
}