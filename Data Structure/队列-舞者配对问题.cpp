typedef struct
{
	char name[20];
	char sex; //�趨�Ա��־��F ��ΪŮ�ԣ���M ��Ϊ���� 
 } Person;
 typedef Person DataType;
 void DancePartner(Person dance[],int num)
{
	//����dancer�д���������ʿ��Ůʿ��num������������
	int i;
	Person p;
	CirQueue Mdancers,Fdancers;
	Init_Queue(&Mdancers); //��ʼ�����Զ���
	Init_Queue(&Fdancers); //��ʼ��Ů�Զ���
	for(i=0;i<num;i++)  //���ν����߰��Ա����
	{
		p=dancer[i];
		if (p.sex=='F')
		In_Queue(&Fdancers.p); //Ůʿ����Ů�Զ���
		else
		In_Queue(&Mdancers.p); //��ʿ�������Զ��� 
	 }
	 printf("����������У�\n\n");
	 while(!Empty_Queue(&Fdancers)&&!Empty_Queue(&Mdancers))
	 {
	    p=Out_Queue(&Fdancers); //��Ů�Գ������
		printf("%s",p.name) //�������Ů�Ե�����
		p=Out_Queue(&Mdancers); //�����Գ������
		printf("%s \n",p.name) //����������Ե�����
	  }
	if(!Empty_Queue(&Fdancers)) //���Ů�Զ���ʣ�������Ͷ�ͷŮʿ����
	{
		printf("\n ����%d��Ůʿ�ȴ���顣\n",Fancers.count);
		p=Front_Queue(&Fdancers); //ȡ��ͷ�ϵ�Ůʿ��Ϣ
		printf("%sŮʿ�ǽ�������һ��Ҫ�ϳ��ġ�\n",p.name); 
	 }
	 else if(!Empty_Queue(&Mdancers)) //������Զ���ʣ�������Ͷ�ͷ��ʿ����
	{
		printf("\n ����%d����ʿ�ȴ���顣\n",Mancers.count);
		p=Front_Queue(&Mdancers); //ȡ��ͷ�ϵ�Ůʿ��Ϣ
		printf("%s��ʿ�ǽ�������һ��Ҫ�ϳ��ġ�\n",p.name); 
	 }
 } 
