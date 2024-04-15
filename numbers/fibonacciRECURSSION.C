// fibonnacci in recurtion
#include <stdio.h>
int fib (int n);
int main() {
    int n;
    printf("entre a number>>");
    scanf("%d",&n);
    printf("the  fibonacci sequence %dth term is  %d", n ,fib(n));

    return 0;
}
 int fib(int n){
    if(n==0){
    return 0;
    }if(n==1){
        return 1;
    }
    int f1=fib(n-1);
    int f2=fib(n-2);
    int ft=f1+f2;
    return ft;
}