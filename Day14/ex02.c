#include <stdio.h>
#include <string.h>
/*
   ����ü
   : �پ��� �ڷ����� �������� ��� ������ ���ο� �ڷ���
   Ű����:struct
   *����ü ����
   struct ����ü�̸�{
       �ڷ���1 ����1;
       ������2 ����2;
       ...
   };
   *����ü ����
   struct ����ü�̸� �����̸�;

*/

// ����ü ����
struct person {
    //�̸�,����
    char name[30];
    int age;

};


int main(void) {
    //����ü ���� 
    //����ü ���� �ʱ�ȭ
    //��������� ������� {} �ȿ� ���� ����
    struct person boy = {"���ڵ�",20};
    struct person girl = {"���ڵ�",10};

    

    //���
    printf("boy �� �̸��� %s, ���̴� %d \n",boy.name, boy.age);
    printf("girl �� �̸��� %s, ���̴� %d \n",girl.name, girl.age);
    
   return 0;
}