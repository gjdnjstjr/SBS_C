#include <stdio.h>
/*
반환타입 함수명 (배열)
*/
int N = 5;   //전역 변수

//포인터 변수 : 주소값을 저장하는 변수
int max(int* arr){
    int result = 0;
    
    //1,2,3.4,5
    result = arr[5];
    for (int i = 0; i < N; i++){
        if( result < arr[i]) {
            result = arr[i];
        }
    }
    
    return result;
}
int main(void) {
    int N = 5;
    int arr[5];
    int result = 0;

    printf("정수 5개 입력");
    //입력문 -- 정수5개 입력
    for (int i = 0; i < N; i++){
        //배열에 저장
        scanf("%d",&arr[i]);
    }
    // 최댓값 = 함수 호출 -- 배열을 전달
    // 배열의 이름 : 첫 번째 주소
    result = max(arr);
    

    //출력 - 최댓값
    printf("최댓값 :%d\n",result);
}