/*정수5개를 입력받아 배열에 저장하고
배열을 함수로 전달하여
최댓값 구하여 반환하는 함수 max()
최솟값 구하여 반환하는 함수 min()을 정의하고


*/
#include <stdio.h>


//max
int max(int* arr){
    
    int max = 0;
    for (int i = 0; i < 5; i++){
        if(max < arr[i] )
           max = arr[i];
    }
    


    return max;
}
//min
int min(int* arr){
    
    int min = arr[0];
    for (int i = 0; i < 5; i++){
        if(min > arr[i] )
           min = arr[i];
    }
    


    return min;
}


int main(void) {
   //1. 정수 5개 입력
   int arr[5];
   printf("정수 5개 입력 : ");

   for (int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
   }

   int result1 = max(arr);
   int result2 = min(arr);

   printf("최댓값 : %d\n",result1);
   printf("최솟값 : %d\n",result2);


   return 0;
}