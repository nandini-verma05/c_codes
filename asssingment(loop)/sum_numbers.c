#include<stdio.h>
int main(){
    int i,sum =0,num;
    printf("entre the number of terms>>");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}