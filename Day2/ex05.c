#include <stdio.h>  //ǥ�������
#include <string.h> //���ڿ��� �ٷ�� �ش�����
int main(void) {
    char phone[10]= "sumsung";

    printf("����Ʈ�� �̸� :%s\n",phone);
    //���ڿ� ���� �Լ� - strcpy
    //strcpy(������� ���� , ������ ���ڿ�);
    strcpy(phone, "Iphone 12");
    printf("����Ʈ�� �̸� :%s\n",phone);

   return 0;
}