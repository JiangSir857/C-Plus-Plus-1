//��Ŀ2��ͼ����Ĺ���ϵͳ������
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "fstream.h"
#include "ex0.h"

Book::Book()
{
	strcpy(Title,"");
	BarCode = 0;
//	Next = NULL;
}

Book::Book(char *title,long code)
{
	strcpy(Title,title);
	BarCode = code;
    //	Next = NULL;
}

void Book::Show()
{
	cout<<"�鼮��\t"<<Title<<'\t'<<BarCode<<endl;
}

Item::Item(){}
/*Item::Item(Item &it)
{
	strcpy(Author,it.Author );
	strcpy(Title,it.Title );
	strcpy(IndexCode,it.IndexCode );
	BarCode = it.BarCode ;
	Type = it.Type;
}*/
Item::Item(char *author,char *title,char *index,int code ):Book(title,code) //���캯��
{
	strcpy(Author,author);
	strcpy(IndexCode,index);
	Type = 0;
}
//void Item::SetTitle(char tl[]){strcpy(Title,tl);}
void Item::SetAuthor(char tl[]){strcpy(Author,tl);}
void Item::SetIndexCode(char tl[]){strcpy(IndexCode,tl);}
//void Item::SetBarCode(long t){BarCode = t;}
void Item::Show()//��ʾ�����Ϣ
{
	cout<<"ͼ�飺\t"<<Title<<'\t'<<Author<<'\t'<<IndexCode<<'\t'<<BarCode<<endl;
}

Magazine::Magazine(char *title,int vol,LANG lang,int code):Book(title,code)
{
	Volume = vol;
	Lang = lang;
	Type = 1;
}
/*
Magazine::Magazine(Magazine &zz)
{
	strcpy(Title,zz.Title);
	Volume = zz.Volume;
	Lang = zz.Lang;
	BarCode = zz.BarCode;
	Type = 1;
}*/

void Magazine::Show()
{
	cout<<"��־:\t"<<Title<<'\t'<<"ȯ��:"<<Volume<<'\t';
	cout<<((Lang==1)?"Chinese":"English")<<BarCode<<endl;
}

Reader::Reader()
{
	strcpy(Name,"");
	strcpy(Position,"");
	itemCounter=0;
	zazCounter=0;
	Code = 0;
	//items = NULL;
}
Reader::Reader(char *name,char *posi,int code)
{
	strcpy(Name,name);
	strcpy(Position,posi);
	itemCounter=0;
	zazCounter=0;
	Code = code;
//	items = NULL;
}

/*Reader::Reader(Reader &rd)
{
	strcpy(Name,rd.Name);
	strcpy(Position,rd.Position);
	itemCounter=rd.itemCounter ;
	zazCounter=rd.zazCounter ;
	Code = rd.Code;
	for(int i=0;i<rd.itemCounter ;i++)
		items[i] = rd.items [i];
	for(int j=0;j<rd.zazCounter ;j++)
		mags[i] = rd.mags[i];
}*/
/*	//Item *p = rd.items,*q;
	Book *p = rd.items,*q;
	while(p)
	{
		q = new Item;
		*q = *p;
		if(Counter==0)items=q;
		p=p->Next;
		Counter++;
	}*/

void Reader::SetName( char t[]){strcpy(Name,t);}
void Reader::SetPosition(char t[]){strcpy(Position,t);}
void Reader::SetCode(long t){Code = t;}
void Reader::AddBook(Item it)		//����������
{
/*	Item *p;
	p = new Item();					//����һ���½��
	if(p){ *p = it; p->Next = items;//�����ͷ��itemsΪ��ͷָ��
		items = p; 
		Counter++;
	}*/
	if(itemCounter<10)
	{
		items[itemCounter++]=it;
	}
}
void Reader::AddBook(Magazine it)   //����������
{
	/*Magazine *p;
	p = new Magazine();			    //����һ���½��
	if(p){ *p = it; p->Next = items;//�����ͷ��itemsΪ��ͷָ��
		items = p; 
		Counter++;
	}*/
	if(zazCounter<10)
	{
		mags[zazCounter++]=it;
	}
}
void Reader::DelBook(Item it)          //ɾ����������Ϣ
{
	int i=0;
	do {
		if(items[i].GetBarCode() == it.GetBarCode())
		{
		    for(int j=i;j<itemCounter;j++)
				items[j] = items[j+1];
			itemCounter--;
			break;
		}
		i++;
	}while(i<itemCounter);
}
void Reader::DelBook(Magazine it)       //ɾ���������
{
	int i=0;
	do {
		if(mags[i].GetBarCode() == it.GetBarCode())
		{
		    for(int j=i;j<zazCounter;j++)
				mags[j] = mags[j+1];
			zazCounter--;
			break;
		}
		i++;
	}while(i<zazCounter);
}

