//����5.16�� �Ӽ�������һ���ַ���ͳ�������ַ��ĸ�����
#include <iostream.h>
inline int IsNumber(char);   //������������
void main()
{
		char ch;
		int iCount=0;
		cout<<"�������ַ�����";
		while((ch = cin.get()) !=  '\n')
		{
			if(IsNumber(ch))iCount++;
		}
		cout<<"��������ַ����к��� "<<iCount<<" �������ַ���"<<endl;
	}
	inline int IsNumber(char ch) //������������
	{
		return (ch>='0' && ch<='9')? 1:0;
	}

