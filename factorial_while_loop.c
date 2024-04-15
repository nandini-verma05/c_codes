#include<stdio.h>
int main(){
    int i =1,num,fact=1;
    printf("entre the number>>");
    scanf("%d",&num);
    while(i<=num){
        fact=fact*i;
        i++;
    }
printf("thr factorial of number is %d",fact);
}