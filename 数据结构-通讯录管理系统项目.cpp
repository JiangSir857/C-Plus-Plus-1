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
				printf("\t �˳�����ϵͳ \n");
				return; 
			}
	    }
   } 
   
/****************/
/* ������ز˵� */
/****************/
int menu_select()
{
	int sn;
	printf("��ӭ����ͨѶ¼�������\n");
	printf("1.ͨѶ¼����Ľ��� \n");
	printf("2.ͨѶ¼���Ĳ��� \n");
	printf("3.ͨѶ¼���Ĳ�ѯ \n");
	printf("4.ͨѶ¼����ɾ�� \n");
	printf("5.ͨѶ¼�������� \n");
	printf("0.�˳�����ϵͳ \n");
	printf("�������ּ�0 ~ 5��ѡ��˵���");
	for(;;)
	{
		scanf("%d",&sn);
		if (sn<0||sn>5)
		    printf("\n\t�������ֻ��������0~5���ּ���\n");
		else
		    break;
	}
	return sn;
 } 

/************************/
/*��β�巨����ͨѶ¼����*/
/************************/
LinkList CreatList (void)
{
	LinkList head=(ListNode *) malloc (sizeof(ListNode)); //��̬����ͷ���
	ListNode *p,*rear;
	int flag=0; //����¼�������
	rear=head; //βָ���ʼ��ָ��ͷ���
	while (flag==0)
	{
		//ֻҪ¼�벻Ϊ0����ͣ�ز���β�巨��������
		p=(ListNode *) malloc (sizeof(ListNode));
		printf("��� ���� �Ա� ��ϵ�绰 ��ַ \n");
		printf("-----------------------------\n");
		scanf("%s%s%s%s%s",p->data.num,p->data.name,p->data.sex,p->data.phone,p->data.addr);
		rear->next=p; //�½������Ϊβ���ĺ��
		rear=p; //β����ƶ����½����λ��
		printf("���������𣿣�1/0����");
		scanf("%d",&flag); //����һ����־λ��flag
	 } 
	 rear->next=NULL; ///������������һ������ָ������ΪNULL
	 return head; //���������ͷָ�� 
 } 
/********************/
/* ͨѶ¼���Ĳ��� */
/********************/
void InsertNode(LinkList head,ListNode *p)
{
	ListNode *p1,*p2;
	p1=head;
	p2=p1->next;
	while (p2!=NULL&&strcmp(p2->data.num,p->data.num)<0)
	{
		p1=p2; //p1ָ��շ��ʹ��Ľ��
		p2=p1->next; //p2ָ������һ����� 
	 } 
	 p1->next=p; //����p��ָ��Ľ��
	 p->next=p2; //���ӱ���ʣ�ಿ�� 
 } 
