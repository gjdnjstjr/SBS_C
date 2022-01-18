#include <stdio.h>
// 교과서 6장
//2byte = 16bit  
//1 bit = 0, 
//2 bit = 2x2
int main(void) { 
    double number1 = 10;
    int number2 = 1.2345;
    short number3 = 32767 + 1;
    //overflow (오버플로우)
    // 특성 자료형이 갖는 범위보다 더 큰 값을 할당하는 경우

    printf("number1 : %f \n", number1);
    printf("number2 : %d \n", number2);
    printf("number3 : %d \n", number3);
   return 0;
}