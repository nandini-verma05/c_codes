#include<stdio.h>
int main(){
  int j , i,n,c=0,l=0,s=0,ele;
  int arr[10];
        printf("enter number of elements=");
        scanf("%d",&ele);
        while(ele<0 || ele>11){
            printf("error! entre the number of elements again form 1to 10 ");
            printf("entre number of elements>>");
            scanf("%d",&ele);
        }
        
        for(i=1;i<=ele;i++){
             printf("%d. Enter number: ", i + 1);
             scanf("%f", &arr[i]);
        
        for(j=0;j<=arr[i];j++){
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
        
        
        printf("the largest no= %d \n",l);
        printf("the smallest no= %d \n",s);
        }    
}

    return 0;
}


