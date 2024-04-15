#include<stdio.h>
int main (){
    int number,a=0,b=1,k;
    printf("entre a number>>");
    scanf("%d",&number);
   for(;number>0;){
    k=number%10;
    a=a+k;
    b=b*k;
    number=number/10;
   }
   printf("%d sum of digit =%d sum of product =%d\n",a,b);
   if(a==b){
    printf("it is spy number");
   }
   else{
    printf("it is not spy");
   }
    return 1;   
}