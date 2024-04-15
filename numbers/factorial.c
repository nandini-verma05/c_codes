#include<stdio.h>
int main(){
    int i,fact=1,num;
    printf("entre the number>>");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("the factorial fo number is>%d",fact);
}