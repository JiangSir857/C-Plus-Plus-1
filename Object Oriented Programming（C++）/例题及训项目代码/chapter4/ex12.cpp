//����4.12�� �ַ������ӡ�
#include <stdio.h>
#include <string.h>
void main()
{
    char  chA[80],chB[80];
    printf("������A�ַ���: ");
    gets(chA);
    printf("������B�ַ���: ");
    gets(chB);
    printf("A�ַ�����:");
    puts(chA);
    printf("B�ַ�����: ");
    puts(chB);
    strcat(chA,chB);             //��chB�еĴ����ӵ�chA�ĺ���
    printf("���Ӻ�A�ַ�����:");
    puts(chA);
}
