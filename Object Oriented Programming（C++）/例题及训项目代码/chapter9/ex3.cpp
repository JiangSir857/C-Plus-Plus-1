	//����9.3�� �����������е����ֵ��ģ�塣
	template <class T>
	T fnMax( T *x, int size)
	{
		T  max = x[0];
		for(int i=1;i<size;i++)
		if(x[i]>max)max = x[i];
		return max;
	}
