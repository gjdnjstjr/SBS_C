#include <stdio.h>

int main(void) {
   int num1 = 20 ,num2 = 10;
   int result;

   //AND ���� 
   result = 1 && 1;
   printf("result 1 : %d\n", result);
   
   //���� ���� ����Ű 
   // : Alt + shift + 
   //�� �� ���� ����Ű 
   // : Ctrl + Shitf + K

   result = num1 == 20 && num2 == 10;
   printf("result 2 : %d\n", result);
   // or ������ (||) - shift + \(��ȭ��ȣ)
   result = 0 || 1;
   printf("result 3 : %d\n", result);

   result = 0 || 0;
   printf("result 4 : %d\n", result);

   //NOT ����(1)
   printf("result 5 : %d\n", !0);
   printf("result 6 : %d\n", !1);

    
   return 0;
}