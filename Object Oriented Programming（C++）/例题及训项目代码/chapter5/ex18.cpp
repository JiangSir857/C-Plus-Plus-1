//����5.18�� Բ�������������������ε���������ݲ��������Ĳ�ͬ���ò�ͬ��fnArea()������
#include "iostream.h"
float fnArea(float r)             	//��1�����������غ���fnArea()
{
    return (r * r * 3.14f);
}
float fnArea(float a,float h)    	//��2�����������غ���fnArea()
{
   	return (a * h * 0.5f);
}
float fnArea(float a,float b,float h) //��3�����������غ���fnArea()
{
	return ((a+b) * h * 0.5f);
}
void main( )
{
    float r = 1.5f;
    float a = 2.0f, b = 2.5f, h = 1.2f;
	cout<<"Բ���    ="<<fnArea(r)<<endl;     //���õ�1��fnArea()����
	cout<<"�������  ="<<fnArea(a,b,h)<<endl; //���õ�3��fnArea()����
	cout<<"���������="<<fnArea(a,h)<<endl;   //���õ�2��fnArea()����
}
