#include <stdio.h>
int main(){
    int number,isprime = 0,j;
    printf("entre a number");
    scanf("%d",&number);
if(number==1||number==0){
    isprime=1;
}
    for(j=2;j<=number/2;j++){
        if(number%j==0){
            isprime=1;
            break;
        }
    }
    if (isprime==0){
        printf("it is a prime number");
    }
    else{
        printf("it is not a prime number");
    }
    return 0;
}

