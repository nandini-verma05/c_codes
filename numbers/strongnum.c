#include<stdio.h>
int main(){
    int num,i=1,c,rem,fact=1,sum;
    printf("entre a number>>");
    scanf("%d",&num);
    c=num;
    while(num)
    {
        i=1,fact=1;
        rem=num%10;
        while(i<=rem)
        {
            fact=fact*i;
            i=i+1;
            
        }
        sum=sum+fact;
        num=num/10;
    }
    if (sum=c)
    {
        printf("%d is a strong no.",c);
    }
    else
    {
        printf("%d is a not strong no.",c);
    }

    
    return 0;
}

