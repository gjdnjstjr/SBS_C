#include <stdio.h>
//프로그램 시작 - main() 함수
int main() {
    //출력문
    printf("안녕하세요!");

    //변수선언
    int num = 10;

    char a = 'a';   //문자
    int b, c;       //정수형:1,2,3,4
    double d;       //실수형:1.5,2.7

    b = 10;
    c = 20;
    d = 1.25;
    
    //  \n : 줄바꿈 (엔터)
    //  %d : 십진수 , %5d   : 5칸을 지정해서 오른쪽 정렬
    //  %c : 문자   , %-5d  : 5칸을 지정해서 왼쪽 정렬
    //  %f : 실수   , %n    : 소수점 아래 n자리까지 출력

    printf("변수 a :%c \n",a);
    printf("변수 b :%5d \n",b);
    printf("변수 c :%-5d \n",c);
    printf("변수 d :%.2f \n",d);

    printf("%d", num);

    return 0;

}