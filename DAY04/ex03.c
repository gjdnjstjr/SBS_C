#include <stdio.h>

int main(void) {

    int N;
    printf("정수를 입력하세요 : ");
    scanf("%d",&N);

    if( N % 2 == 1 ) {
        printf("입력하신 정수는 홀수 입니다.", N);
    }else {
        printf("입력하신 정수는 짝수 입니다.", N);
    }

    //N % 2 == 1  : 홀수
    //N % 2 == 0  : 짝수
    //1 % 2 : 1
    //2 % 2 : 0
    //3 % 2 : 1
    //4 % 2 : 0
    
   return 0;
}