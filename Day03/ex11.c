#include <stdio.h>

int main(void) {
    
    int num, absolute;

    printf("���� �Է� : ");
    scanf("%d" , &num);

    absolute = num > 0 ? num : num * -1;
    printf("���밪 : %d\n", absolute);

    
    
   return 0;
}