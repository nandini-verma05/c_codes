 #include<stdio.h>
int main()
{
  int n1,n2,i,isprime =1;
  printf("enter the 1st prime number: ");
  scanf("%d",&n1);
  printf("enter the 2nd prime number: ");
  scanf("%d",&n2);
  for (int i = 2; i <= n1 / 2; i++) {
  if (n1 % i == 0) {
    isprime = 0;
        break;
   }

 }
   if (isprime  && (n1- n2) == 2) {
    isprime=1;

 for (int i = 2; i <= n2 / 2; i++) {
 if (n2 % i == 0) {
     isprime=0;
      break;
} 
 }
   }
  if(isprime){
            printf("it is a twin prime");
        }
        else{
            printf("it is not a twin prime");
        }
        return 0;
}