/*void Reader::DelBook(Book it)       //ɾ���������
{
	Book *p = items, *q;
	while( p->GetBarCode() != it.GetBarCode() && p != NULL )
	{
		q = p;
		p = p->Next;
	}
	if( p->GetBarCode() == it.GetBarCode())
	{
		if( p == items )items = p->Next;
		else q->Next = p->Next;

		delete p;
		Counter--;
	}

}*/

int  Reader::ShowBooks()
{
	if(itemCounter==0&&zazCounter==0)
	{cout<<"��δ���飡";return 0;
	}
	for(int i=0;i<itemCounter;i++)items[i].Show();
	for(int j=0;j<zazCounter;j++)mags[j].Show();
	
	/*	Book *p = items;
	if(p==NULL){cout<<"��δ���飡";return 0;}
	cout<<"�������������:\n";
	while(p){
		p->Show();
		p=p->Next;
	}*/
	return 1;
}

CMain::CMain()
{
	itemNum=0;
	readNum=0;
	magNum =0;
}
/*void CMain::CreateBookItem(Item item[])
{	
	char s1[40],s2[20],s3[10],c;
	long code;
	int i=itemNum;
	do {
		cout<<"\t\t������Ŀ(����,����,�����,����),������\n";
		cout<<"\t\t  ������"; cin.getline (s1,40);
		cout<<"\t\t  ���ߣ�"; cin.getline (s2,40);
		cout<<"\t\t����ţ�"; cin.getline (s3,40);
		cout<<"\t\t  ���룺"; cin>>code;cin.get();
		item[i].SetTitle(s1);
		item[i].SetAuthor(s2);
		item[i].SetIndexCode(s3);
		item[i].SetBarCode(code);
		cout<<"\t\t������Y(y)es /N(n): ";
		cin>>c;
		cin.get();
		i++;
	}while(c=='Y'||c=='y'||(c!='n' &&c!='N'));
	itemNum = i;
}*/

