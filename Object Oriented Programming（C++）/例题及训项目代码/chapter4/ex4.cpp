//【例4.4】 用初始化方法，把某班前10名学生《C++程序设计》课程的考试成绩存储在数组中。再从键盘输入一个考分，查找成绩是否在数组中，如果是的话，它是第几名学生的成绩。
#include "iostream.h"
void main()
{   //定义具有10个元素的数组a，并初始化
	float  score, a[]={98,97,91,89.5,88,85,84.5,80,77.5,73};
    int  i;
	cout<<"请输入要查找的成绩： ";
	cin>>score;
	for( i=0;i<10;i++)
	{ 	
		if(a[i] == score)
		{
			cout<<"该成绩是第 "<<i+1<<" 名学生的。\n";
			break;
		}
	}
}
