#include <stdio.h>

int main()
{
   
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("Num1 is max.");
        }
        else
        {
            printf("Num3 is max.");
        }
    }
    else
    {
        if(num2 > num3)
        {
            printf("Num2 is max.");
        }
        else
        {
            printf("Num3 is max.");
        }
    }

    return 0;
}