#include <stdio.h>
int main(){
    int num1,num2,i,lcm=0,step;
    printf("entre the two numbers to find the lcm ");
    scanf("%d""%d",&num1,&num2);
    if(num1>num2){
        i=num1;
    }
    else{
        i=num2;
    }
    while(1){
        if(num1%i==0 && num2%i==0){
        printf("%d%d=%d",num1,num2,lcm);

            break;
        }
        i++;
    }
        return 0;
}