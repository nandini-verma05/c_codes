
#include <stdio.h>

int main() {
   int num, originalNum, remainder ;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;
   while(originalNum!=0){ 
    remainder =originalNum %10;
    result = result+ remainder*remainder*remainder;
    originalNum=originalNum/10;
   }
   if ((int)result == num){                                                                                         
    printf("%d is an Armstrong number.", num);
   }
   else{
    printf("%d is not an Armstrong number.", num);
   }
   return 0;
}