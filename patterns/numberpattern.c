#include<stdio.h>
int main(){
    int i,j,num;
    printf("entre the  terminating number >>");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
       for(j=1;j<=i;j++){
        printf("%d",j);
       }
       printf("\n");
    }
    return 0;

}
