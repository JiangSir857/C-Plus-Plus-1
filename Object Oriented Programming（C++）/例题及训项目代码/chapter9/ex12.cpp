//����9.12�� ���catch����ִ�С�
 #include <iostream.h>
 void fnFun(int );
 void fnFun(int x)
 {   
	try
	{
		if(x==0)throw x;
		else if(x<0)throw "�ַ����쳣";
		else throw 2.5;
	}
	catch (int n)                            //A
     {
        cout<<"�쳣����Ϊ��"<<n<<endl;
     }
		catch (char *str)                        //B
     {
        cout<<"�쳣����Ϊ��"<<str<<endl;
     }
		catch (...)                              //C
     {
        cout<<"�쳣����Ϊ�����������쳣"<<endl;
     }
 }
 void main()
 {
		fnFun(-2);
		fnFun(0);
		fnFun(2);
 } 
