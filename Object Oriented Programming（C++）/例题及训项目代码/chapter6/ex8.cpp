//����6.8�� ���һ���࣬Ҫ������n�������е��������n��ֵΪ2��3��
class  MyMax 
{
private:                        //ע����λ�õ�private�ؼ��ֿ�ʡ��
	int  x, y, z;
public:
    void  Set(int, int, int );  //��ĳ�Ա�������Է������˽�г�Աx,y,z
	int  Max(int,int );         //���س�Ա���� 
	int  Max(int,int,int );     //���س�Ա����   
};
//���г�Ա������ʵ�֣�
int MyMax::Max( int a, int b, int c)//�����������е������
{
	if (b>a) a = b;
	if (c>a) a = c;
	return a;
}
int MyMax::Max( int a, int b)       //�����������е������
{
	if (b>a) return a;
	else     return b;
}
