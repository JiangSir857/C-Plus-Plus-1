/*
2. ����һ����ģ��CValue��������п��Դ��3����ֵ�����Ҿ���������Ա������
   ��Ա�����Ĺ��ֱܷ����3�����е����ֵ�Լ���Сֵ���û�����3������
   ��������Сֵ�������Ļ�ϡ�
*/
#include <iostream.h>
template <class T>   //ָ������ģ�����õ���ͨ����������
class CValue
{
private:
	T x,y,z;
public:
	T fnMax();
	T fnMin();
	void fnInput()
	{
		cout<<"����3������";
		cin>>x>>y>>z;
	}
};

template <class T>   //��Ա�����Ķ���
T CValue<T>::fnMax()
{
	T max;
	max = x>y?x:y;
	max = max>z?max:z;
	return max;
}
template <class T>   //��Ա�����Ķ���
T CValue<T>::fnMin()
{
	T min;
	min = x<y?x:y;
	min = min<z?min:z;
	return min;
}

void main()
{
	CValue<int> p1;               //�൱�ڰ�int����ģ����T��λ��
	p1.fnInput ();
	cout<<"max="<<p1.fnMin ()<<",max="<<p1.fnMax()<<endl;
	CValue<double> p2;           //�൱�ڰ�double����ģ����T��λ��
	p2.fnInput ();
	cout<<"max="<<p2.fnMin ()<<",max="<<p2.fnMax()<<endl;
}
