#include<stdio.h>
#include<string.h>
#define MaxStrSize 256
typedef struct{
	char ch[MaxStrSize];
	int length;
}SString; /*����˳������*/
/*ʵ�ִ��ĸ�ֵ���Ƚϡ����ӡ������ɾ���Ȳ��������ڴ˻�������ɴ���ģʽƥ�䣬posΪ�±�*/
void InitString(SString *s,char a[]) /*����ֵ*/
{
	int i,j;
	for(j=0;a[j]!='\0';j++);
	for(i=0;i<j;i++)
	s->ch[i]=a[i];
	s->length=strlen(a);
 } 
int StrLength(SString s) /*�󴮳�*/
{
	return s.length;
 } 
int StrCompare(SString s,SString t) /*���Ƚ�*/
{
	int i;
	for(i=0;i<s.length&&i<t.length;i++)
	if(s.ch[i]!=t.ch[i]) return s.ch[i] -t.ch[i];
	return s.length-t.length; 
 } 
 void SubString(SString *Sub,SString s,int pos,int len) /*��ȡ��*/
{
	int i;
	for(i=0;i<len;i++)
	sub->ch[i]=s.ch[pos+i];
	sub->length=len;
}
void StrInsert(SString *s,SString t,int pos) /*�����㷨*/
{
	int i,m,n;
	m=s->length;
	n=t.length;
	for(i=m-1;i>=pos-1;i--)
	s->ch[i+n]=s->ch[i];
	for(i=0;i<n;i++)
	s->ch[i+pos]=t.ch[i];
	s->length=s->length+n;
 } 
void StrDelete(SString *s,int pos,int len) /*ɾ���㷨*/
{
	int i;
	for(i=pos+len;i<s->length;i++)
	s->ch[i=len]=s->ch[i];
	s->length=s->length-len;
 }
void StrContact(SString *s,SString t) /*�����㷨*/
{
	StrInsert(s,t,s->length);
 }
void show(SString s)
{
	int i;
	for(i=0;i<s.length;i++)
	printf("%c",s.ch[i]);
}
//----------------------------ģʽƥ��---------------------------
int IndexBF(SString s,SString t,int pos) /*BF�㷨*/
{
	int i,j,k=-1;
	i=pos;j=0;
	while(i<s.length&&j<t.length)
	{
		if(s.ch[i]==t.ch[j])
		{
		i++;
		j++;
		}
		else{
			i=i-j+1;j=0;
		}
	}if(j>=t.length)k=i-t.length;
	return k;
 }
void get_next(SSrtring t,int next[]) /*KMP�㷨*/
{
	int j,k;
	next[0]=-1;next[1]=0;
	j=1;k=0;
	while(j<t.length)
	{
		if(t.ch[j]==t.ch[k])
		{
			k++;j++;next[j]=k;
		}
		else
		if(k==0)
		{
		j++;
		next[j]=0;
		}
		else
		k=next[k];
		}
}
int IndexKMP(SString s,SString t,int pos,int next[])
{
	int i,j,k;
	i=pos;j=0;k=-1;
	while(i<s.length&&j<s.length)
	{
		if(s.ch[i]==t.ch[j])
		{
			i++;
			j++;
		}
		else if(j==0)
		{
			i++;
		}else 
		j=next[j];
	}
	if(j>=t.length)
	k=i-t.length;
	return k; 
}
//--------------------�ı��ļ����ʵļ��������---------------------
