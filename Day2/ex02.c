#include <stdio.h>

int main(void) {
    short sh = 32767;                     //short 
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345; 
                         
   printf("sh : %d\n",sh );
   printf("in : %d\n",in );
   printf("ln : %d\n",ln );      // long ���� ���Ĺ��� %1d
   printf("ln : %d\n",ln );      // long long ���� ���Ĺ��� %11d

   return 0;
}