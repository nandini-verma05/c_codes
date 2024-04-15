#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char sen[1000],i;
    int len,count1=0,count2=0,count3=0,count4=0,count5=0;
    printf("input entre a sentence>>");
    scanf("%s",&sen);
    len=strlen(sen);
    for (  i=0;i<=len;i++){
        if(sen[i]=='a'|| sen[i]=='e'||sen[i]=='i'||sen[i]=='o'||sen[i]=='u' ||
         sen[i]=='A'|| sen[i]=='E'||sen[i]=='I'||sen[i]=='O'||sen[i]=='U'){
            count1++;
            
        }
        else if( sen[i]>='A' && sen[i]<='Z'){
            count2++;
           
        }
         else if( sen[i]>='a' && sen[i]<='z'){
            count3++;
          
        }
        else if( sen[i]>='0' && sen [i]<='9'){
            count4++;
            
        }else
        {
            count5++;
        }
        }
        
          
        
    
         printf(" number of vowels>>%d\n",count1);  
           printf("number of special character>>%d\n",count5); 
           printf("number of digits>>%d\n",count4);
             printf("number of uppercase>>%d\n",count2);
             printf("number of lower case>>%d",count3);
    
        return 0;
    }





