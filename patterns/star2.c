#include <stdio.h>
int main(){
    int i ,j,rows;
    printf("entre the number of rows>>");
    scanf("%d",&rows);
    for(i=1;i<=rows/2;i++){
        for(j=i;j<=rows;j++){
            printf("*");
        }
        printf("\n");
    }
}