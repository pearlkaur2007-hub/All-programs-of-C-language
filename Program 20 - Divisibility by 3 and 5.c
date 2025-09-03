/******************************************************************************
 
WAPC to check and print if a number is divisible by both 3 and 5.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if(num%3==0 && num%5==0)
    {
        printf("\nThe number is divisible by both 3 and 5");
    }
    else
    {
        printf("\nThe number is not divisible by both 3 and 5");
    }
    return 0;
}
