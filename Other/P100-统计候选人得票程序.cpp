#include<iostream>
#include<string.h>
using namespace std;
struct candidate
{
	char name[16]; //��ź�ѡ������ 
	int count; //��ź�ѡ�˵�Ʊ�� 
}; 
int main()
{
	int i,j;
	char name[16];
	struct candidate leader[4]={{"lisi",0},{"WangWu",0},{"ZhangSan",0},{"ShenZuo",0}};
	cout<<"��ʼ��Ʊ\n";
	for(i=1;i<=10;i++) //���蹲10��ѡƱ
	{
		cout<<"��"<<i<<"��ѡƱ�ǣ�";
		cin>>name; //��Ʊ�������ѡ������
		for(j=0;j<4;j++) //ÿ��һƱ����Ӧ��ѡ��Ʊ�� + 1
		if(!strcmp(name,leader[j].name))
		leader[j].count++; 
	}
	cout<<"ͶƱ�ṹ���£�"<<endl;
	for(j=0;j<4;j++) //���ͶƱ���
	cout<<leader[j].name<<"��Ʊ��="<<leader[j].count<<endl;
}
