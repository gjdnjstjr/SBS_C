#include <stdio.h>
// ������ 6��
//2byte = 16bit  
//1 bit = 0, 
//2 bit = 2x2
int main(void) { 
    double number1 = 10;
    int number2 = 1.2345;
    short number3 = 32767 + 1;
    //overflow (�����÷ο�)
    // Ư�� �ڷ����� ���� �������� �� ū ���� �Ҵ��ϴ� ���

    printf("number1 : %f \n", number1);
    printf("number2 : %d \n", number2);
    printf("number3 : %d \n", number3);
   return 0;
}