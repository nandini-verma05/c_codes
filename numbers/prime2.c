#include<stdio.h>
int main(){
    int end,isprime;
    printf("enter the terminating number>>");
    scanf("%d",&end);
    for(int i=1;i<=end;i++ ){
        isprime=0;
    for (int j=2;j<=i/2;j++){
        if(i%j==0){
            isprime++;
            break;
        }
    }
        if(isprime==0 && i!=1){
            printf("%d\n",i);
        }
    
 
}
return 0;
}