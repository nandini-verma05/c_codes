#include<stdio.h>
int manin(){
    int n,sum=0,rem;
    printf("entre a number:");
    scanf("%d",&n);
    for( int i =1;i<=(n-1);i++ ){
        rem=n%i;
        if(rem==0){ 
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("it is a perfect number>>");
    }
    else{
        printf("it is not a perfect number");
    }
    return 0;
}