#include <stdio.h>
int main(){
    int number,isprime,i,j;
    printf("entre a number to find factors");
    scanf("%d",number);
    for(i=1;i<=number;i++){
        if(number%i==0){
            isprime=1;
        for(j=2;j<=i/2;j++){
            if(j%i==0){
              isprime=0;
              break;
            }

        }
        }
        if(isprime==1){
            printf("the factor is%d",i);
        }
        }

       return 0; 
    }
