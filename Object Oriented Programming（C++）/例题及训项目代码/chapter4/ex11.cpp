//����4.11�� �ַ������ơ�
#include <stdio.h>
#include <string.h>				//�ַ�����������ԭ����ͷ�ļ�string.h��
void main()
{
    char  chA[80],chB[80];
    printf("������һ���ַ���: ");
    gets(chA);					//����һ�����ַ��洢���ַ�����chA��
    strcpy(chB,chA);           		//��chA�е����ݸ��Ƶ�chB��
    printf("���ƺ��ַ�����chA�е�������:");
    puts(chA);
    printf("���ƺ��ַ�����chB�е�������:");
    puts(chB);
}

