#include<stdio.h>
#include<string.h>
//concarante string one into string two
int main(){
    int len;
 char s1[]="sibyan\t";
 char s2[]="sir";
 strcat(s1,s2);
 printf("fullname:%s\n",s1);
 len=strlen(s1);
  printf(" enght of string 1 is%d",len);
return 0;
}
