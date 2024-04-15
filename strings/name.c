#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char name[200]; 
    int n;
   // printf("\nenter your name>>");
   // scanf("%s",&name);
  //  printf("intial is= %c %c",ch,temp);
   printf(" short of name is >>%c" ,intialingname("nandini singh"));

}
char intialingname(){
    int i=0;
    char name[200],c,ch;
    while((c=name[i])!='/t'){
        if(i==0){
            ch=c;   
    //printf("intial is= %c",a[0]);
        }
        i++;
    }
    char* temp = (char*)malloc(sizeof(name) + 1);

    printf("intial is= %c %c",ch,temp);

 

}

