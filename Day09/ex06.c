#include <stdio.h>
#include<string.h>
//���ڿ� ó�� �Լ� ���� :sting.h ����

int main(void) {

    char str1[50] = "���� �� ����";
    char str2[50] = "���� �� ����";
    
    //str1���ڿ��� "��������" ���ڿ� �����ϱ�
    strcat(str1,"��������");
    printf("%s\n",str1);

    //str1���ڿ��� "�������� ��ſ� ���޵Ǽ���" �� 4����(8byte)�� ����
    strncat(str2,"�������� ��ſ� ���޵Ǽ���",8);
    printf("%s\n",str2);
    //str1 �� str2 ���ڿ� ��
    printf("���ڿ� �� ��� 1 :%d",strcmp(str1,str2));

    printf("���ڿ� �� ��� 2 :%d",strcmp(str1,"�ȳ��ϼ���."));

   return 0;
}