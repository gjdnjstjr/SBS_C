#include <stdio.h>

int main(void) {

    int N;
    printf("������ �Է��ϼ��� : ");
    scanf("%d",&N);

    if( N % 2 == 1 ) {
        printf("�Է��Ͻ� ������ Ȧ�� �Դϴ�.", N);
    }else {
        printf("�Է��Ͻ� ������ ¦�� �Դϴ�.", N);
    }

    //N % 2 == 1  : Ȧ��
    //N % 2 == 0  : ¦��
    //1 % 2 : 1
    //2 % 2 : 0
    //3 % 2 : 1
    //4 % 2 : 0
    
   return 0;
}