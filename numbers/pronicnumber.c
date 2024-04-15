#include <stdio.h>
int main(){
    int i,number,f=0;
    printf("entre a number>>");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        if(number==i*(i+1)){
            f=1;
        }
    }
    if(f==1){
        printf("it is pronic number");
    } else{
        printf(" it is not a pronic number");
    }
    return 0;
}