//����6.23���ö���ָ�룬������ĳ�Ա��
    #include  <iostream.h>
    class A
	{    int i;
     public:
		 A(int n){ i = n; }
		 int get_i(){ return i; }
    };
    void main()
	{  
		A  a(66), *p;       //����A��Ķ���a ��ָ��A������ָ����� p
         p = &a;             //������a�ĵ�ַ����ָ�����p��ʹָ��pָ����� a
         cout<<"&a="<<&a<<endl;
	    cout<<" p="<<p<<endl; 
         cout<<"   a.get_i()="<<a.get_i()<<endl;   //ֱ������a�ĳ�Աget_i()
         cout<<"  p->get_i()="<<p->get_i()<<endl;  //ͨ��p�������a�ĳ�Ա
	    cout<<"(*p).get_i()="<<(*p).get_i()<<endl;//ͨ��p�������a�ĳ�Ա
	}
