#include<stdio.h>

   int main() {
    int i,n,c=0,l=0,s=0;
        printf("enter no=");
        
        for(i=1;i<=10;i++){
            scanf("%d",&n);
            c++;
            if(c==1){
                s=l=n;
            }
            if(n>l){
                l=n;
            }
            if(n<s){
                s=n;
            }
        }
        printf("the largest no= %d \n",l);
        printf("the smallest no= %d \n",s);
            

    return 0;
}

