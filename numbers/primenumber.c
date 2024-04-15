#include<stdio.h>
//prime number sum
int main(){
    int i,j,end,isprime,sum=0;
    printf("entre a number:");
    scanf("%d",&end);
    for (i=2;i<=end;i++){

        isprime=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            sum=sum+i;
        }
    }
    printf("sum of prime number from 1to %d is %d",end,sum);
    return 0;

}