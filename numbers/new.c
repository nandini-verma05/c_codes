#include <stdio.h>

int main() 

{
   int a,b,c,m;
   printf("enter 1st,2nd,3rd number");
   scanf("%d%d%d",&a,&b,&c);
  
   m=a;
   if(b>m)
   
       m=b;
   
   
   if(c>m)
   
  m=c;
   
   printf("%d",m);
   
   
   return 0;
}