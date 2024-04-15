#include<stdio.h>
#include<string.h>
//doubt 
void main()
{
  char str[25];
   int i;
   printf("Enter the string: ");
   scanf("%s",&str);
 
   for(i=0;str[i]!='\0';i++){
      if(str[i]>=65&&str[i]<=90)
      {
         str[i]=str[i]+32;
         printf("\nLower Case String is: %s",str);
      }
         
         if(str[i]>=97&&str[i]<=122)
         {
          str[i]=str[i]-32;
         printf("\nupper Case String is: %s",str);
         }
      //printf("\nupper Case String is: %s",str);
      
}
}