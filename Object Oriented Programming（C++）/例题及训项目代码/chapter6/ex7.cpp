//����6.7�����һ����4���������࣬Ҫ���ܹ������4���������ֵ��
class  MyMax4 
{
private:
	int  a,b,c,d;
	int  Max2(int , int);
public:
    void  Set(int,int,int,int );//�ó�Ա�������Է������˽�г�Աa,b,c,d
	int  Max4();                //�ó�Ա�������Է���˽�г�ԱMax2��int,int��
};
//���г�Ա������ʵ�֣�
int MyMax4::Max2(int x,int y)   //��2���������ֵ
{
	if(x>y)return x;
	else   return y;
}
void MyMax4::Set(int x1,int x2,int x3,int x4) 
{
	a=x1;b=x2;c=x3;d=x4;
}
int MyMax4::Max4() 			 //���Լ�����4���������ֵ
{
	int x,y,z;
	x=Max2(a,b);   			 //˽�жεĳ�Ա�ɱ�����ĳ�Ա����������
	y=Max2(c,d);
	z=Max2(x,y);
	return  z;
}

