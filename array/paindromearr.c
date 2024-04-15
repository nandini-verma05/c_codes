#include<stdio.h>
//doubt hai yaar pata nhi kyun hnhi chal rha hai

int main(){
    int rem,sum=0,i,num;
    int arr[10];
    printf("entre numbers>>");
    for(i=0;arr[i]<=10;i++){
        scanf("%d",&arr[i]);
    }   
    arr[i]=num;

    while(num>0){
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
        num++;
    }
    if(sum==arr[i]){
        printf("%d is a palindrome",arr[i]);
    }
    
    return 0;

}