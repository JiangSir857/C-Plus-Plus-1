//����2.7�� ������������ȼ��ͽ�Ϸ���Ӧ�á�
#include <iostream.h>
void main()
{
	float a = 2.5F;
	int z = 5, x;
	x = (int)a++ + 4 + --z*4;     //�൱�� x = (int)(a++)+4+(--z)*4;
	cout<<"a="<<a<<",z="<<z<<",x="<<x<<endl;
}

