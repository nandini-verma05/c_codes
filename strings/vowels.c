#include<stdio.h>
#include<string.h>
void main(){
    int len,i;
    char a[1000];
    printf("entre a string>>");
    scanf("%[^\n]s",&a);
    len=strlen(a);
    for (  i=0;i<len;i++){
        if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
           
            printf("%c",a[i]);   
        }
    }

    
}