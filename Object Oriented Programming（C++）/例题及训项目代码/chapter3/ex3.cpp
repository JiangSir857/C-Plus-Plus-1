/*����3.3�� ��дһ��if���֧�ṹ�ĳ��򣬽��ɼ��İٷ���ת��Ϊ�ȼ��ơ�
�ٷ�����ȼ��ƵĶ�Ӧ��ϵ���£�90��100�ֶ�ӦA����80��89��ӦB����
70��79��ӦC����60��69��ӦD����0��59��ӦE����*/
#include "iostream.h"
void main()
{
   	int iScore;
    cout<<"�����뿼�Գɼ�: ";
    cin>>iScore;
    if(iScore>= 90 && iScore<=100)
	   cout<<"��ɼ��ĵȼ���A."<<endl;
    else if(iScore>= 80 && iScore<=89)
        	   cout<<"��ɼ��ĵȼ���B."<<endl;
    else if(iScore>= 70 && iScore<=79)
            cout<<"��ɼ��ĵȼ���C."<<endl;	 
    else if(iScore>= 60 && iScore<=69)
            cout<<"��ɼ��ĵȼ���D."<<endl;  	 
    else if(iScore>= 0 && iScore<=59)
            cout<<"��ɼ��ĵȼ���E."<<endl; 	 
    else  cout<<"��Ч�ɼ�!!"<<endl;
}
