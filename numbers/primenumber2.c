#include<stdio.h>
int main(){
    int num ,isprime=0,i,j,k;
    printf("entre a number>>");
    scanf("%d",&num);
    for (i=num +1;i<=1000;i++){
        isprime =0;
        for(j=2;j<i;j++){
            if(i%j==0){
                isprime=1;
                break;
            }

        }
        if(isprime==0){
            printf("next prime number  is %d",i);
            break;
        }
    }
    return 0;}


