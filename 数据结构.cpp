/********************************/
/* ���ز˵�������Գ��� main2.c */
/********************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct //����ͨѶ¼�������
{
	char num [5]; //���
	char name [9]; //����
	char sex [3]; //�Ա�
	char phone [13]; //�绰
	char addr [3]; //��ַ
 } DataType;
typedef struct node //����������� 
 { DataType data; //������������� 
  struct node * next; //�������ָ���� 
  } ListNode;
  typedef ListNode * LinkList;
  LinkList head;
  ListNode *p;
  //��������
  int menu_select ();
  LinkList CreateList (void);
  void InsertNode (LinkList head,ListNode *p);
  ListNode *ListFind (LinkList head);
  void DelNode (LinkList head);
  void PrintList (LinkList head);
  //����������
  void main ()
  {
  	for (;;)
  	{
  		switch (menu_select ())
  		{
  			case 1:
  				printf("********************\n");
  				printf("* ͨѶ¼����Ľ��� *\n");
  				printf("********************\n");
  				head=CreateList();
  				break;
  			case 2:
  				printf("********************\n");
				printf("* ͨѶ¼���Ĳ��� *\n");
				printf("********************\n");
				printf("��ţ�4��������8���Ա� �绰��11����ַ��31�� \n");
				printf("********************\n");
				p= (ListNode *) mailloc(sizeof(ListNode));
				scanf("%s%s%s%s%s",p->data.num,p->data.name,p->data.sex,p->data.phone,p->data.addr);
				InsertNode (head.p);
				break;
			case 3:
				printf("********************\n");
				printf(" *ͨѶ¼���Ĳ�ѯ *\n");
				printf("********************\n");
				p=ListFind (head);
				if (p! = NULL) 
				{
					printf("��� ���� �Ա� ��ϵ�绰 ��ַ \n");
					printf("-----------------------------\n");
					printf("%s%s%s%s%s",p->data.num,p->data.name,p->data.sex,p->data.phone,p->data.addr);
					printf("-----------------------------\n");
				}
				else
				    printf("û�в�ѯ����ѯ��ͨѶ�ߣ�\n");
				break;
			case 4:
				printf("********************\n");
				printf("* ͨѶ�߽���ɾ�� *\n");
				printf("********************\n");
				DelNode (head);
				break;
			case 5:
				printf("********************\n");
				printf("* ͨѶ¼�������� *\n");
				pintnf("********************\n");
				PrintList (head);
				break;
			case 0:
				printf("\t �˳�����ϵͳ \n")
				  }
	  }
   } 
