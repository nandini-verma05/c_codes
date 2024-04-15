#include<stdio.h>
//doubt
int main(){
    int isprime=0,number;
    printf("entre a number >>>");
    scanf("%d",&number);
    if(number==1|| number ==0){
        isprime=1;
    }
    for( int i=2;i<=number;i++){
        if(number%i==0){
            isprime=0;
            break;
        }
    }
        if(isprime==1){
            printf("it is a prime number");
        }
        else{
            printf("it is not a prime number");
        }
return 0;
    }
