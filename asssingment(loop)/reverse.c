#include<stdio.h>
int main(){
    int i ,number,rem,rev,sum=0;
    printf("entre a number>.");
    scanf("%d",&number);
    for(i=0;i<=number;i++){
        rem= number%10;
        rev=rev*10+rem;
        number=number/10;
    }
    printf("the reverse number is>>%d",rev);
    }
