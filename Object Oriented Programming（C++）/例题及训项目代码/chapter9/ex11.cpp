//����9.11���۲��쳣�Ĳ�׽�봦��
#include <iostream.h>
void main()
{
	int a,b;
	double c;
    cout<<"����������������";
	cin>>a>>b;
	try {
		if(b == 0)throw "��������Ϊ0";
		c = (double)a/b;
        cout<< a<<"/"<<b<<"="<<c<<endl;	
	}	
	catch (char *str)
    {
        cout<<str<<endl;
    }
}
