#include <stdio.h>
#include<string.h>
//문자열 처리 함수 사용시 :sting.h 포함

int main(void) {

    char str1[50] = "새해 복 많이";
    char str2[50] = "새해 복 많이";
    
    //str1문자열에 "받으세요" 문자열 연결하기
    strcat(str1,"받으세요");
    printf("%s\n",str1);

    //str1문자열에 "받으세요 즐거운 연휴되세요" 중 4글자(8byte)만 연결
    strncat(str2,"받으세요 즐거운 연휴되세요",8);
    printf("%s\n",str2);
    //str1 과 str2 문자열 비교
    printf("문자열 비교 결과 1 :%d",strcmp(str1,str2));

    printf("문자열 비교 결과 2 :%d",strcmp(str1,"안녕하세요."));

   return 0;
}