//����4.18�� ��ʼ���ṹ���飬�����ѧ����Ϣ��
#include "iostream.h"
struct Student
{ 
	long   no;			//ѧ��
    char   name[16];	     //����
	int    age;         	//����
	int    score;      	//�ɼ�
};
void main()
{    struct Student stu[] ={ {2013001,"ZhanSa", 17,80},
                            {2013002,"WangWu", 19,85},
                            {2013003,"LiShin", 16,75},
                            {2013004,"LaoQin", 20,60} };
   	for(int i = 0; i<4; i++)
     {  
        cout<<"��"<<i+1<<"��ѧ����";
        cout<<"ѧ��:"<<stu[i].no;
        cout<<"����:"<<stu[i].name;
        cout<<"����:"<<stu[i].age;
        cout<<"�ɼ�:"<<stu[i].score<<endl;
     }
}
