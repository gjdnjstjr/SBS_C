#include <stdio.h>
/*
��ȯŸ�� �Լ��� (�迭)
*/
int N = 5;   //���� ����

//������ ���� : �ּҰ��� �����ϴ� ����
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

    printf("���� 5�� �Է�");
    //�Է¹� -- ����5�� �Է�
    for (int i = 0; i < N; i++){
        //�迭�� ����
        scanf("%d",&arr[i]);
    }
    // �ִ� = �Լ� ȣ�� -- �迭�� ����
    // �迭�� �̸� : ù ��° �ּ�
    result = max(arr);
    

    //��� - �ִ�
    printf("�ִ� :%d\n",result);
}