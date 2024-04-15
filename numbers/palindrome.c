#include<stdio.h>
int main(){
    int rem, number, sum=0,i;
    printf("entre anumber>>");
    scanf("%d",&number);
    i=number;
    while(number>0){
        rem=number%10;
        sum=(sum*10)+rem;
        number=number/10; 
    }
    if(sum==i){
        printf("it is apalindrome");

    }else{
        printf("it is not apalindrome ");
    }
}