//����6.2�� �޸���6.1���룬ʵ�ֳ�Ա�����������ڶ��塣

class  Rect
{
private:            		   //˽�����ݳ�Ա��length,width 
	float  length,width;  	   //���Ϳ�
public:                        //���к���������set(),peri(),area()
	void set(float x,float y)//�����Ա����set()
	{
		length= x;
		width = y;
	}	
	float peri()			   //�����Ա����peri()
	{
		return (length+width)*2;
	}
	float area()			  //�����Ա����area()
	{
		return (length*width);
	}
};
