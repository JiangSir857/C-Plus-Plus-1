//����4.26�� ����ָ��ṹ�����ָ�������ʽṹ���顣
#include "iostream.h"
struct Student 
{
	char   name[16];
	char   sex;
	int    score;
};
void main()
{
	struct Student stu[3]={	{"zhan",'M',100},{"LiSi",'F',67},{"wang",'M',90}};
	struct Student  *p;
 	for(p=stu;p<stu+3;p++)
      cout<<p->name<<" "<<p->sex<<" "<<p->score<<endl;
}



