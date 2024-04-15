#include<stdio.h>
#include<string.h>
int main(){
    int i,len =0,words=1,space=0;
    char str[1000];
    printf("entre a string  >>");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if( str[i]==' '|| str[i]!='\n'|| str[i]!='\t'){
            words++;
        }
        if(str[i]==' '){
            space++;
        }
        if(str[i]!=' '){
            len++;
        }
    }
    
    printf("the number of words=%d\n",words-1);
    printf("the number of space=%d\n",space);
    printf("the number of character=%d\n",len);


}