#include <stdio.h>


/* 
{����160p}
   &(�ּҿ�����)
   : &���� - ������ �ּҰ��� ��ȯ�ϴ� ������
   
   - * (����������)
   : *�����ͺ��� - �����Ͱ� ����Ű�� �ּҰ��� ��ȯ�ϴ� ������


   ������
   : �ּҰ��� �����ϴ� ����

   ������ ���� ����
   �ڷ��� *������;

   * (����������)���
   1.������ ������ ����
   2.������ ������ ���� ����


*/ 

int main(void) {
   int num = 30;
   //������ ����
   int *ptr = &num;

   printf("ptr : %d\n", ptr);         //�ּ�
   printf("*ptr : %d\n",*ptr);        //�����ͷ� ������ ��
   
   return 0;
}