#include<iostream>
#include<string.h>
using namespace std;
struct candidate
{
	char name[16]; //存放候选人姓名 
	int count; //存放候选人得票数 
}; 
int main()
{
	int i,j;
	char name[16];
	struct candidate leader[4]={{"lisi",0},{"WangWu",0},{"ZhangSan",0},{"ShenZuo",0}};
	cout<<"开始唱票\n";
	for(i=1;i<=10;i++) //假设共10张选票
	{
		cout<<"第"<<i<<"张选票是：";
		cin>>name; //唱票：输入候选人姓名
		for(j=0;j<4;j++) //每唱一票，相应候选人票数 + 1
		if(!strcmp(name,leader[j].name))
		leader[j].count++; 
	}
	cout<<"投票结构如下："<<endl;
	for(j=0;j<4;j++) //输出投票结果
	cout<<leader[j].name<<"得票数="<<leader[j].count<<endl;
}
