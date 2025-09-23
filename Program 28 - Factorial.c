/******************************************************************************
WAPC to input a positive integer from the user. Find and display the factorial of the number.
*******************************************************************************/
#include<stdio.h>

int main()
{
    unsigned int num, i; int factorial=1;
    printf("\nEnter a positive integer: ");
    scanf("%u", &num);
    if(num==0)
    {
        printf("\nThe factorial of %d is 1", num);
    }
    else if(num>0)
    {
        for(i=1;i<=num;i++)
        {
            factorial*=i;
        }
        printf("\nFactorial = %d", factorial);
    }
    return 0;
}