void CMain::CreateReader()//�������߿�
{	
	char s1[40],s2[20],c;
	long code;
	int j=readNum;
	do {
		cout<<"\t\tע�������Ϣ(����   ְ��  ����֤��)\n";
		cout<<"\t\t    ������";cin.getline (s1,40);
		cout<<"\t\t    ְ��";cin.getline (s2,20);
		cout<<"\t\t����֤�ţ�";cin>>code;
		reader[j].SetName(s1);
		reader[j].SetPosition(s2);
		reader[j].SetCode(code);
		cout<<"\t\t������Y(y)es /N(n): ";
		cin>>c;
		cin.get();
		j++;
	}while(c=='Y'||c=='y');
	readNum = j;
}
/*
void CMain::Return(Reader reader[],Item item[])
{
	int code,barcode,i,j;
	Item it;
	Reader rd;
	cout<<"���飬���������֤��\n";
	cin>>code;
	cin.get ();
	for(i=0;i<readNum;i++)
	{
		if(code == reader[i].GetCode ())
		{
			cout<<"�������������:\n";
			reader[i].ShowBooks ();
			break;
		}
	}
	if(i==readNum){cout<<"û�д˺��룬������ѡ��\n";return;}
	cout<<"��ѡ������������\n";
	cin>>barcode;
	for(j=0;j<reader[i].Counter ;j++)
		if(reader[i].items[j].GetBarCode ()==barcode)
		{
			reader[i].DelBook (reader[i].items[j]);
			item[itemNum++] = reader[i].items[j];
			break;
		}
}*/
void CMain::CreateBookItem()
{	
	char s1[40],s2[20],s3[20],c;
	long code;
	int type,vol;
	int i=itemNum;
	int j= magNum;
	do {
		cout<<"������Ŀ,��ѡ��1: ͼ��\t 2����־\n";
		cin>>type;
		cin.get();
		switch(type){
		case 1:
			cout<<"\t��������Ŀ��Ϣ(����,����,�����,����)\n";
			cout<<"\t  ������"; cin.getline (s1,40);
			cout<<"\t  ���ߣ�"; cin.getline (s2,20);
			cout<<"\t����ţ�"; cin.getline (s3,20);
			cout<<"\t  ���룺"; cin>>code;cin.get();
			item[i].SetTitle(s1);
			item[i].SetAuthor(s2);
			item[i].SetIndexCode(s3);
			item[i].SetBarCode(code);
			item[i].SetType (0);
			i++;
			break;
		case 2:
			cout<<"\t��������־��Ϣ(��־��,����,ȯ��,����)\n";
			cout<<"\t ��־����"; cin.getline (s1,40);
			cout<<"\t ����(1���ģ�2Ӣ�ģ���";cin>>type;
			cout<<"\t ȯ�ţ�";  cin>>vol;
			cout<<"\t ���룺"; cin>>code;cin.get();
			mag[j].SetTitle(s1);
			mag[j].SetLang(type);
			mag[j].SetVolume (vol);
			mag[j].SetBarCode(code);
			mag[j].SetType(1);
			j++;
			break;
		default: 
			cout<<"�������������ѡ��\n";
			continue;
		}
		cout<<"\t\t������Y(y)es /N(n): ";
		cin>>c;
		cin.get();
	}while(c=='Y'||c=='y');
	itemNum = i;
	magNum = j;
}
//����ͼ����־
void CMain::Borrow()
{
	int code,barcode,type,i,j;
	Item it;
	Magazine zz;
	if(itemNum == 0 && magNum == 0 ){cout<<"û��ͼ��ɽ裡";return;	}
	cout<<"��������߽���֤��: ";
	cin>>code;	cin.get();
	for( i=0; i<readNum; i++)
	{
		if( code == reader[i].GetCode ())break;
	}
	if( i == readNum )
	{
		cout<<"\t����֤�����ڣ�";
		return;
	}

	do {
		cout<<"���飬��ѡ��1: ��\t 2:��־\n";
		cin>>type; cin.get();
		switch(type){
		case 1:
			cout<<"����\t����\t�����\t����\n";
			for(j=0;j<itemNum;j++)//������
				item[j].Show ();
			cout<<"���飬��ѡ��ͼ������: ";
			cin>>barcode;
			for(j=0;j<itemNum;j++)//ƥ��
			if(item[j].GetBarCode ()==barcode)
			{
				it = item[j];
				reader[i].AddBook (it);
				for(int k=j;k<itemNum;k++)//�ӿɽ�������ɾ���������
					item[k] = item[k+1];
				itemNum--;
				break;
			}
			break;
		case 2:
			cout<<"��־��\t ȯ��\t����\t����\n";
			for(j=0;j<magNum;j++)		 //������־
				mag[j].Show ();
			cout<<"���飬��ѡ����־����: ";
			cin>>barcode;
			for(j=0;j<magNum;j++)//ƥ��
			if(mag[j].GetBarCode ()==barcode)
			{
				zz = mag[j];
				reader[i].AddBook (zz);
				for(int k=j;k<magNum;k++)//�ӿɽ�����־��ɾ���������־
					mag[k] = mag[k+1];
				magNum--;
				break;
			}
			break;
		default:	cout<<"�������������ѡ��\n";	continue;
		}
	}while(type !=1&&type !=2);
}
//����
void CMain::Return()
{   //Book  *p;
	int i,j;//,type;
	long barcode,code;
//	Item  *it;
//	Magazine *ma;
//	Reader rd;
	cout<<"���飬���������֤��\n";
	cin>>code;
	cin.get ();
	for(i=0;i<readNum;i++)  //��֤����֤
	{
		if( code == reader[i].GetCode() )
		{
			if(reader[i].ShowBooks()==0)return;//��û�н���
			break;
		}
	}
	if(i==readNum){cout<<"û�д˺��룬������ѡ��\n";return;}
//	cout<<"���������1(ͼ�飩��2����־����";
	//cin>>type;
	cout<<"��ѡ������������\n";
	cin>>barcode;
	//p = reader[i].items;
	for(j=0;j<reader[i].itemCounter ;j++ )
      	if(reader[i].items[j].GetBarCode ()==barcode)
		{   item[itemNum++] = reader[i].items[j];  //��ӵ������
			reader[i].DelBook(reader[i].items[j]);//�ӽ��鵥��ɾ��
			return;
		}
	for(j=0;j<reader[i].zazCounter ;j++ )
	   if(reader[i].mags[j].GetBarCode ()==barcode)
	   {    mag[magNum++] = reader[i].mags[j];//��ӵ���־����
			reader[i].DelBook (reader[i].mags[j]);//�ӽ��鵥��ɾ��
			return;
	   }
}
/*
void CMain::Borrow(Reader reader[],Item item[])
{
	int code,barcode,i,j;
	Item it;
	cout<<"���������֤��: ";
	cin>>code;
	cin.get();
	for(i=0;i<readNum;i++)
	{
		if(code == reader[i].GetCode ())break;
	}
	if(i==readNum)
	{
		cout<<"����֤�����ڣ�";
		return;
	}
	cout<<"����\t����\t�����\t����\n";
	for(j=0;j<itemNum;j++)//������
		item[j].Show ();
	cout<<"���飬��ѡ���鱾����: ";
	cin>>barcode;
	for(j=0;j<itemNum;j++)//ƥ��
		if(item[j].GetBarCode ()==barcode)
		{
			it = item[j];
			reader[i].AddBook (it);
			for(int k=j;k<itemNum;k++)//�ӿɽ�������ɾ���������
				item[k] = item[k+1];
			itemNum--;
			break;
		}
}*/
void CMain::Require()//�����ѯ
{
	int code,i;
	cout<<"��ѯ�����������֤��: ";
	cin>>code;
	for(i=0;i<readNum;i++)
	{
		if(code == reader[i].GetCode ())
		{
			cout<<"�������������\n";
			if(reader[i].ShowBooks()==0)return;
			break;
		}
	}
	if(i==readNum)cout<<"û�д˺��룬������ѡ��\n";
	cin.get();
}
void CMain::fnDataSave(char *fname)
{
	Item kk;
	Magazine zz;
	Reader qq;
	fstream  file(fname,ios::out|ios::binary);
	if(!file)
	{
		cout<<"��"<<fname<<"�ļ�ʧ�ܣ�\n";cin.get ();
		return;
	}
	file.write((char *)&itemNum,sizeof(int));     //����ͼ�����
	file.write((char *)&magNum,sizeof(int));      //������־����
	file.write((char *)&readNum,sizeof(int));	  //�����������
	file.write ((char *)item,sizeof(kk)*itemNum);
	file.write ((char *)mag,sizeof(zz)*magNum);
	file.write ((char *)reader,sizeof(qq)*readNum);
	file.close ();
}
void CMain::fnDataLoad(char *fname)
{
	Item kk; 
	Magazine zz;
	Reader qq;
	fstream  file;
	file.open (fname,ios::in|ios::binary);
	if(!file)
	{
		cout<<"��"<<fname<<"�ļ�ʧ�ܣ�\n";cin.get ();
		return;
	}
	file.read((char *)&itemNum,sizeof(int));       //����ͼ�����
	file.read((char *)&magNum,sizeof(int));        //������־��
	file.read((char *)&readNum,sizeof(int));	   //���ض�������

	file.read((char *)item,sizeof(kk)*itemNum);
	file.read((char *)mag,sizeof(zz)*magNum);
	file.read((char *)reader,sizeof(qq)*readNum);
	file.close ();
}

