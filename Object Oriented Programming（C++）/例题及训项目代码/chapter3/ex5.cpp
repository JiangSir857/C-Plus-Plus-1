/* ����3.5�� ��switch����д���򣬸�������ĳɼ������Ӧ��A��B��C��D��E�ȼ���
����A��90��100��B��80��89��C��70��79��D��60��69��E��0��59��*/
#include "iostream.h"
void main()
{	
	int score,temp=-1;
	cout<<"������ѧ���ɼ���"<<endl;
	cin>>score;
	temp=score/10;
	switch(temp)
	{
		case 10: 
		case  9: cout<<"��ĵȼ���A."<<endl;break;
		case  8: cout<<"��ĵȼ���B."<<endl;break;
		case  7: cout<<"��ĵȼ���C."<<endl;break;
		case  6: cout<<"��ĵȼ���D."<<endl;break;
		case 5:  case 4:  case  3:  case 2:  case 1:  case 0:
			cout<<"��ĵȼ���E."<<endl;break;
		default: cout<<"�ɼ���������."<<endl;break;
	}
}
