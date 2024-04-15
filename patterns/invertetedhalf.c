#include<stdio.h>
int main(){
    int i,j,num;
    printf("entre the  terminating number >>");
    scanf("%d",&num);
    
    for(i=num;i>=1;i--){
       for(j=1;j<=i;j++){
        num++;
        printf("%d",j);
       }
       printf("\n");
    }

}
