/*2. ͳ���ַ������ж��ٸ����ʡ�����һ���ַ���Ȼ��ͳ�������ж��ٸ����ʣ�
     Ҫ��ÿ������֮���ÿո�ָ����������ַ�����Ϊ�ո�
*/

#include <iostream.h>
void main()
{  
	int  i,count=0;
	char chStr[80];
	cout<<"������һ���ַ���: ";
	cin.getline(chStr,79,'\n');
	for( i=0;chStr[i] != '\0'; i++)     //�ô�������ʶ'\0'����ѭ����ֹ
	{   
		if(chStr[i]==' '&& chStr[i-1]!=' ')count++;
	
	}
	cout<<"�ַ���:"<<chStr<<"�к�"<<count<<"�����ʡ�\n";
}