/*
1����һ�������ı��ʽf(x,y,z) = x + y/z��ֵ��
   ע��z����Ϊ0����̲�׽zΪ0ʱ���쳣���������û���������Ϊ0��
2����дһ��������������ƽ�����������쳣������ƴ������������
*/
#include <iostream.h>
#include <math.h>
 double fnFun(int ,int,int);
 double fnFun(int x,int y,int z)
 {   
	double f;
	
	try 
	{
		if(z == 0)throw "��������Ϊ0";
		f = (double) x +(double) y/z;
		return f;
	}
	catch (char *str)                       
     {
        cout<<str<<endl;
     }
	return 0;
 }

 double fnSqrt(int n)
 {
	 try
	 {
		 if(n<0)throw "�������ܿ�ƽ����";
		 return sqrt(n);
	 }
	 catch (char *str)                        
     {
        cout<<str<<endl;
     }
	return -1;
 }
 void main()
 {
	 cout<<fnFun(-2,3,4)<<endl;
	 cout<<fnFun(-2,3,0)<<endl;
	 cout<<fnSqrt(4)<<endl;
	 cout<<fnSqrt(-4)<<endl;
 } 