void CMain::fnShowBook()			//��ʾ����鼮����־��Ϣ
{ 
	cout<<"���ͼ�顢��־���£�\n";
	for(int i=0;i<itemNum;i++)
		item[i].Show ();
	for(int j=0;j<magNum;j++)
		mag[j].Show ();
}

void CMain::fnShowReader()			//��ʾ�Ǽ�ע��Ķ�����Ϣ
{
	cout<<"��ע������嵥��\n";
	for(int i=0;i<readNum;i++)
		reader[i].ShowReader ();
}
void CMain::ShowMenu()
{
	system("cls");
    cout<<"\n";
    cout<<"\t$***********ͼ����Ĺ���ϵͳ*********$\n";
    cout<<"\t$       0. �˳�                      $\n";
    cout<<"\t$       1. �������                  $\n";
    cout<<"\t$       2. ���ߵǼ�                  $\n";
    cout<<"\t$       3. ����                      $\n";
    cout<<"\t$       4. ����                      $\n";
    cout<<"\t$       5. �����ѯ                  $\n";
    cout<<"\t$       6. ����ѯ                  $\n";
    cout<<"\t$       7. �����嵥                  $\n";
    cout<<"\t$************************************$\n";
    cout<<"\t\t��ѡ�����Ĳ���(0-7):";
}
void main()			
{ 
    int n=1;
	CMain  a;
    do 
	{
		a.ShowMenu();  //��ʾ�˵�����
		a.fnDataLoad("D:\\libery.dat");
		cin>>n;	//����ѡ���ܵı��
		cin.get ();
		system("cls");

		switch(n)
		{
		case 1: a.CreateBookItem();break;
		case 2: a.CreateReader(); break;
		case 3: a.Borrow();	break;
		case 4:	a.Return();break; 
		case 5: a.Require();break;
		case 6: a.fnShowBook();break;
		case 7: a.fnShowReader();break;
		default: break;
		}
		a.fnDataSave("D:\\libery.dat");
		if(n){	cout<<"\n\t\t��������������˵�";cin.get();	}
	}while(n);
	cout<<"\n\n\n\n\n\t\tлл����ʹ�ã�\n\t\t";
}

       