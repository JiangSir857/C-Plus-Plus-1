//��Ŀ2�����ֵ��ģ��
#include <iostream.h>
template <class T>
class maxElem
{
	T *a;
	int size;
public:
	maxElem(T *array=NULL,int n=0)
	{
		size = n;
		if(size>0)
		{
			a = new T[size];
			for(int i=0;i<size;i++)a[i] = array[i];
		}
		else  a = NULL;
	}
	T maxValue()
	{
		T max = a[0];
		for(int i=1;i<size;i++)if(max<a[i])max = a[i];
		return max;
	}
		~maxElem(){if(a)delete[]a;}
};
 void main()
 {
	int iA[10]   = {1,2,0,44,5,8,90,45,67,98};
	double fB[6] = {4.5,7.8,78.9,4.0,6.7,10.9};
	maxElem<int>k1(iA,10);  //A,���������ʱ�������������͵�ʵ������int
	maxElem<double>k2(fB,6);//B,���������ʱ�������������͵�ʵ������double
	cout<<"�������������ֵ�ǣ�"<<k1.maxValue()<<endl;
	cout<<"ʵ�����������ֵ�ǣ�"<<k2.maxValue()<<endl;
 }
