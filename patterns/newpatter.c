#include<stdio.h>
int main(){
    int i,j,k=1 ,l ,m ,n;
    int num;
    printf("entre an number>>");
    scanf("%d",&num);

    while(k<=num){
        for (i=1;i<=num;i++){
            for(j=1;j<=i;j++){
                num++;
                printf("*");
            }
            printf("\n");
        }
    for (l=1;l<=num;l++){
        for(m=1;m<=l;m++){
            printf("&");
        }
        printf("\n");
    }
  k++;
}
}