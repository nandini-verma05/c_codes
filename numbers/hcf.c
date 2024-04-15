// hcf
#include <stdio.h>

int main() {
        int i,hcf,num1,num2;
        printf("entre the first numbber>>");
        scanf("%d",&num1);
        printf("entre second number>>");
        scanf("%d",&num2);
        for(i=1;i<=num1||i<=num2;i++){
            if(num1%i==0 && num2%i==0){
                hcf=i;
            }
        }
                printf("hcf is %d",hcf);
            
            return 0;
    
}