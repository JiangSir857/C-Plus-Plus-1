//����9.8������һ����ģ�塣
template <class T>   //ָ������ģ�����õ���ͨ����������
class Point          //����ģ��
{
private:
	T x,y;
public:
	Point(T x,T y){this->x = x;this->y = y;}
	T getX() { return x;}
	T getY() { return y;}
	void display();
};
template <class T>      //��Ա�����Ķ���
void Point<T>::display()
{
	Cout<<"("<<x<<","<<y<<")"<<endl;
}
