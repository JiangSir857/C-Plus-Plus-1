#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
//#include  "fstream.h"

#include "ex0.h"
Item::Item(){}					//���캯��
/*Item::Item(Item &it)
{
	strcpy(Author,it.Author );
	strcpy(Title,it.Title );
	strcpy(IndexCode,it.IndexCode );
	BarCode = it.BarCode ;
}*/

void Item::SetTitle(char tl[]){strcpy(Title,tl);}
void Item::SetAuthor(char tl[]){strcpy(Author,tl);}
void Item::SetIndexCode(char tl[]){strcpy(IndexCode,tl);}
void Item::SetBarCode(long t){BarCode = t;}
void Item::Show()				//��ʾ�����Ϣ
{
	cout<<Title<<'\t'<<Author<<'\t'<<IndexCode<<'\t'<<BarCode<<endl;
}

Reader::Reader(){itemCounter=0;}
void Reader::SetName( char t[]){strcpy(Name,t);}
void Reader::SetPosition(char t[]){strcpy(Position,t);}
void Reader::SetCode(long t){Code = t;}
void Reader::AddBook(Item it)	//��������鼮
{
	if(itemCounter<10)
		items[itemCounter++]=it;
}

void Reader::DelBook(Item it)  //���飬�������鼮�嵥�����
{
	if(itemCounter>0)
	{   
		int i=0;
	do {
		if(items[i].GetBarCode()==it.GetBarCode())
		{
		   for(int j=i;j<itemCounter;j++)
			   items[j]=items[j+1];	
			itemCounter--;
			break;
		}
		i++;
	}while(i<itemCounter);
}
}
void Reader::ShowBooks()
{
	for(int i=0;i<itemCounter;i++)
		items[i].Show();
	cin.get();
}

CMain::CMain()						//���캯��
{
	itemNum=0;
	readNum=0;
}
void CMain::CreateBookItem()		//������Ŀ
{	
	char s1[40],s2[20],s3[10],c;
	long code;
	int i=itemNum;
	do {
		cout<<"\t\t������Ŀ(����,����,�����,����)\n";
		cout<<"\t\t  ������"; cin.getline (s1,40);
		cout<<"\t\t  ���ߣ�"; cin.getline (s2,40);
		cout<<"\t\t����ţ�"; cin.getline (s3,40);
		cout<<"\t\t  ���룺"; cin>>code;cin.get();
		item[i].SetTitle(s1);
		item[i].SetAuthor(s2);
		item[i].SetIndexCode(s3);
		item[i].SetBarCode(code);
		cout<<"\t\t������Y(y)es /N(n)o: ";
		cin>>c;
		cin.get();
		i++;
	}while(c=='Y'||c=='y');
	itemNum = i;
}

void CMain::CreateReader()				//�������߿�
{	
	char s1[40],s2[20],c;
	long code;
	int j=readNum;
	do {
		cout<<"\t\t����������Ϣ(����   ְ��  ����֤��)\n";
		cout<<"\t\t    ������";cin.getline (s1,40);
		cout<<"\t\t    ְ��";cin.getline (s2,20);
		cout<<"\t\t����֤�ţ�";cin>>code;
		reader[j].SetName(s1);
		reader[j].SetPosition(s2);
		reader[j].SetCode(code);
		cout<<"\t\t������Y(y)es /N(n)o: ";
		cin>>c;
		cin.get();
		j++;
	}while(c=='Y'||c=='y');
	readNum = j;
}

void CMain::Return()				//����
{
	int code,barcode,i,j;
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
	for(j=0;j<reader[i].itemCounter ;j++)
		if(reader[i].items[j].GetBarCode ()==barcode)
		{
			reader[i].DelBook (reader[i].items[j]);
			item[itemNum++] = reader[i].items[j];
			break;
		}
}

void CMain::Borrow()				//����
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
}
void CMain::Require()				//��ѯ�����嵥
{
	int code,i;
	cout<<"��ѯ�����������֤��: ";
	cin>>code;
	for(i=0;i<readNum;i++)
	{
		if(code == reader[i].GetCode ())
		{
			cout<<"�������������\n";
			reader[i].ShowBooks ();
			break;
		}
	}
	if(i==readNum)
	{
		cout<<"û�д˽���֤�ţ�������ѡ��\n";
		cin.get();
	}
}
/*void CMain::fnDataSave(char *fname)
{
	Item kk;
	Reader qq;
	fstream  file(fname,ios::out|ios::binary);
	if(!file)
	{
		cout<<"��"<<fname<<"�ļ�ʧ�ܣ�\n";cin.get ();
		return;
	}
	file.write((char *)&itemNum,sizeof(int));     //����ͼ�����
	file.write((char *)&readNum,sizeof(int));		//�����������
	file.write ((char *)item,sizeof(kk)*itemNum);
	file.write ((char *)reader,sizeof(qq)*readNum);
	file.close ();
}
void CMain::fnDataLoad(char *fname)
{
	Item kk; 
	Reader qq;
	fstream  file;
	file.open (fname,ios::in|ios::binary);
	if(!file)
	{
		cout<<"��"<<fname<<"�ļ�ʧ�ܣ�\n";cin.get ();
		return;
	}
	file.read((char *)&itemNum,sizeof(int));       //����ͼ�����
	file.read((char *)&readNum,sizeof(int));		//�����������
	file.read((char *)item,sizeof(kk)*itemNum);
	file.read((char *)reader,sizeof(qq)*readNum);
	file.close ();
}*/
void CMain::ShowMenu()
{
	system("cls");
    cout<<"\n";
    cout<<"\t$************ͼ����Ĺ���ϵͳ********$\n";
    cout<<"\t$       0. �˳�                      $\n";
    cout<<"\t$       1. �������                  $\n";
    cout<<"\t$       2. ���ߵǼ�                  $\n";
    cout<<"\t$       3. ����                      $\n";
    cout<<"\t$       4. ����                      $\n";
    cout<<"\t$       5. �����ѯ                  $\n";
    cout<<"\t$************************************$\n";
    cout<<"\t\t��ѡ�����Ĳ���(0-5):";
}
void main()			
{ 
    int n=1;
	CMain  a;
    do 
	{
		a.ShowMenu();   //��ʾ�˵�����
		cin>>n;			//����ѡ���ܵı��
		cin.get ();
		system("cls");
		switch(n)
		{
		case 1: a.CreateBookItem();break;
		case 2: a.CreateReader(); break;
		case 3: a.Borrow();	break;
		case 4:	a.Return();break; 
		case 5: a.Require();break;
	//	case 6: a.fnDataLoad("D:\\a.dat");break;
	//	case 7: a.fnDataSave("D:\\a.dat");break;
		default: break;
		}
		if(n){ cout<<"\n\t\t��������������˵�";cin.get ();	}
	}while(n);
	cout<<"\n\n\t\tлл����ʹ�ã�\n\t\t";
}

       