//����1-5�� ��ʾ��ͬ���Ƶ�����/�������ʹ�÷�����
#include "iostream.h"
void main()
{
	int a,b,c;
	cin >> hex >> a;      //ָ������Ϊʮ��������
	cin >> oct >> b;      //ָ������Ϊ�˽�����
	cin >> dec >> c;      //ָ������ָ�Ϊʮ������
	cout<< dec << "a="<< a <<'\t'<<"b="<< b<< '\t'<<"c="<< c << endl;
	cout<< oct << "a="<< a <<'\t'<<"b="<< hex << b<< '\t'<<"c="<< c << endl;
}
