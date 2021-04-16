//��Ŀ2�����㺯���Ķ�����
#include "iostream.h"
float function(float x) 				//�����ֵĺ���
{
	return 4.0f/(1+x*x);
}
class inteAlgo						//����inteAlgo
{
protected:
	float a,b;						//������������ұ߽�
	int n;							//��[a,b]���仮��Ϊn��
	float h, sum;						//����h�����ֽ��ֵsum
public:
	inteAlgo(float left,float right,int steps)
	{
		a = left;
		b = right;
		n = steps;
		h = (b-a)/n;					//���������h
		sum=0.0f;
	}
	virtual void integrate(void); 		//�麯��integrate
};
class rectangle: public inteAlgo  		//������rectangle
{
public:
	rectangle(float left,float right,int steps):inteAlgo(left,right,steps)
	{}
	virtual void integrate(void); 		//�麯��integrate
};
class ladder: public inteAlgo  			//������ladder
{
public:
	ladder(float left,float right,int steps):inteAlgo(left,right,steps)
	{   }
	virtual void integrate(void); 		//�麯��integrate
};
class simpson: public inteAlgo  			//������simpson
{
public:
	simpson(float left,float right,int steps):inteAlgo(left,right,steps)
	{}
	virtual void integrate(void); 		//�麯��integrate
};
void inteAlgo::integrate(void)			//�����麯������
{	cout<<sum<<endl; }
//rectangle���ʵ��
void rectangle::integrate(void)		//�����η����㶨����
{
	float a1 = a;
	for(int i=0;i<n;i++)
	{	sum += function(a1);       //sum=(f(a)+f(a+h)+...+f(a+(n-1)h)h
		a1 += h;
	}
	sum *= h;
	cout<<sum<<endl;				//��ʾ���ֽ��sum
}
//ladder���ʵ��
void ladder::integrate(void)		//�����η����㶨����
{
	float a1 = a;
	sum = (function(a) + function(b))/2.0f;
	for(int i=1;i<n;i++)
	{
		a1 += h;
		sum += function(a1);      //sum=(f(a)+2f(a+h)+...+2f(a+(n-1)h)+f(b))h/2
	}
	sum *= h;
	cout<<sum<<endl;			  //��ʾ���ֽ��sum
}
//simpson���ʵ��
void simpson::integrate(void)	  //�����η����㶨����
{
	float a1 = a, s = 1.0f;
	sum = function(a) + function(b);
	for(int i=1;i<n;i++)
	{
		a1 += h;
		sum += (3.0f+s)*function(a1);//sum=(f(a)+4f(a+h)+2f(a+2h)+...+f(b))h/3
		s = -s;
	}
	sum *= h/3.0f;
	cout<<sum<<endl;			   //��ʾ���ֽ��sum
}
void integrateFun(inteAlgo *p)
{
	p->integrate();
}
void main()
{  
	rectangle rec(0.0,1.0,10);  	//rectangle�����rec
	ladder lad(0.0,1.0,10);			//ladder�����lad
	simpson sim(0.0,1.0,10);		//simpson�����sim
	integrateFun(&rec);			//���η����㶨����
	integrateFun(&lad);			//���η����㶨����
	integrateFun(&sim);			//simpson �����㶨����
}
