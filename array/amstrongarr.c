#include<stdio.h>
int main(){
    int arr[10];
    int i,rem,sum=0,num;
     printf("entre the numbers>>");
        for(i=0;i<10;i++){   
            scanf("%d",&arr[i]);
        }
       for(int i=0;i<10;i++){
        num=arr[i];
        while(num>0)
        {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
      }
    
    if(arr[i]==sum){
        printf("the  armstrong number is >>%d",arr[i]);
    }
    }
    return 0;}
