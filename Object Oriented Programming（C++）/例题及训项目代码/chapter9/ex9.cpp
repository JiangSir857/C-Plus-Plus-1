//����9.9������һ����ģ�壬��ʵ������
#include <iostream.h>
template <class T>   //ָ������ģ�����õ���ͨ����������
class Point
{
private:
	T x,y;
public:
	Point(T x,T y){this->x = x;this->y = y;}
	T getX() { return x;}
	T getY() { return y;}
	void display();
};

template <class T>   //��Ա�����Ķ���
void Point<T>::display()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}

void main()
{
	Point<int> p1(4,5);           //�൱�ڰ�int����ģ����T��λ��
	p1.display();
	cout<<"x="<<p1.getX ()<<",y="<<p1.getY()<<endl;
	Point<float> p2(40.5F,50.8F); //�൱�ڰ�float����ģ����T��λ��
	p2.display();
	cout<<"x="<<p2.getX ()<<",y="<<p2.getY()<<endl;
}

