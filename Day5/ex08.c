#include <stdio.h>

int main(void){
    //약수?
    // : 어떤 수보다 작거나 같은 수로 나누었을 때,
    //   나눈 나머지 0이되는 수를 약수라고 한다.
    // 6의 약수 :
    int input;
    printf(" 정수 입력 : ");
    scanf("%d", &input);

    printf("%d의 약수 : ", input);

    for (int i =1; i <= input; i++)
    {
        if(input % i == 0){
            printf("%d", i);
        }
    }
     printf("\n");
        
    


    return 0;
    }