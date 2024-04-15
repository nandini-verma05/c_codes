#include<stdio.h>
#include<string.h>
//counts number of lines

int main(){
    char str[1000];
    int number=0,len;
    printf("entre the string>>");
    scanf("%[^;]",&str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            number++;
        }
    }
    printf(" the number of line in the given string>>%d",number);
return 0;
}