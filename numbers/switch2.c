#include <stdio.h>      //1>add,2>sub,3>multuply,4>divid,5>areaofrectange,6>areaofcircle,7>areaoftriangle
int main(){             //8>fibonacci,9>amstrong,10>prime number,11>primefactor,12>palindrome,13>hcf&lcm
    int num;            //14>spynumber,15>perfect number ,16>next prime number 
    printf("entre a number between 1 to 15");
    scanf("%d",&num);
    int i,j,k,len,bre,a=0,b=1,sum=0,original,number,number2,c =a+b, isprime=0 ,hcf,lcm; 
    float rad,bs,h;
    switch(num){
        case 1:
        //adding
        printf("entre two numbers>>");
        scanf("%d %d",&i,&j);
        printf(" add of %d",i+j);
        break;
        case 2:
        //subtraction
        printf("entre two number>>");
        scanf("%d %d", &i,&j);
        printf(" sub of %d",i-j);
        break;
        case 3:
        //multiply
        printf("entre two number>>");
        scanf("%d %d",&i,&j);
        printf("multiplication if number %d",i*j);
        break;
        case 4:
        printf("entre two number>>>");
        scanf("%d %d",&i,&j);
        if (i<j){
            printf(" dividing  the number we get %d",j/i);
        }else{
        printf("dividing the number we get %d",i/j);
        } break;
        case 5:
        //area of rectange
        printf("entre the sides of the rectangle>> ");
        scanf("%d %d",&len,&bre);
        printf("area of rectange %d",len*bre);
        break;
        case 6:
        //area of circle
        printf("entre the side");
        scanf("%f",&rad);
        printf(" the area of circle is %f",rad*rad*3.14);
        break;
        case 7:
        //area of tiriangle
        printf("entre the base and height :");
        scanf("%f %f",&bs,&h);
        printf("%f is the area of the triangle", 0.5*bs*h);
        break;
        case 8:
        //fibbonacci sequence giving n number of terms
        printf("entre a the term>>");
        scanf("%d",&number);
        printf("the fibbonacci sequence is %d\n %d\n",&a,&b);
        for (i=3;i>=number;i++){
            printf("%d",&c);
        a=b;
        b=c;
        c=a+b;
        }break;
        case 9:
        //armstong number

        printf("entre the number>>");
        scanf("%d",&number);
        original=number;
        while(original>0){
            k=original%10;
            sum=sum+k*k*k;
            original=original/10;
        }
        if(sum==number){
            printf("it is an amstrong number");
        }
        else{
            printf("it is not a amstrong");
        }break;
        case 10:
        //prime number
        printf("entre a number>>");
        scanf("%d",&number);
        if(number==0 || number==1){
            isprime=0;
        } for (i=2;i<=number/2;i++){
            isprime=0;
            break;
        }
        if(isprime==1){
            printf("it is a prime number");
        }else{
            printf("it is not a prime number");
        } break;
        case 11:
        // primefactor
        printf("entre a number>>");
        scanf("%d",&number);
        for(i=1;i<=number;i++){
        if(number%i==0){
            isprime=1;
        for(j=2;j<=i/2;j++){
            if(j%i==0){
              isprime=0;
              break;
            }
        }
        }
        if(isprime==1){
            printf("the factor is%d",i);
        }
        }break;
        case 12: 
        //palindrome number
        printf("entre a number>>");
        scanf("%d",number);
        original=number;
        while(number>0){
            k= number% 10;
            sum=(sum*10)+k;
            number=number/10;
        }
        if(sum==original){
            printf("it is a palindrome");
        }else{
            printf("ot is not apalindrome");
        }break;
        case 13:
        //hcf and lcm of 2numbers
        printf("entre the first numbber>>");
        scanf("%d",&number);
        printf("entre second number>>");
        scanf("%d",&number2);
        for(i=1;i<=number||i<=number2;i++){
            if(number%i==0 && number2%i==0){
                hcf=i;
               }
                }
                lcm=number*number2/hcf;
                printf("hcf  is %d and lcm is %d" ,hcf,lcm);
                break;
         case 14:
                //spy number
                printf("entre a number>>");
                scanf("%d",&number);
                 for(;number>0;){
                     k=number%10;
                     a=a+k;
                     b=b*k;
                     number=number/10;
                     }
                      printf("%d sum of digit =%d sum of product =%d\n",a,b);
                        if(a==b){
                              printf("it is spy number");
                         }
                          else{
                             printf("it is not spy");
                         }
                         break;
         case 15:
         //perfect number
         printf("entre anumber>>");
         scanf("%d",&number);
         for(i=1;i=number;i++){
            k+number%i;
            if(k==0){
                a=a+i;
            }
         }if(number==a){
            printf("it is aperfect number");
         }else{
            printf("it is not a perfect number");
         } break;
        case 16:
        //print next prime number
        printf("entre A NUMBER");
        scanf("%d",number);
        for (i=num +1;i<=1000;i++){
        isprime =0;
        for(j=2;j<i;j++){
            if(i%j==0){
                isprime=1;
                break;
            }

        }
        if(isprime==0){
            printf("next prime number  is %d",i);
            break;
        }
    } break;
        default:
        printf("wrong input");

    }return 0;
    








        
}