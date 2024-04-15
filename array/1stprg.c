#include<stdio.h>
#include<conio.h>
int main(){
    //write a prg to store percentage of 10 students userdefine
    float percentage[10];
    int i;
    for(i =0;percentage[i]<10;i++){
        printf("\nentre percentage of students%d::\t",i++);
        scanf("%f",&percentage[i]);
    }
    
    for(i=0;i<10;i++);
    {
        printf("\n percentage of students %d>>\t %4.2f",i+1,percentage[i]);
    }
    
    return 1;
}
