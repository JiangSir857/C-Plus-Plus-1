//���һ�����򣬽�ʮ�������ֱ�ת��Ϊ�˽�������ʮ����������
    
    #include "iostream.h"
    #define  NUM    8
	void main()
	{
    	int i, j, n, m, a[32]={0};
    	cout<<"������һ��ʮ������(0��2147483647): ";
    	cin>>n;
		cout<<"��Ӧ��"<<NUM<<"��������:";
    	for(m=0;m<32;m++) 
    	{
			if(n==0)break;
        	i = n%NUM;
        	j = n/NUM;
        	n = j;
        	a[m] = i;
    	}
    	for(i=m-1;i>=0;i--)           //���ת���õ�NUM������
    	{
        	cout<<a[i];
       	}
		cout<<endl;
	}
