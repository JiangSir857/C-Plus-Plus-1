/*
2���������������Ϊ�����Ԫ��������Ƹ�������������㡣
*/
#include <iostream.h>
class complex
{
	double real,image;
public:
		complex(){real=0;image=0;}
		complex(double r,double i)
		{ real=r;image=i; }
		void display()
		{
			if(image<0)
				cout<<real<<image<<"i"<<endl;
			else 
				cout<<real<<"+"<<image<<"i"<<endl;
		}
		friend complex operator++(complex &);	   //ǰ׺����
		friend complex operator++(complex &,int);  //��׺����
};

complex operator++(complex &e)		//ǰ׺����
{
		return complex(++e.real,++e.image);
}

complex operator++(complex &e,int) //��׺����	
{
		return complex(e.real++,e.image++);
}
void main()
{
	complex p1(10,10),p2;
	p2 = p1++;
	p1.display();
	p2.display();
	p2 = ++p1;
	p1.display();
	p2.display();
}
