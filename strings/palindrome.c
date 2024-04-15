#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
  
    char word[1000];
    printf("entre a word >>");
    scanf("%s",&word);
    strrev(word);
    if(strrev(word)==word){
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
    


    }


