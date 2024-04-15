#include<stdio.h>
#include<string.h>
int main(){
    int i,len;
    char s[1000];
    char cr1='*';
    char cr2='#';
    printf("entre a string>>");
    scanf("%s",&s);
    len=strlen(s);
    for(i=0;i<len;i++){
    if(s[i]=='e'){
        s[i]=cr1;
    }
    if(s[i]=='c'){
        s[i]=cr2;
    }
    }
printf("%s",s);
    
return 0;
}