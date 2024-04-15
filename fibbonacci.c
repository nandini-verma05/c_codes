
#include <stdio.h>

int main() {
    int num,a=0,b=1;
    int c=a+b;
    printf("entre the terms>>");
    scanf("%d",&num);
    printf("fibonacci sequence \n %d\n %d\n",a,b);
    for(int i=3;i<=num;i++){
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
    }

    return 0;
}