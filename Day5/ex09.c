#include <stdio.h>

int main(void){
    //약수
    //공약수?
    // : 두 정수의 공통된 약수
    // 12: 1 2 3 4 6 12
    // 18: 1 2 3 6 9 18
    // 12와 18의 공약수 : 1 2 3 6

    //최대공약수?
    // : 공약수 중에서 최대값
    // 12와 18의 최대공약수 : 6

    //공배수
    // : 두 정수의 공통된 배수
    // 12 : 12 24 36 48 60 72...
    // 18 : 18 36 54 72 ...
    // 12 와 18의 공배수 : 36 72

    //최소공배수?
    // : 공배수 중에서 최소값
    // 12 와 18의 최소공배수 36
    
    // 두 정수 입력
    int A, B;
    int big, small;
    int gcd, lcm;    //최대공약수, 최소공배수
    int R;           //나머지

    printf("정수 A, B입력 : ");
    scanf("%d %d",&A, &B);
    //두수의 크기 비교
    if( A >= B ) {
        big = A;
        small = B;
    
    }else {
        big = B;
        small = A;

    }
     
    while(1){
        //큰 수를 작은 수로 나눈 나머지를 구한다.
        R = big % small;
        //현재의 작은 수를 다음 큰 수에 대입
        big = small;
        //나머지를 다음 작은 수에 대입
        small = R;

        if( R == 0 ) {
            gcd = big;            //최대공약수
            lcm = A * B / gcd;    //최소공배수
            break;
        }
    }
    printf("최대공약수 :%d\n",gcd);
    printf("최소공약수 :%d\n",lcm);

    return 0;
}