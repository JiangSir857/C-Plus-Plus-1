//����3.14�� ����һ���������ж����Ƿ�Ϊ������
#include "iostream.h"
#include "math.h"
void main()
{
	int i, j,k;
	cout<<"������һ����������";
	cin>>k;
	j = sqrt(k);
	for( i=2;i<=j;i++)
	{
		if(k%i == 0)break;          //���i��k�����ӣ�������ѭ��
	}
 	if(i >j)cout<<k<<"��������\n";  //�б�ǰһ��forѭ��������ֹ���
	else 	cout<<k<<"����������\n";
}

