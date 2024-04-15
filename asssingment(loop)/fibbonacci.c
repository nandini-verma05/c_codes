#include<stdio.h>
#include<conio.h>
int main(){
int i=3,a=0,b=1,c=0,num;
printf("entre a number >>");
scanf("%d",&num);
printf("the fibbonacci series is \n %d \n %d",a,b);
for(i=3;i<=num;i++){
    printf(" \n %d",c);
    a=b;
    b=c;
    c=a+b;
}
return 0;

}