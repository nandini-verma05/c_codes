#include<stdio.h>
int main(){
    int roll,phy,chem,ma,total;
    float per;
    printf("entre the roll number>>");
    scanf("%d",&roll);
    printf("entre marks of maths>>");
    scanf("%d",&ma);
    printf("entre marks ofchemistry>>");
    scanf("%d",&chem);
    printf("entre marks of physics>>");
    scanf("%d",&phy);
    total =phy+ma+chem;
    per=(total)/300*100;
    printf("the roll numnber >>> %d \n total marks= %d \n percentage=%2f",roll,total,per);
}
